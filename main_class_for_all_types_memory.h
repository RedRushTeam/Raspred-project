#ifndef MAIN_CLASS_FOR_ALL_TYPES_MEMORY_H
#define MAIN_CLASS_FOR_ALL_TYPES_MEMORY_H
#pragma once
#include "zadanie_for_str.h"

class main_class_for_all_types_memory
{
public:
    // constr&destr
    main_class_for_all_types_memory();
    main_class_for_all_types_memory(type_of_raspred_ _type_of_raspred,
        int KY,
        int KZ,
        int maxKPZ,
        int maxPP,
        int maxVP) :
            _type_of_raspred(_type_of_raspred),
            KY(KY),
            KZ(KZ),
            maxKPZ(maxKPZ),
            maxPP(maxPP),
            maxVP(maxVP){}

    // getters&setters
    void set_type_of_raspred(type_of_raspred_ _type_of_raspred);
    void set_KY(int KY);
    void set_KZ(int KZ);
    void set_maxKPZ(int maxKPZ);
    void set_maxPP(int maxPP);
    void set_maxVP(int maxVP);
    int get_KY() const;
    int get_KZ() const;
    int get_maxKPZ() const;
    int get_maxPP() const;
    int get_maxVP() const;
    int get_sred_T() const;
    type_of_raspred_ get_type_of_raspred() const;

    // methods
    void push_zad(zadanie* _zadanie_for_push);
    void push_ustr(ustroistvo* _ustr_for_push);
    bool remove_zad(zadanie* _zadanie_for_remove);
    bool remove_ustr(ustroistvo* _ustr_for_remove);
    int generate_random_int_number(int min, int max) const;
    ustroistvo* get_concrest_ustr(int number);
    virtual void create_all_zad_and_process();
    virtual void create_ustr();

    //virtual methods
    virtual bool is_all_zad_ended() const;
    virtual void check_end_all_process_in_zad();
    virtual void ust_obr_process();

    //abs virtual methods
    virtual int run() = 0;

protected:
    // perems
    type_of_raspred_ _type_of_raspred;
    int KY = 2;
    int KZ = 1;
    int maxKPZ = 2;
    int maxPP = 10;
    int maxVP = 10;
    int sred_T;

    // containers
    std::vector<zadanie*> vec_of_all_zad;
    std::vector<ustroistvo*> vec_of_all_ustr;
};

#endif // MAIN_CLASS_FOR_ALL_TYPES_MEMORY_H
