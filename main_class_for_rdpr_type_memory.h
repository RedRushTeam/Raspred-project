#ifndef MAIN_CLASS_FOR_RDPR_TYPE_MEMORY_H
#define MAIN_CLASS_FOR_RDPR_TYPE_MEMORY_H
#pragma once
#include "main_class_for_rstat_type_memory.h"

class main_class_for_rdpr_type_memory : public main_class_for_all_types_memory
{
public:
    main_class_for_rdpr_type_memory();

    int run();
    void check_end_all_process_in_zad();

    void set_V(int _V);
    int get_V() const;
    void set_zatCP(int _zatCP);
    int get_zatCP() const;

private:
    int chose_process_for_ustr();
    int shag();

    int _zatCP = 0;
    int _V;
    int T = 0;

};

#endif // MAIN_CLASS_FOR_RDPR_TYPE_MEMORY_H
