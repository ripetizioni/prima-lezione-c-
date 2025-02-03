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
// cin --> input permette di inserire un valore da tastiera
// cout --> output permette di visualizzare un valore a schermo
// endl --> permette di andare a capo

// Use the standard namespace to avoid prefixing std:: before standard library names
using namespace std;

// The main function is the entry point of a C++ program
int main()
{
    // Declare an integer variable named 'a' and initialize it to 5
    int a = 5;
    float b = 5.5;
    char c = 'a';
    bool d = true;
    const int e = 10;
    string f = "ciao";

    // Declare an array of integers named 'array' and initialize it to null
    int array[10] = {};
    // Declare an array of integers named 'array' and initialize it to 1, 2, 3, 4, 5
    int array2[500] = {0, 1, 2, 3, 4};
    int dimensione_logica = 5;
    int dimensione_fisica = 500;
    int numero_array = array2[2];

    /*
    if else
    &&--> entrambi devono essere veri
    ||--> uno dei due deve essere vero
    !=--> diverso
    ==--> uguale
    */
    if (a == b && (c == 'a' != d == true))
    {
        cout << "sono uguali\n";
    }
    else if (a == 5)
    {
        cout << "a è uguale a 5\n";
        int e = 10;
    }
    else
    {
        cout << "sono diversi\n";
    }

    // while
    while (a < 10)
    {
        if (a == 7)
        {
            a += 2; // a=a+2
        }

        cout << a;
        a++; // a=a+1
    }
    a = 10;
    // do while
    do
    {
        cout << a;
        a++;
    } while (a < 10);

    // for
    for (int i = 0; i < 50; i++)
    {
        cout << i;
    }

    // switch case
    do
    {
        cout << "scegli a per fare la somma e b per fare la moltiplicazione tra due numeri e x per uscire\n";
        cin >> c;
        switch (c)
        {
        case 'a':
        {
            float somma = a + b;
            cout << somma;
            break;
        }
        case 'b':
            float moltiplicazione = a * b;
            cout << moltiplicazione;
            break;
        case 'x':
            cout << "uscita dal programma";
            break;
        default:
            cout << "non hai scelto nessuna opzione dispomibile";
            break;
        }
    } while (c != 'x');

    // for per iterzaione su array2
    for (int i = 0; i < dimensione_logica; i++)
    {
        cout << array2[i];
    }
    // for per riempire array2
    for (int i = 5; i < dimensione_fisica; i++)
    {
        int numero_array = 0;
        cout << "inserisci un numero\n";
        cin >> numero_array;
        array2[i] = numero_array;
    }
    // esercizzi

    // chiedere in input 3 numeri e fare somma e media

    int numero1, numero2, numero3;
    int somma;
    float media;

    cin >> numero1;
    cin >> numero2;
    cin >> numero3;

    somma = numero1 + numero2 + numero3;
    media = somma / 3;
    cout << somma << " " << media;

    /*Mario è uno studente che ha una quantità di soldi stabilita dall’utente, ogni giorno Mario
    all’intervallo può acquistare al bar della scuola una pastina che costa 1 euro o un panino che
    costa 1,5 euro.
    Il programma continua a chiedere all’utente cosa mangerà Mario quel giorno finché ha
    abbastanza soldi o non ha la possibilità di soddisfare il suo appetito con quello che vuole.
    Al termine del programma scrivere in output il numero di giorni in cui Mario ha mangiato e
    quante volte ha mangiato una pastina e quante un panino.*/

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

    cout<<"Mario ha mangiato per "<< giorni_merenda<<"\ngiorni panini:"<<panino<<"\ngiorni pastina "<<pastina;

    // Return 0 to indicate that the program ended successfully
    return 0;
}
