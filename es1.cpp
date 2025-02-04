/*
int a = 5; --> dichiarazione di una variabile di tipo intero chiamata a e inizializzata a 5
float a= 5.5; --> dichiarazione di una variabile di tipo float chiamata a e inizializzata a 5.5
char a = 'a'; --> dichiarazione di una variabile di tipo char chiamata a e inizializzata a 'a'
bool a = true; --> dichiarazione di una variabile di tipo bool chiamata a e inizializzata a true
string a = "ciao"; --> dichiarazione di una variabile di tipo string chiamata a e inizializzata a "ciao"
const int a = 10; --> dichiarazione di una variabile di tipo intero chiamata a e inizializzata a 10, la variabile è costante
int arr[5] = {1, 2, 3, 4, 5}; // dichiarazione di un array di interi di dimensione 5 e inizializzazione con i valori 1, 2, 3, 4, 5
*/

// Include the iostream library for input and output
#include <iostream>
#include "funzioni.h"
// cin --> input permette di inserire un valore da tastiera
// cout --> output permette di visualizzare un valore a schermo
// endl --> permette di andare a capo

// Use the standard namespace to avoid prefixing std:: before standard library names
using namespace std;




// The main function is the entry point of a C++ program
int main()
{
    /*Mario è uno studente che ha una quantità di soldi stabilita dall’utente, ogni giorno Mario
    all’intervallo può acquistare al bar della scuola una pastina che costa 1 euro o un panino che
    costa 1,5 euro.
    Il programma continua a chiedere all’utente cosa mangerà Mario quel giorno finché ha
    abbastanza soldi o non ha la possibilità di soddisfare il suo appetito con quello che vuole.
    Al termine del programma scrivere in output il numero di giorni in cui Mario ha mangiato e
    quante volte ha mangiato una pastina e quante un panino.

    int pastina = 0;
    int panino = 0;
    float portafoglio;
    int giorni_merenda = 0;

    cout<<"Quanti soldi ha Mario?\n";
    cin >> portafoglio;

    while (portafoglio >= 1)
    {
        string scelta = "";
        cout << "cosa vuoi mangiare? panino o pastina\n";
        cin >> scelta;
        if (scelta == "panino")
        {
            if (portafoglio < 1.5)
            {
                cout << "non hai abbastanza soldi, puoi scegliere solo la pastina\n";
            }
            else
            {
                portafoglio -= 1.5;
                panino++;
                giorni_merenda++;
                cout << "ora hai:  " << portafoglio;
            }
        }
        else if (scelta == "pastina")
        {
            portafoglio -= 1;
            pastina++;
            giorni_merenda++;
            cout << "ora hai:  " << portafoglio;
        }
        else
        {
            cout << "non hai scelto nessuna opzione disponibile\n";
        }
    }

    cout<<"Mario ha mangiato per "<< giorni_merenda<<"\ngiorni panini:"<<panino<<"\ngiorni pastina "<<pastina;*/

    // Use the somma function
    
    int a = 5;
    int b = 10;
    cout << "La somma di " << a << " e " << b << " è: " << somma(a, b) << endl;

    int c = 20;
    int d = 15;
    cout << "La differenza tra " << c << " e " << d << " è: " << sottrai(c, d) << endl;
    // Return 0 to indicate that the program ended successfully
    return 0;
}

