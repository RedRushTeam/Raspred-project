#ifndef PROCESS_H
#define PROCESS_H
#pragma once
#include "ustroistvo.h"
#include "razdel_fixed_size.h"

class process
{
public:
    // constr&destr
    process();
    process(ustroistvo* needed_ustr,
        int ost_dlitenost_obrab,
        int trebuemiy_V_OZU) :
            needed_ustr(needed_ustr),
            ost_dlitenost_obrab(ost_dlitenost_obrab),
            trebuemiy_V_OZU(trebuemiy_V_OZU){}

    //getters&setters
    void set_needed_ustr(ustroistvo* needed_ustr);
    void set_ost_dlitenost_obrab(int ost_dlitenost_obrab);
    void set_trebuemiy_V_OZU(int trebuemiy_V_OZU);
    ustroistvo* get_needed_ustr() const;
    int get_ost_dlitenost_obrab() const;
    int get_trebuemiy_V_OZU() const;
    void set_dlitelnost(int dlitelnost);
    int get_dlitelnost() const;

protected:
    ustroistvo* needed_ustr;
    int ost_dlitenost_obrab;
    int trebuemiy_V_OZU;
    int dlitelnost;
};

#endif // PROCESS_H
