#include "main_class_for_seg_type_memory.h"

main_class_for_seg_type_memory::main_class_for_seg_type_memory(){}

void main_class_for_seg_type_memory::set_V(int _V)
{
    this->_V = _V;
}

int main_class_for_seg_type_memory::get_V() const
{
    return  _V;
}

void main_class_for_seg_type_memory::set_zatMD(int _zatMD)
{
    this->_zatMD = _zatMD;
}

int main_class_for_seg_type_memory::get_zatMD() const
{
    return _zatMD;
}

void main_class_for_seg_type_memory::set_zatCP(int _zatCP)
{
    this->_zatCP = _zatCP;
}

int main_class_for_seg_type_memory::get_zatCP() const
{
    return this->_zatCP;
}

int main_class_for_seg_type_memory::run()
{
    int T = 0;
    int lose_CP = 0;
    int lose_MD = 0;

    while (!this->is_all_zad_ended())
    {

        int counter_of_lose = this->chose_process_for_ustr();
        for(int i = 0; i < counter_of_lose; ++i)
            { lose_CP += this->_zatCP; lose_MD += this->_zatMD; }

        /*if(this->vec_of_all_ustr[0]->get_number_zadaniya_obr_na_ustroistve() != -1)
           this->vec_of_all_ustr[0]->set_ost_vremya_zanyatosti(this->vec_of_all_ustr[0]->get_ost_vremya_zanyatosti() + lose_CP);
        if(this->vec_of_all_ustr[1]->get_number_zadaniya_obr_na_ustroistve() != -1)
           this->vec_of_all_ustr[1]->set_ost_vremya_zanyatosti(this->vec_of_all_ustr[1]->get_ost_vremya_zanyatosti() + lose_MD);*/

        T += this->shag();
    }

    // Злой костыль, я просто прибавляю потери к T

    T += lose_CP + lose_MD;

    this->sred_T = T / this->KZ;

    return sred_T;
}

int main_class_for_seg_type_memory::chose_process_for_ustr()
{
    int counter_of_lose = 0;

    for(int iy = 0; iy < this->vec_of_all_ustr.size(); ++iy)
        for(int iz = 0; iz < this->vec_of_all_zad.size(); ++iz){
            sheet_label:
            for(int ip = 0; iy < this->vec_of_all_ustr.size() && iz < this->vec_of_all_zad.size() && ip < this->vec_of_all_zad[iz]->get_vec_of_process().size(); ++ip){

                for(int ip1 = ip - 1; ip1 >= 0; --ip1)
                    if(this->vec_of_all_zad[iz]->get_vec_of_process()[ip1]->get_ost_dlitenost_obrab() > 0)
                        {                                                           ///govno
                        ++iz;
                        goto sheet_label; }

                bool ustroistvo_svobodno = this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() == -1;
                bool ustr_iy_need_process_ip = this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_needed_ustr() == this->vec_of_all_ustr[iy];
                bool process_ip_isnt_ended = this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_ost_dlitenost_obrab() > 0;
                bool zad_iz_is_free = this->vec_of_all_zad[iz]->getsost() == 0;
                bool zad_is_free_1 = this->vec_of_all_zad[iz]->get_sost_zad() != obrab;
                bool OZU_est = this->_V >= this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_trebuemiy_V_OZU();

                if(ustroistvo_svobodno && ustr_iy_need_process_ip && process_ip_isnt_ended && zad_iz_is_free && zad_is_free_1 && OZU_est){
                    if(this->_V >= this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_trebuemiy_V_OZU()){
                        this->_V -= this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_trebuemiy_V_OZU();
                        this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_ost_dlitenost_obrab());
                        this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(iz);
                        this->vec_of_all_zad[iz]->set_sost_zad(obrab);
                        this->vec_of_all_zad[iz]->set_obr_process(this->vec_of_all_zad[iz]->get_vec_of_process()[ip]);
                        this->vec_of_all_zad[iz]->change_sost();
                        ++counter_of_lose;
                    }
                    else{ break; }


                }
            }
        }

    return counter_of_lose;
}

int main_class_for_seg_type_memory::shag()
{
    int min_time_obr = 1000000000;
    ustroistvo* obrabat_ustroistvo_with_min_time = nullptr;

    for(int iy = 0; iy < this->vec_of_all_ustr.size(); ++iy)
        if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() != -1 &&
                this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() < min_time_obr){
            min_time_obr = this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti();
            obrabat_ustroistvo_with_min_time = this->vec_of_all_ustr[iy];
        }

if(obrabat_ustroistvo_with_min_time != nullptr) {      // условие на всякий случай

    for(int iy = 0; iy < this->vec_of_all_ustr.size(); ++iy)
        for(int iz = 0; iz < this->vec_of_all_zad.size(); ++iz)
            if(this->vec_of_all_zad[iz]->get_sost_zad() == obrab && this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() != -1)            /// ошибка тут
                 if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() == iz){
                    this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() - min_time_obr);
                    this->vec_of_all_zad[iz]->get_obr_process()->set_ost_dlitenost_obrab(this->vec_of_all_zad[iz]->get_obr_process()->get_ost_dlitenost_obrab() - min_time_obr);
                }

    for(int iy = 0; iy < this->vec_of_all_ustr.size(); ++iy)
        if(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() == 0 && this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() > -1){
            process* ended_process = this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->get_obr_process();
            this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->change_sost();
            //this->vec_of_all_ustr[iy]->change_sost();
            this->_V += ended_process->get_trebuemiy_V_OZU();
            this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->set_sost_zad(zagr);
            this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(-1);

            this->check_end_all_process_in_zad();
            }
}
    return min_time_obr;
}
