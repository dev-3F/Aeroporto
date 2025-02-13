#include "Prenotazione.h"

Prenotazione::Prenotazione(int volo, int posto, float prezzo, string cliente)
    : idVolo{volo}, numPosto{posto}, costo{prezzo}, idCliente{cliente} {
  if (idVolo < 0) {
    throw PrenotazioneNonValida("ID volo non valido");
  }
  if (numPosto < 0) {
    throw PrenotazioneNonValida("Numero del posto non valido");
  }
  if (costo < 0) {
    throw PrenotazioneNonValida("Costo non valido");
  }
}
