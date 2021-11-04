#include "main_class_for_rstat_type_memory.h"

//main_class_for_rstat_type_memory::main_class_for_rstat_type_memory(){}

void main_class_for_rstat_type_memory::set_V(int _V)
{
    this->_V = _V;
}

int main_class_for_rstat_type_memory::get_V() const
{
    return _V;
}

int main_class_for_rstat_type_memory::run()
{
    this->ust_obr_process();

    while (!this->is_all_zad_ended()){
        this->chose_process_for_ustr();

        T += this->shag();

        this->ust_obr_process();
    }

    this->sred_T = T / this->KZ;

    return sred_T;
}

int main_class_for_rstat_type_memory::shag()
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
                if(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() == 0)
                    this->vec_of_all_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->set_sost_zad(zagr);
                    this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(-1);
                    this->check_end_all_process_in_zad();
            }
    }

    else
        return 0;

    return min_time_obr;
}


void main_class_for_rstat_type_memory::check_end_all_process_in_zad()
{
    for(int iz = 0; iz < this->vec_of_all_zad.size(); ++iz){
        bool is_iz_ended = 0;
        for(int ip = 0; ip < this->vec_of_all_zad[iz]->get_vec_of_process().size(); ++ip)
            if(this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_ost_dlitenost_obrab() != 0)
                is_iz_ended = 1;
        if(is_iz_ended == 0){
            this->vec_of_all_zad[iz]->set_sost_zad(zaversheno);
            for(int iss = 0; iss < this->get_kol_razd(); ++iss)
                if(this->vec_of_all_razd[iss]->get_number_zad_razm_v_razdele() == iz)
                    this->vec_of_all_razd[iss]->set_number_zad_razm_v_razdele(-1);
        }
    }
}


void main_class_for_rstat_type_memory::chose_process_for_ustr()
{
    //Загрузка заданий, помещаемых в разделы памяти
    for(int iss = 0; iss < this->kol_razd; ++iss)
        if(this->vec_of_all_razd[iss]->get_number_zad_razm_v_razdele() == -1){
            int number_of_zad_for_push_into_razd = -1;
            int max_needed_memory_not_minus = 1000000000;
            for(int iz = 0; iz < this->get_KZ(); ++iz)
                if(this->vec_of_all_zad[iz]->get_sost_zad() == ne_zagr){
                    int ms = this->vec_of_all_razd[iss]->get_V_razdela() - this->vec_of_all_zad[iz]->get_V_ozu_trebuemiy_vsemu_zad();
                    if(ms >= 0 && ms < max_needed_memory_not_minus){
                        number_of_zad_for_push_into_razd = iz;
                        max_needed_memory_not_minus = ms;
                    }
                }

            if(number_of_zad_for_push_into_razd != -1){
                vec_of_all_zad[number_of_zad_for_push_into_razd]->set_sost_zad(zagr);
                this->vec_of_all_razd[iss]->set_number_zad_razm_v_razdele(number_of_zad_for_push_into_razd);
            }
        }

    //загрузка освободившихся устройств
    for(int iy = 0; iy < this->get_KY(); ++iy){
sheet_label1:
        if(iy >= this->get_KY())
            break;
        if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() == -1)
            for(int iz = 0; iz < this->get_KZ(); ++iz)
                if(this->vec_of_all_zad[iz]->get_sost_zad() == zagr || this->vec_of_all_zad[iz]->get_sost_zad() == obrab)
                    //auto* ip = this->vec_of_all_zad[iz]->get_obr_process();
                    if(this->vec_of_all_ustr[iy] == this->vec_of_all_zad[iz]->get_obr_process()->get_needed_ustr() && this->vec_of_all_zad[iz]->get_obr_process()->get_ost_dlitenost_obrab() != 0){
                        this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(iz);
                        this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(this->vec_of_all_zad[iz]->get_obr_process()->get_ost_dlitenost_obrab());

                        this->vec_of_all_zad[iz]->set_sost_zad(obrab);
                        this->vec_of_all_zad[iz]->set_obr_process(this->vec_of_all_zad[iz]->get_obr_process());
                        ++iy;
                        goto sheet_label1;
                    }
    }
}

void main_class_for_rstat_type_memory::push_razd(razdel *_razdel)
{
    this->vec_of_all_razd.push_back(_razdel);
}

bool main_class_for_rstat_type_memory::remove_razd(razdel *_razdel)
{
    auto iter_for_remove = std::find(this->vec_of_all_razd.begin(), this->vec_of_all_razd.end(), _razdel);
    if(iter_for_remove != this->vec_of_all_razd.end())
        this->vec_of_all_razd.erase(iter_for_remove);
    else
        return false;
    return true;
}

void main_class_for_rstat_type_memory::set_kol_razd(int kol_razd)
{
    this->kol_razd = kol_razd;
}

int main_class_for_rstat_type_memory::get_kol_razd() const
{
    return kol_razd;
}
