#ifndef PRENOTAZIONE_H
#define PRENOTAZIONE_H
#include <iostream>

using namespace std;

class Prenotazione {
public:
  // Cosntructor
  Prenotazione() : idVolo{-1}, numPosto{-1}, costo{-1} {}
  Prenotazione(int, int, float, string);

  // Metodi Getter
  int getIdVolo() const { return idVolo; }
  int getNumPosto() const { return numPosto; }
  float getCosto() const { return costo; }
  string getIdCliente() const { return idCliente; }

  // Metodi Setter
  void setIdVolo(int nuovoIdVolo) { idVolo = nuovoIdVolo; }
  void setNumPosto(int nuovoNumPosto) { numPosto = nuovoNumPosto; }
  void setCosto(float nuovoCosto) { costo = nuovoCosto; }
  void setIdCliente(string nuovoIdCliente) { idCliente = nuovoIdCliente; }

private:
  int idVolo;
  int numPosto;
  float costo;
  string idCliente;
};

inline ostream &operator<<(ostream &out, Prenotazione p) {
  out << "Volo: " << p.getIdVolo() << endl
      << "Posto: " << p.getNumPosto() << endl
      << "Costo: " << p.getCosto() << endl
      << "Numero Cliente: " << p.getIdCliente() << endl;
  return out;
}

struct PrenotazioneNonValida {
  string message;
  PrenotazioneNonValida(string m) : message{m} {}
};

#endif
