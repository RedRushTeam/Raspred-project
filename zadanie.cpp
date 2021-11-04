#include "zadanie.h"

zadanie::zadanie()
{

}

void zadanie::set_chislo_processov_v_zadanii(int chislo_processov_v_zadanii)
{
    this->chislo_processov_v_zadanii = chislo_processov_v_zadanii;
}

int zadanie::get_chislo_processov_v_zadanii() const
{
    return chislo_processov_v_zadanii;
}

/*void zadanie::set_number_obr_processa(int number_obr_processa)
{
    this->number_obr_processa = number_obr_processa;
}

int zadanie::get_number_obr_processa() const
{
    return  number_obr_processa;
}*/

void zadanie::set_V_ozu_trebuemiy_vsemu_zad(int V_ozu_trebuemiy_vsemu_zad)
{
    this->V_ozu_trebuemiy_vsemu_zad = V_ozu_trebuemiy_vsemu_zad;
}

int zadanie::get_V_ozu_trebuemiy_vsemu_zad() const
{
    return V_ozu_trebuemiy_vsemu_zad;
}

void zadanie::set_sost_zad(sostoyanie_ sost_zad)
{
    this->sost_zad = sost_zad;
}

sostoyanie_ zadanie::get_sost_zad() const
{
    return sost_zad;
}

void zadanie::set_obr_process(process *obr_process)
{
    this->obr_process = obr_process;
}

process *zadanie::get_obr_process() const
{
    return obr_process;
}

void zadanie::set_number_of_this_zad(int number_of_this_zad)
{
    this->number_of_this_zad = number_of_this_zad;
}

int zadanie::get_number_of_this_zad() const
{
    return number_of_this_zad;
}

std::vector<process *> zadanie::get_vec_of_process()
{
    return this->vec_of_process;
}

void zadanie::change_sost()
{
    this->sostoyanie = !this->sostoyanie;
}

void zadanie::push_process(process *process_for_push)
{
    this->vec_of_process.push_back(process_for_push);
}

process *zadanie::get_concret_process(int number)
{
    return this->vec_of_process[number];
}
