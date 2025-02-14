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

void elimina(Prenotazione p[], int numElementi){
  int idVolo, shiftNum;
  string idCliente;
  cout << "Inserisci l'ID del volo";
  cin >> idVolo;
  cout << "Inserisci l'ID del cliente";
  cin >> idCliente;
  for(int i = 0; i<numElementi; ++i){
    if(p[i].getIdCliente() == idCliente && p[i].getIdVolo() == idVolo){
      p[i] = Prenotazione{};
      --numElementi;
      shiftNum = i;
      break;
    }
  }

  for(int i = shiftNum; i < numElementi+1; ++i){
    Prenotazione temp = p[i];
    p[i] = p[i+1];
    p[i+1] = temp;
  }
}

void stampaTutte(Prenotazione p[], const int numElementi){
  cout << "Stampa Prenotazioni" << endl;
  for (int i = 0; i < numElementi; ++i) {
    cout << p[i] << endl;
  }
  cout << "Stampa Prenotazioni terminata" << endl << endl;
}

float incassoVolo(Prenotazione p[], const int numElementi, const int idVolo){
  float incassoTot;
  for(int i = 0; i < numElementi; ++i){
    if(p[i].getIdVolo() == idVolo){
      incassoTot += p[i].getIdVolo();
    }
  }

  return incassoTot;
}