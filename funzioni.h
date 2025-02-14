#ifndef FUNZIONI_H
#define FUNZIONI_H

#include "Prenotazione.h"

struct Errore {};
void add(Prenotazione[], const int, int &);
void modifica(Prenotazione[], const int, const int unsigned);
void stampa(Prenotazione[], const int);
void elimina(Prenotazione[], int);
void stampaTutte(Prenotazione[], const int);
float incassoVolo(Prenotazione[], const int, const int);

#endif
