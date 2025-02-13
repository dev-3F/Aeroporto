#include "funzioni.h"
#include <iostream>

void add(Prenotazione prenotazioni[], const int size, int &index) {
  if (index < size) {
    int idVolo;
    float costo;
    string idCliente;
    int numPosto;
    cout << "Inserisci l'id del volo" << endl;
    cin >> idVolo;
    cout << "Inserisci il numero del posto" << endl;
    cin >> numPosto;
    cout << "Inserisci il costo del volo" << endl;
    cin >> costo;
    cout << "Inserisci l'id del cliente" << endl;
    cin >> idCliente;
    // Prenotazione p{idVolo, numPosto, costo, idCliente};
    prenotazioni[index].setIdVolo(idVolo);
    prenotazioni[index].setNumPosto(numPosto);
    prenotazioni[index].setCosto(costo);
    prenotazioni[index].setIdCliente(idCliente);
    // prenotazioni[index] = p;
    ++index;
  } else {
    throw Errore{};
  }
}

void modifica(Prenotazione prenotazioni[], const int size,
              const int unsigned index) {
  if (index < size) {
    int idVolo;
    float costo;
    string idCliente;
    int numPosto;
    cout << "Inserisci l'id del volo" << endl;
    cin >> idVolo;
    cout << "Inserisci il numero del posto" << endl;
    cin >> numPosto;
    cout << "Inserisci il costo del volo" << endl;
    cin >> costo;
    cout << "Inserisci l'id del cliente" << endl;
    cin >> idCliente;
    // Prenotazione p{idVolo, numPosto, costo, idCliente};
    prenotazioni[index].setIdVolo(idVolo);
    prenotazioni[index].setNumPosto(numPosto);
    prenotazioni[index].setCosto(costo);
    prenotazioni[index].setIdCliente(idCliente);
    // prenotazioni[index] = p;

  } else {
    throw Errore{};
  }
}

void stampa(Prenotazione prenotazioni[], const int numElementi) {
  cout << "Stampa Prenotazioni" << endl;
  for (int i = 0; i < numElementi; ++i) {
    cout << prenotazioni[i] << endl;
  }
  cout << "Stampa Prenotazioni terminata" << endl << endl;
}
