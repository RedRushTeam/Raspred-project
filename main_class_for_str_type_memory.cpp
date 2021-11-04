#include "main_class_for_str_type_memory.h"

#include <QMessageBox>

main_class_for_str_type_memory::main_class_for_str_type_memory(){}

int main_class_for_str_type_memory::run()
{
    this->take_needed_OZU();
    int lose_MD = 0;
    int lose_CP = 0;
    int flag_for_break_iz = 0;
    int kol_sovp_str_with_ip = 0;
    int tek_potr_v_str = 0;

    this->ust_obr_process();

    while (!this->is_all_zad_ended()){

    for(int iy = 0; iy < this->get_KY(); ++iy)
        if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() == -1)
            for(int iz = 0; iz < this->get_KZ(); ++iz)
                if(this->vec_of_all_str_zad[iz]->get_sost_zad() == zagr){
                    auto* ip = this->vec_of_all_str_zad[iz]->get_obr_process();
                    if(this->vec_of_all_ustr[iy] == ip->get_needed_ustr()){
                        int kol_treb_str = this->vec_of_all_str_zad[iz]->get_obr_process()->get_trebuemiy_V_OZU();
                        kol_sovp_str_with_ip = 0;
                        kol_sovp_str_with_ip = this->generate_col_sovp_str(this->vec_of_all_str_zad[iz], kol_treb_str, kol_sovp_str_with_ip);
                        this->vec_of_all_str_zad[iz]->set_number_of_sovp_blocks_ozu(kol_sovp_str_with_ip);
                        tek_potr_v_str = this->generate_random_int_number(kol_treb_str / 2, kol_treb_str);     //я тут подкрутил генерацию необходимых объемов, чтобы памяти надо было больше
                        while(tek_potr_v_str > kol_sovp_str_with_ip){
                            flag_for_break_iz = 0;
                            flag_for_break_iz = this->take_memory(iz, tek_potr_v_str, kol_sovp_str_with_ip);

                            if(flag_for_break_iz)
                                break;

                            lose_MD += this->get_zatMD();
                            lose_CP += this->get_zatCP();
                            ++kol_sovp_str_with_ip;
                        }

                        if(flag_for_break_iz)
                            continue;

                        this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(iz);
                        this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(ip->get_ost_dlitenost_obrab());
                        this->vec_of_all_str_zad[iz]->set_sost_zad(obrab);
                        this->vec_of_all_str_zad[iz]->set_obr_process(ip);
                        this->vec_of_all_str_zad[iz]->set_last_obr_T(T);
                        iz = this->get_KZ();    //Вместо break для цикла с KZ, опасное действие
                    }
                }
    //память выделена, процессы выбраны, делаем шаг

    //QMessageBox::warning(NULL, "Внимание",QString::number(1));

    this->shag();

    this->ust_obr_process();

    }

    // Злой костыль, я просто прибавляю потери к T

    //QMessageBox::warning(NULL, "Внимание",QString::number(155555566));

    if(lose_CP + lose_MD != 0)
       T += (lose_CP + lose_MD) / 2;

    this->sred_T = T / this->KZ;

    return sred_T;
}


int main_class_for_str_type_memory::take_memory(int iz, int tek_potr_v_str, int kol_sovp_str_with_ip)
{
    int flag_for_break_iz = 0;
    flag_for_break_iz = this->check_str(this->vec_of_all_str_zad[iz], iz, tek_potr_v_str);

    if(flag_for_break_iz)
        return 1;

    this->vec_of_all_str_zad[iz]->set_number_of_sovp_blocks_ozu(this->vec_of_all_str_zad[iz]->get_number_of_sovp_blocks_ozu() + 1);
    kol_sovp_str_with_ip = this->vec_of_all_str_zad[iz]->get_number_of_sovp_blocks_ozu();
    return 0;
}

void main_class_for_str_type_memory::create_all_zad_and_process()
{
    zadanie_for_str* zad_for_push;
    process* process_for_push;
    for(int i = 0; i < this->get_KZ(); ++i){

        zad_for_push = new zadanie_for_str();
        int kol_process = this->generate_random_int_number(2, this->get_maxKPZ());
        zad_for_push->set_obr_process(nullptr);
        zad_for_push->set_chislo_processov_v_zadanii(kol_process);
        zad_for_push->set_sost_zad(zagr);

        if(this->get_type_of_raspred() == rstat_ || this->get_type_of_raspred() == rdpr_)
            zad_for_push->set_sost_zad(ne_zagr);

        int all_V_for_zad = 0;

        for(int j = 0; j < kol_process; ++j){
            process_for_push = new process();

            int trebuemiy_V_OZU =  this->generate_random_int_number(10, this->maxVP);
            all_V_for_zad += trebuemiy_V_OZU;
            process_for_push->set_trebuemiy_V_OZU(trebuemiy_V_OZU);

            process_for_push->set_ost_dlitenost_obrab(this->generate_random_int_number(10, this->get_maxPP()));

            int needed_ustr_numb = this->generate_random_int_number(0, this->get_KY() - 1);

            process_for_push->set_needed_ustr(this->get_concrest_ustr(needed_ustr_numb));

            zad_for_push->push_process(process_for_push);
        }
        zad_for_push->set_V_ozu_trebuemiy_vsemu_zad(all_V_for_zad);
        this->vec_of_all_str_zad.push_back(zad_for_push);
        zad_for_push = nullptr;
    }
}

bool main_class_for_str_type_memory::is_all_zad_ended() const
{
    for(auto obj : this->vec_of_all_str_zad)
        if(obj->get_sost_zad() != zaversheno)
            return false;
    return true;
}

int main_class_for_str_type_memory::generate_col_sovp_str(zadanie_for_str *_zad, int kol_treb_str, int kol_sovp_str_with_ip) const
{
    for(int i = 0; i < _zad->get_V_ozu_trebuemiy_vsemu_zad(); ++i){
        int SZT = this->generate_random_int_number(_zad->get_V_ozu_trebuemiy_vsemu_zad() / 2, _zad->get_V_ozu_trebuemiy_vsemu_zad());      //я тут подкрутил генерацию необходимых объемов, чтобы памяти надо было больше
        if(SZT <= _zad->get_number_of_blocks_ozu()){
            SZT = this->generate_random_int_number(_zad->get_V_ozu_trebuemiy_vsemu_zad() / 2, _zad->get_V_ozu_trebuemiy_vsemu_zad());      //я тут подкрутил генерацию необходимых объемов, чтобы памяти надо было больше
            if(SZT <=kol_treb_str)
                ++kol_sovp_str_with_ip;
        }
    }

    return kol_sovp_str_with_ip;
}

int main_class_for_str_type_memory::check_str(zadanie_for_str *_zad, int index, int tek_potr_v_str)
{
    if(tek_potr_v_str > _zad->get_number_of_sovp_blocks_ozu()){
        if(this->get_V() <= 0){
            int number_of_zad_for_shrink_V = -1;
            for(int iz = 0; iz < this->get_KZ(); ++iz)
                if(this->vec_of_all_str_zad[iz]->get_number_of_blocks_ozu() > 0 && this->vec_of_all_str_zad[iz]->get_number_of_blocks_ozu() > this->vec_of_all_str_zad[iz]->get_number_of_sovp_blocks_ozu())
                    number_of_zad_for_shrink_V = iz;
            if(number_of_zad_for_shrink_V == -1){
                //лишней памяти нет ни у одного процесса, надо резать по живому
                int index_of_old_zad = this->change_old_zad(index);
                if(index_of_old_zad == -1)
                    return true;
                //тут еще должно проверяться, нашлось ли древнее задание, если нет, то надо возвращать 1, итерация в вызывающей функции прервется
            }
            else{
                this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->set_number_of_blocks_ozu(this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->get_number_of_blocks_ozu() - 1);
                goto label;
            }

        }
        else
            this->set_V(this->get_V() - 1);

label:  _zad->set_number_of_blocks_ozu(_zad->get_number_of_blocks_ozu() + 1);
    }

    return NULL;
}

int main_class_for_str_type_memory::change_old_zad(int index)
{
    int number_of_zad_for_shrink_V = -1;
    int max_time_for_most_old_zad = this->T;

    for(int iz = 0; iz < this->get_KZ(); ++iz)
        if(iz != index &&
                this->vec_of_all_str_zad[iz]->get_sost_zad() != obrab &&
                    this->vec_of_all_str_zad[iz]->get_number_of_blocks_ozu() != 0 &&
                        max_time_for_most_old_zad >= this->vec_of_all_str_zad[iz]->get_last_obr_T())
        {   number_of_zad_for_shrink_V = iz;    max_time_for_most_old_zad = this->vec_of_all_str_zad[iz]->get_last_obr_T(); }
    if(number_of_zad_for_shrink_V == -1)
        return -1;
    if(this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->get_number_of_sovp_blocks_ozu() > 0)
        this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->set_number_of_sovp_blocks_ozu(this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->get_number_of_sovp_blocks_ozu() - 1);

    this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->set_number_of_blocks_ozu(this->vec_of_all_str_zad[number_of_zad_for_shrink_V]->get_number_of_blocks_ozu() - 1);
    return number_of_zad_for_shrink_V;
}

void main_class_for_str_type_memory::take_needed_OZU()
{
    for(auto obj : this->vec_of_all_str_zad)
        obj->set_number_of_blocks_ozu(0);
}

int main_class_for_str_type_memory::shag()
{
    this->T = this->T + 1;

    for(int iy = 0; iy < this->get_KY(); ++iy)
        if(this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve() != -1){
            this->vec_of_all_ustr[iy]->set_ost_vremya_zanyatosti(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() - 1);
            this->vec_of_all_str_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->get_obr_process()->set_ost_dlitenost_obrab(this->vec_of_all_str_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()]->get_obr_process()->get_ost_dlitenost_obrab() - 1);
            auto* iz = this->vec_of_all_str_zad[this->vec_of_all_ustr[iy]->get_number_zadaniya_obr_na_ustroistve()];
            iz->set_last_obr_T(this->T);
            if(this->vec_of_all_ustr[iy]->get_ost_vremya_zanyatosti() == 0){
                this->vec_of_all_ustr[iy]->set_number_zadaniya_obr_na_ustroistve(-1);
                iz->set_sost_zad(zagr);

                this->check_end_all_process_in_zad();
            }
        }
    return NULL;
}

void main_class_for_str_type_memory::check_end_all_process_in_zad()
{
    for(int iz = 0; iz < this->vec_of_all_str_zad.size(); ++iz){
        bool is_iz_ended = 0;
        for(int ip = 0; ip < this->vec_of_all_str_zad[iz]->get_vec_of_process().size(); ++ip)
            if(this->vec_of_all_str_zad[iz]->get_vec_of_process()[ip]->get_ost_dlitenost_obrab() != 0)
                is_iz_ended = 1;
        if(is_iz_ended == 0){
            this->vec_of_all_str_zad[iz]->set_sost_zad(zaversheno);
        }
    }
}

void main_class_for_str_type_memory::ust_obr_process()
{
    for(int iz = 0; iz < this->vec_of_all_str_zad.size(); ++iz)
        for(auto obj : this->vec_of_all_str_zad[iz]->get_vec_of_process())
            if(obj->get_ost_dlitenost_obrab() != 0){
                this->vec_of_all_str_zad[iz]->set_obr_process(obj);
                break;
            }
}
