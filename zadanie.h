#ifndef ZADANIE_H
#define ZADANIE_H
#pragma once
#include "process.h"

class zadanie
{
public:
    // costr&destr
    zadanie();
    zadanie(int number_of_this_zad,
        int chislo_processov_v_zadanii,
        int V_ozu_trebuemiy_vsemu_zad,
        sostoyanie_ sost_zad,
        process* obr_process):
            number_of_this_zad(number_of_this_zad),
            chislo_processov_v_zadanii(chislo_processov_v_zadanii),
            V_ozu_trebuemiy_vsemu_zad(V_ozu_trebuemiy_vsemu_zad),
            sost_zad(sost_zad),
            obr_process(obr_process){}
    // getters&setters
    void set_chislo_processov_v_zadanii(int chislo_processov_v_zadanii);
    int get_chislo_processov_v_zadanii() const;
    void set_V_ozu_trebuemiy_vsemu_zad(int V_ozu_trebuemiy_vsemu_zad);
    int get_V_ozu_trebuemiy_vsemu_zad() const;
    void set_sost_zad(sostoyanie_ sost_zad);
    sostoyanie_ get_sost_zad() const;
    void set_obr_process(process* obr_process);
    process* get_obr_process() const;
    void set_number_of_this_zad(int number_of_this_zad);
    int get_number_of_this_zad() const;
    std::vector<process*> get_vec_of_process();
    bool getsost() {    return sostoyanie;    }

    void change_sost();
    void push_process(process* process_for_push);
    process* get_concret_process(int number);

protected:
    bool sostoyanie = 0; //0 не занято, 1 занято
    int number_of_this_zad;
    int chislo_processov_v_zadanii;
    int V_ozu_trebuemiy_vsemu_zad;
    sostoyanie_ sost_zad;
    process* obr_process;
    std::vector<process*> vec_of_process;
};

#endif // ZADANIE_H
