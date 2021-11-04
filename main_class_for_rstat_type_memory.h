#ifndef MAIN_CLASS_FOR_RSTAT_TYPE_MEMORY_H
#define MAIN_CLASS_FOR_RSTAT_TYPE_MEMORY_H
#pragma once
#include "main_class_for_str_type_memory.h"

class main_class_for_rstat_type_memory : public main_class_for_all_types_memory
{
public:
    main_class_for_rstat_type_memory(){}

    void check_end_all_process_in_zad();
    int run();
    int shag();

    void push_razd(razdel* _razdel);
    bool remove_razd(razdel* _razdel);
    void set_kol_razd(int kol_razd);
    int get_kol_razd() const;

    void set_V(int _V);
    int get_V() const;

private:
    void chose_process_for_ustr();

    int _V;
    int kol_razd;
    int T = 0;
    std::vector<razdel*> vec_of_all_razd;

};

#endif // MAIN_CLASS_FOR_RSTAT_TYPE_MEMORY_H
