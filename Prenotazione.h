#ifndef PRENOTAZIONE_H
#define PRENOTAZIONE_H
#include <iostream>

using namespace std;

class Prenotazione{
    public:
        Prenotazione():idVolo{-1},numPosto{-1},costo{-1}{}
        Prenotazione(int, int, float, string);

        int getIdVolo() const { return idVolo; }
        int getNumPosto() const { return numPosto; }
        float getCosto() const { return costo; }
        string getIdCliente() const { return idCliente; }

    private:
        int idVolo;
        int numPosto;
        float costo;
        string idCliente;
};

struct PrenotazioneNonValida{
    string message;
    PrenotazioneNonValida(string m):message{m}{}
};

#endif