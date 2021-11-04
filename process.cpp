#include "process.h"

process::process(){}

void process::set_needed_ustr(ustroistvo* needed_ustr)
{
    this->needed_ustr = needed_ustr;
}

void process::set_ost_dlitenost_obrab(int ost_dlitenost_obrab)
{
    this->ost_dlitenost_obrab = ost_dlitenost_obrab;
}

void process::set_trebuemiy_V_OZU(int trebuemiy_V_OZU)
{
    this->trebuemiy_V_OZU = trebuemiy_V_OZU;
}

ustroistvo* process::get_needed_ustr() const
{
    return needed_ustr;
}

int process::get_ost_dlitenost_obrab() const
{
    return ost_dlitenost_obrab;
}

int process::get_trebuemiy_V_OZU() const
{
    return trebuemiy_V_OZU;
}

void process::set_dlitelnost(int dlitelnost)
{
    this->dlitelnost = dlitelnost;
}

int process::get_dlitelnost() const
{
    return this->dlitelnost;
}
