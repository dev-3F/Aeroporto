#include "funzioni.h"
#include "Prenotazione.h"

int main(){
    constexpr int MAX_PRENOTAZIONI = 100;
    Prenotazione prenotazioni[MAX_PRENOTAZIONI];
    bool stop = false;
    do{   
        int scelta = -1;
        cout << "Inserisci:" << endl
            << "1 per aggiungere una prenotazione" << endl
            << "2 per modificare una prenotazione" << endl
            << "3 per eliminare una prenotazione" << endl
            << "0 per stampare tutte le prenotazioni" << endl
            << "4 per stampare il numero di prenotazioni di un volo" << endl
            << "5 per stampare l'incasso totale di un volo" << endl
            << "6 ordinare le prenotazioni in base al costo" << endl 
            << "9 per uscire" << endl << endl;
        cin >> scelta;

        switch(scelta){
            case 0:{
                break;
            }
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                break;
            }
            case 9:{
                cout << "Arrivederci..." << endl;
                stop = true;
                break;
            }
            default:{
                cout << "Valore inserito non valido" << endl << endl;
            }
        }
    }while(!stop);
    return 0;
}