#include "main_class_for_rdpr_type_memory.h"

main_class_for_rdpr_type_memory::main_class_for_rdpr_type_memory()
{

}

void main_class_for_rdpr_type_memory::set_V(int _V)
{
    this->_V = _V;
}

int main_class_for_rdpr_type_memory::get_V() const
{
    return _V;
}

int main_class_for_rdpr_type_memory::run()
{
    this->ust_obr_process();
    int counter_of_lose = 0;

    while (!this->is_all_zad_ended()){
        counter_of_lose += this->chose_process_for_ustr();

        T += this->shag();

        this->ust_obr_process();
    }

    //костыль, я добавляю потери к Т

    this->T += counter_of_lose / 2;

    this->sred_T = T / this->KZ;

    return sred_T;
}

void main_class_for_rdpr_type_memory::check_end_all_process_in_zad()
{
    for(int iz = 0; iz < this->vec_of_all_zad.size(); ++iz){
        bool is_iz_ended = 0;
        for(int ip = 0; ip < this->vec_of_all_zad[iz]->get_vec_of_process().size(); ++ip)
            if(this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_ost_dlitenost_obrab() != 0 || this->vec_of_all_zad[iz]->get_sost_zad() == zaversheno)
                is_iz_ended = 1;
        if(is_iz_ended == 0){
            this->vec_of_all_zad[iz]->set_sost_zad(zaversheno);
            this->set_V(this->get_V() + this->vec_of_all_zad[iz]->get_V_ozu_trebuemiy_vsemu_zad());
        }
    }
}

int main_class_for_rdpr_type_memory::chose_process_for_ustr()
{
    int counter_of_lose = 0;

    while(true){
        int number_of_zad_for_push_into_razd = -1;
        int max_needed_memory_not_minus = 1000000000;

        for(int iz = 0; iz < this->get_KZ(); ++iz)
              if(this->vec_of_all_zad[iz]->get_sost_zad() == ne_zagr){
                  int ms = this->get_V() - this->vec_of_all_zad[iz]->get_V_ozu_trebuemiy_vsemu_zad();
                  if(ms >= 0 && ms < max_needed_memory_not_minus){
                      number_of_zad_for_push_into_razd = iz;
                      max_needed_memory_not_minus = ms;
                      }
               }

        if(number_of_zad_for_push_into_razd == -1)
            break;

        this->vec_of_all_zad[number_of_zad_for_push_into_razd]->set_sost_zad(zagr);
        this->set_V(max_needed_memory_not_minus);
        ++counter_of_lose;
    }

    //загрузка освободившихся устройств
    for(int iy = 0; iy < this->get_KY(); ++iy){
sheet_label2:
        if(iy >= this->get_KY())
            break;
        if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() == -1)
            for(int iz = 0; iz < this->get_KZ(); ++iz)
                if(this->vec_of_all_zad[iz]->get_sost_zad() == zagr)
                    //auto* ip = this->vec_of_all_zad[iz]->get_obr_process();
                    if(this->vec_of_all_ustr[iy] == this->vec_of_all_zad[iz]->get_obr_process()->get_needed_ustr() && this->vec_of_all_zad[iz]->get_obr_process()->get_ost_dlitenost_obrab() != 0){
                        this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(iz);
                        this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(this->vec_of_all_zad[iz]->get_obr_process()->get_ost_dlitenost_obrab());

                        this->vec_of_all_zad[iz]->set_sost_zad(obrab);
                        this->vec_of_all_zad[iz]->set_obr_process(this->vec_of_all_zad[iz]->get_obr_process());
                        ++iy;
                        goto sheet_label2;
                    }
    }

    return counter_of_lose;
}

int main_class_for_rdpr_type_memory::shag()
{
    //Поиск ближайшей особой точки
    int min_time_obr = 1000000000;
    ustroistvo* obrabat_ustroistvo_with_min_time = nullptr;

    for(int iy = 0; iy < this->vec_of_all_ustr.size(); ++iy)
        if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() != -1 &&
                this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() < min_time_obr){
            min_time_obr = this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti();
            obrabat_ustroistvo_with_min_time = this->vec_of_all_ustr[iy];
        }

    if(obrabat_ustroistvo_with_min_time != nullptr) {      // условие на всякий случай

        for(int iy = 0; iy < this->get_KY(); ++iy)
            if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() != -1){
                this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() - min_time_obr);
                this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->get_obr_process()->set_ost_dlitenost_obrab(this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->get_obr_process()->get_ost_dlitenost_obrab() - min_time_obr);
                if(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() == 0){
                    this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->set_sost_zad(zagr);
                    this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(-1);
                }
                    this->check_end_all_process_in_zad();
            }
    }

    else
        return 0;

    return min_time_obr;
}

void main_class_for_rdpr_type_memory::set_zatCP(int _zatCP)
{
    this->_zatCP = _zatCP;
}

int main_class_for_rdpr_type_memory::get_zatCP() const
{
    return this->_zatCP;
}
