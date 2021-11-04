#ifndef ZADANIE_FOR_STR_H
#define ZADANIE_FOR_STR_H
#pragma once
#include "zadanie.h"

class zadanie_for_str : public zadanie
{
public:
    zadanie_for_str();
    void set_last_obr_T(int last_obr_T);
    int get_last_obr_T() const;
    void set_number_of_blocks_ozu(int number_of_blocks_ozu);
    int get_number_of_blocks_ozu() const;
    void set_frequency_of_obr(int frequency_of_obr);
    int get_frequency_of_obr() const;
    void set_number_of_sovp_blocks_ozu(int number_of_sovp_blocks_ozu);
    int get_number_of_sovp_blocks_ozu() const;

protected:
    int last_obr_T;
    int number_of_blocks_ozu = 0;
    int frequency_of_obr;
    int number_of_sovp_blocks_ozu = 0;
};

#endif // ZADANIE_FOR_STR_H
