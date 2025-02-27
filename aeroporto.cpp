#include "funzioni.h"

int main() {
  constexpr int MAX_PRENOTAZIONI = 100;
  Prenotazione prenotazioni[MAX_PRENOTAZIONI];
  int numeroPrenotazioniInserite = 0;
  bool stop = false;
  do {
    int scelta = -1;
    cout << "Inserisci:" << endl
         << "1 per aggiungere una prenotazione" << endl
         << "2 per modificare una prenotazione" << endl
         << "3 per eliminare una prenotazione" << endl
         << "4 per stampare tutte le prenotazioni" << endl
         << "5 per stampare il numero di prenotazioni di un volo" << endl
         << "6 per stampare l'incasso totale di un volo" << endl
         << "7 ordinare le prenotazioni in base al costo" << endl
         << "0 per uscire" << endl
         << endl;
    cin >> scelta;

    switch (scelta) {
    case 1: {
      add(prenotazioni, MAX_PRENOTAZIONI, numeroPrenotazioniInserite);
      break;
    }
    case 2: {
      int unsigned index = 0;
      cout << "Inserisci il numero della prenotazione da modificare" << endl;
      cin >> index;
      modifica(prenotazioni, MAX_PRENOTAZIONI, index);
      break;
    }
    case 3: {
      elimina(prenotazioni, numeroPrenotazioniInserite);
      break;
    }
    case 4: {
      stampaTutte(prenotazioni, numeroPrenotazioniInserite);
      break;
    }
     case 5: {
      stampa(prenotazioni, numeroPrenotazioniInserite);
      break;
    }
    case 6: {
      int idVolo;
      cout << "Inserire l'id del volo" << endl;
      cin >> idVolo;
      cout <<
      break;
    }
    case 0: {
      cout << "Arrivederci..." << endl;
      stop = true;
      break;
    }
    default: {
      cout << "Valore inserito non valido" << endl << endl;
    }
    }
  } while (!stop);
  return 0;
}
