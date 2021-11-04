#ifndef MAIN_CLASS_FOR_STR_TYPE_MEMORY_H
#define MAIN_CLASS_FOR_STR_TYPE_MEMORY_H
#pragma once
#include "main_class_for_seg_type_memory.h"

class main_class_for_str_type_memory : public main_class_for_seg_type_memory
{
public:
    main_class_for_str_type_memory();

    // main_class_for_all_types_memory interface
    int run() override;
    void create_all_zad_and_process() override;
    bool is_all_zad_ended() const override;
protected:
    int generate_col_sovp_str(zadanie_for_str* _zad, int kol_treb_str, int kol_sovp_str_with_ip) const;
    int shag() override;
    void check_end_all_process_in_zad() override;
private:
    int check_str(zadanie_for_str* _zad, int index, int tek_potr_v_str);
    int change_old_zad(int index);
    void take_needed_OZU();
    void ust_obr_process() override;
    int take_memory(int iz, int tek_potr_v_str, int kol_sovp_str_with_ip);

    int T = 0;
    std::vector<zadanie_for_str*> vec_of_all_str_zad;
};

#endif // MAIN_CLASS_FOR_STR_TYPE_MEMORY_H
