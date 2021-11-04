#ifndef RAZDEL_H
#define RAZDEL_H

class razdel
{
public:
    razdel();

    //setters&getters
    void set_V_razdela(int V_razdela);
    int get_V_razdela() const;
    void set_number_zad_razm_v_razdele(int number_zad_razm_v_razdele);
    int get_number_zad_razm_v_razdele() const;

private:
    int V_razdela;

protected:
    int number_zad_razm_v_razdele = -1;
};

#endif // RAZDEL_H
