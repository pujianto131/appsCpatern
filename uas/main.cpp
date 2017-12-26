#include <iostream>
#include <string.h>
#include "modul.h"

using namespace std;

int main()
{
    int pilih, nilaiPola;
    int menu[5]={};
    cout << "===========================\n";
    cout << "|--- MENU PILIHAN MODUL---|\n";
    cout << "===========================\n\n";
    cout << "input pilihan : ";
    cin >> pilih;

    switch (pilih){
        case 1 :
            cout << "input nilai\t: ";
            cin >> nilaiPola;
            pola(nilaiPola);

    }
}
