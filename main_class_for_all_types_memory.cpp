#include "main_class_for_all_types_memory.h"

main_class_for_all_types_memory::main_class_for_all_types_memory(){}

void main_class_for_all_types_memory::set_type_of_raspred(type_of_raspred_ _type_of_raspred)
{
    this->_type_of_raspred = _type_of_raspred;
}

void main_class_for_all_types_memory::set_KY(int KY)
{
    this->KY = KY;
}

void main_class_for_all_types_memory::set_KZ(int KZ)
{
    this->KZ = KZ;
}

void main_class_for_all_types_memory::set_maxKPZ(int maxKPZ)
{
    this->maxKPZ = maxKPZ;
}

void main_class_for_all_types_memory::set_maxPP(int maxPP)
{
    this->maxPP = maxPP;
}

void main_class_for_all_types_memory::set_maxVP(int maxVP)
{
    this->maxVP = maxVP;
}

int main_class_for_all_types_memory::get_KY() const
{
    return KY;
}

int main_class_for_all_types_memory::get_KZ() const
{
    return KZ;
}

int main_class_for_all_types_memory::get_maxKPZ() const
{
    return maxKPZ;
}

int main_class_for_all_types_memory::get_maxPP() const
{
    return maxPP;
}

int main_class_for_all_types_memory::get_maxVP() const
{
    return maxVP;
}

int main_class_for_all_types_memory::get_sred_T() const
{
    return sred_T;
}

type_of_raspred_ main_class_for_all_types_memory::get_type_of_raspred() const
{
    return this->_type_of_raspred;
}

void main_class_for_all_types_memory::push_zad(zadanie *_zadanie_for_push)
{
    this->vec_of_all_zad.push_back(_zadanie_for_push);
}

void main_class_for_all_types_memory::push_ustr(ustroistvo *_ustr_for_push)
{
    this->vec_of_all_ustr.push_back(_ustr_for_push);
}

bool main_class_for_all_types_memory::remove_zad(zadanie *_zadanie_for_remove)
{
    auto iter_for_remove = std::find(this->vec_of_all_zad.begin(), this->vec_of_all_zad.end(), _zadanie_for_remove);
    if(iter_for_remove != this->vec_of_all_zad.end())
        this->vec_of_all_zad.erase(iter_for_remove);
    else
        return false;
    return true;
}

bool main_class_for_all_types_memory::remove_ustr(ustroistvo *_ustr_for_remove)
{
    auto iter_for_remove = std::find(this->vec_of_all_ustr.begin(), this->vec_of_all_ustr.end(), _ustr_for_remove);
    if(iter_for_remove != this->vec_of_all_ustr.end())
        this->vec_of_all_ustr.erase(iter_for_remove);
    else
        return false;
    return true;
}

int main_class_for_all_types_memory::generate_random_int_number(int min, int max) const
{
    static std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<> uid(min, max);
    return uid(gen);
}

ustroistvo *main_class_for_all_types_memory::get_concrest_ustr(int number)
{
    return this->vec_of_all_ustr[number];
}

void main_class_for_all_types_memory::create_all_zad_and_process()
{
    zadanie* zad_for_push;
    process* process_for_push;
    for(int i = 0; i < this->get_KZ(); ++i){

        zad_for_push = new zadanie();
        int kol_process = this->generate_random_int_number(2, this->get_maxKPZ());
        zad_for_push->set_obr_process(nullptr);
        zad_for_push->set_chislo_processov_v_zadanii(kol_process);
        zad_for_push->set_sost_zad(zagr);

        if(this->get_type_of_raspred() == rstat_ || this->get_type_of_raspred() == rdpr_ || this->get_type_of_raspred() == rdnp_)
            zad_for_push->set_sost_zad(ne_zagr);

        int all_V_for_zad = 0;

        for(int j = 0; j < kol_process; ++j){
            process_for_push = new process();

            int trebuemiy_V_OZU =  this->generate_random_int_number(10, this->maxVP);
            all_V_for_zad += trebuemiy_V_OZU;
            process_for_push->set_trebuemiy_V_OZU(trebuemiy_V_OZU);

            process_for_push->set_ost_dlitenost_obrab(this->generate_random_int_number(10, this->get_maxPP()));

            int needed_ustr_numb = this->generate_random_int_number(0, this->get_KY() - 1);

            process_for_push->set_needed_ustr(this->get_concrest_ustr(needed_ustr_numb));

            zad_for_push->push_process(process_for_push);
        }
        zad_for_push->set_V_ozu_trebuemiy_vsemu_zad(all_V_for_zad);
        this->push_zad(zad_for_push);
        zad_for_push = nullptr;
    }
}

void main_class_for_all_types_memory::create_ustr()
{
    for(int i = 0; i < this->get_KY(); ++i){
        ustroistvo* _ustr_for_push = new ustroistvo();
        _ustr_for_push->set_number_zadaniya_obr_na_ustroistve(-1);
        this->push_ustr(_ustr_for_push);
    }
}

bool main_class_for_all_types_memory::is_all_zad_ended() const
{
    for(auto obj : this->vec_of_all_zad)
        if(obj->get_sost_zad() != zaversheno)
            return false;
    return true;
}

void main_class_for_all_types_memory::check_end_all_process_in_zad()
{
    for(int iz = 0; iz < this->vec_of_all_zad.size(); ++iz){
        bool is_iz_ended = 0;
        for(int ip = 0; ip < this->vec_of_all_zad[iz]->get_vec_of_process().size(); ++ip)
            if(this->vec_of_all_zad[iz]->get_vec_of_process()[ip]->get_ost_dlitenost_obrab() != 0)
                is_iz_ended = 1;
        if(is_iz_ended == 0)
            this->vec_of_all_zad[iz]->set_sost_zad(zaversheno);
    }
}

void main_class_for_all_types_memory::ust_obr_process()
{
    for(int iz = 0; iz < this->vec_of_all_zad.size(); ++iz)
        for(auto obj : this->vec_of_all_zad[iz]->get_vec_of_process())
            if(obj->get_ost_dlitenost_obrab() != 0){
                this->vec_of_all_zad[iz]->set_obr_process(obj);
                break;
            }
}
