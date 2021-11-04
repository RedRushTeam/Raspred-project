#ifndef MAIN_CLASS_FOR_SEG_TYPE_MEMORY_H
#define MAIN_CLASS_FOR_SEG_TYPE_MEMORY_H

#pragma once
#include "main_class_for_all_types_memory.h"

class main_class_for_seg_type_memory : public main_class_for_all_types_memory
{
public:
    // const&dest
    main_class_for_seg_type_memory();
    main_class_for_seg_type_memory(int _V,
        int _zatMD,
        int _zatCP,
        type_of_raspred_ _type_of_raspred,
        int KY,
        int KZ,
        int maxKPZ,
        int maxPP,
        int maxVP);

    // getters&setters
    void set_V(int _V);
    int get_V() const;
    void set_zatMD(int _zatMD);
    int get_zatMD() const;
    void set_zatCP(int _zatCP);
    int get_zatCP() const;

    // methods
    virtual int run();
    int chose_process_for_ustr();
    virtual int shag();

protected:
    int _V = 100;
    int _zatMD = 0;
    int _zatCP = 0;

    // main_class_for_all_types_memory interface
};

#endif // MAIN_CLASS_FOR_SEG_TYPE_MEMORY_H
