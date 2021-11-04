#include "ustroistvo.h"

ustroistvo::ustroistvo()
{

}

void ustroistvo::set_number_zadaniya_obr_na_ustroistve(int number_zadaniya_obr_na_ustroistve)
{
    this->number_zadaniya_obr_na_ustroistve = number_zadaniya_obr_na_ustroistve;
}

int ustroistvo::get_number_zadaniya_obr_na_ustroistve() const
{
    return number_zadaniya_obr_na_ustroistve;
}

void ustroistvo::set_ost_vremya_zanyatosti(int ost_vremya_zanyatosti)
{
    this->ost_vremya_zanyatosti = ost_vremya_zanyatosti;
}

int ustroistvo::get_ost_vremya_zanyatosti() const
{
    return ost_vremya_zanyatosti;
}

void ustroistvo::change_sost()
{
    this->sostoyanie = !this->sostoyanie;
}
