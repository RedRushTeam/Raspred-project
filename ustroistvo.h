#ifndef USTROISTVO_H
#define USTROISTVO_H
#pragma once
//#include "list_of_types.h"

class ustroistvo
{
public:
    // constr&destr
    ustroistvo();
    ustroistvo(int number_zadaniya_obr_na_ustroistve,
        int ost_vremya_zanyatosti) :
            number_zadaniya_obr_na_ustroistve(number_zadaniya_obr_na_ustroistve),
            ost_vremya_zanyatosti(ost_vremya_zanyatosti){}
    // getters&setters
    void set_number_zadaniya_obr_na_ustroistve(int number_zadaniya_obr_na_ustroistve);
    int get_number_zadaniya_obr_na_ustroistve() const;
    void set_ost_vremya_zanyatosti(int ost_vremya_zanyatosti);
    int get_ost_vremya_zanyatosti() const;

    // methods
    void change_sost();
private:
    bool sostoyanie = 0;
    int number_zadaniya_obr_na_ustroistve = -1;
    int ost_vremya_zanyatosti = -1;
};

#endif // USTROISTVO_H
