#include <iostream>
#include <stdlib.h>
#include <limits>
#include <conio.h>

using namespace std;

    /* ---------------------------- TEORIA -----------------------------  */
/*
                    NWD - Najwiekszy wspólny dzielnik

            NWD najprostszym sposobem oblicza sie w ponizszy sposób:

    Jezeli dwie liczby sa od siebie rózne, to od wiekszej odejmujemy mniejsza.
    Warunek zatrzymania jest taki, ze obie liczby maja byc sobie równe.
    Gdy liczby beda równe, ich wartosc (taka sama) to NWD.

    NWD moza obliczyæ takze wykorzystujac funkcje modulo. Deklarujemy zmienna pomocnicza,
    która równa jest reszcie z dzielenia pierwszej liczby przez druga. Nastepnie zastepujemy
    pozycje pierwszej liczby druga liczba, a pozycje drugiej liczby liczba pomocnicza.
    Warunek zatrzymania jest taki, ze druga liczba ma byc równa 0, wtedy NWD równe jest
    pierwszej liczbie.


                    NWW - Najmniejsza wspólna wielokrotnosc

                    NWW oblicza sie korzystajac ze wzoru:
                    (pierwsza liczba / NWD ) * druga liczba

                                Przykladowe dane:
                        pierwsza    druga   NWD     NWW
                            24       36     12      72
                           1989      867    51     33813
*/

    /* ---------------------------- PROTOTYPY -----------------------------  */

int NWD (int a, int b);
int NWD_modulo (int a, int b);

    /* --------------------------- FUNCKJA MAIN --------------------------  */

int main()
{
    cout << "********** ALGORYTM EUKLIDESA **********" << endl;

    int pierwsza, druga;

    cout << endl << "Prosze podac pierwsza liczbe: ";

    while(!(cin >> pierwsza)){
        cin >> pierwsza;
        cout << "Podano niewlasciwy znak, nalezy podac liczbe dodatnia.\n\nProsze podac nowa liczbe: ";
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
    }
    while (pierwsza <= 0){
    cout << "Podana liczba musi byc dodatnia, prosze podac nowa: " << endl;
    cin >> pierwsza;
    }

    cout << "Prosze podac druga liczbe: ";
    while(!(cin >> druga))
    {
        cin >> druga;
        cout << "Podano niewlasciwy znak, nalezy podac liczbe dodatnia.\nProsze podac nowa liczbe: ";
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
    }

    while (druga <= 0){
    cout << "Podana liczba musi byc dodatnia, prosze podac nowa: " << endl;
    cin >> druga;
    }

    system("cls");

    cout  <<  "************************* WYNIKI *************************" << endl << endl;

    cout << "Dla liczb: \t" << pierwsza << "\t" << druga << endl << endl;

    cout << "Najwiekszy wspolny dzielnik: " << NWD_modulo(pierwsza, druga) << endl;

    cout << "Najmniejsza wspolna wielokrotnosc: " << (pierwsza/NWD(pierwsza, druga)*druga) << endl;

    cout << endl << "Nacisnij dowolny klawisz, aby zakonczyc dzialanie programu." << endl;

    getch();
    system("cls");

    cout << "Autor: Rivenatti" << endl;
    return 0;
}

    /* ----------------------- FUNKCJE --------------------------  */

    /* ************************* NWD prostym sposobem ************************* */
int NWD (int a, int b){
    while (a != b){
        if (a>b){
            a = a - b;
// cout << "a = " << a << endl;
        } else if (b>a){
            b = b - a;
// cout << "b = " << b << endl;
        }
        }
    return a;
}
    /* ************************* NWD za pomoca modulo ************************* */
int NWD_modulo (int a, int b){

    int c = 0;

    while (b != 0 ){
    c = a % b;
    a = b;
    b = c;
    }
    return a;
}
