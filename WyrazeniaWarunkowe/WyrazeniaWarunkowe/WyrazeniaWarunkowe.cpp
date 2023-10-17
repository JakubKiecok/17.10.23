#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*int liczba = 2;
    //jesli liczba = 1 to napisz to jest super liczba, w przeciwnym ukladzie napisz "liczba"

    liczba == 1 ? cout << "to jest super liczba" : cout << "liczba";*/
    //zamień liczbe na ocenę: 6 - celujący, 5 - bdb, 4 - db, 3 - dost, 2 - dop, 1 - ndst, 0 lub inna - nie ma takiej oceny

    //versja 1 if else if
    int ocena;
    cout << "Podaj liczbe jako ocena = "; cin >> ocena;
    /*if (ocena == 6)cout << "Celujacy" << endl;
    else if (ocena == 5)cout << "Bdb" << endl;
    else if (ocena == 4)cout << "Db" << endl;
    else if (ocena == 3)cout << "Dost" << endl;
    else if (ocena == 2)cout << "Dop" << endl;
    else if (ocena == 1)cout << "Ndst" << endl;
    else cout << "Nie ma takiej oceny" << endl;*/

    //versja 2 wyrazenie skrotowe warunek ? prawda : falsz
    ocena == 6 ? (cout << "Celujacy" << endl)
        : (ocena == 5 ? (cout << "Bdb" << endl)
            : (ocena == 4 ? (cout << "Db" << endl)
                : (ocena == 3 ? (cout << "Dost" << endl)
                    : (ocena == 2 ? (cout << "Dop" << endl)
                        : (ocena == 1 ? (cout << "Ndst" << endl)
                            : (cout << "Nie ma takiej oceny" << endl))))));

    return 0;
}