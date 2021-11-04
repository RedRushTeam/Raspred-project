#ifndef MAIN_CLASS_FOR_RDNP_TYPE_MEMORY_H
#define MAIN_CLASS_FOR_RDNP_TYPE_MEMORY_H
#pragma once
#include "main_class_for_rdpr_type_memory.h"

class main_class_for_rdnp_type_memory : public main_class_for_all_types_memory
{
public:
    main_class_for_rdnp_type_memory(){};

    void create_ustr();
    int run();

    void set_V(int _V);
    int get_V() const;

private:
    void push_razd(razdel_fixed_size* _razdel);
    bool remove_razd(razdel_fixed_size* _razdel);
    void chose_process_for_ustr();
    int shag();

    int _V = 100;
    int T = 0;

    std::vector<razdel_fixed_size*> vec_of_razd;

    void check_end_all_process_in_zad();
};

#endif // MAIN_CLASS_FOR_RDNP_TYPE_MEMORY_H
