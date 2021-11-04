#include "razdel.h"

razdel::razdel(){}

void razdel::set_V_razdela(int V_razdela)
{
    this->V_razdela = V_razdela;
}

int razdel::get_V_razdela() const
{
    return V_razdela;
}

void razdel::set_number_zad_razm_v_razdele(int number_zad_razm_v_razdele)
{
    this->number_zad_razm_v_razdele = number_zad_razm_v_razdele;
}

int razdel::get_number_zad_razm_v_razdele() const
{
    return number_zad_razm_v_razdele;
}
