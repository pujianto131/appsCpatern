#include <iostream>
#include <string.h>
#include "modul.h"
//#include "database.h"

using namespace std;

int main()
{
    int pilih;
    cout << "==========================================\n";
    cout << "|--- C++ Pattern Programs Free---|\n";
    cout << "==========================================\n\n";
    cout << "1. Pattern 1 - pola persegi\n";
    cout << "2. Pattern 2 - pola diamond\n\n";

    cout << "masukan pilahan menu\t: ";
    cin >> pilih;
    switch(pilih){
        case 1:
            cout << "Pattern 1(contoh inputan 5):\n";
            cout << pola1_persegi(5)<<endl;
            cout << "SOURCE CODE :\n";
            cout << "#include <iostream>\n";
            cout << "using namesapce std;\n";
            cout << "int main(){\n";
            cout << "for (int i=0; i<=nilai; i++){\n";
            cout << "for (int j=0; j<=nilai; j++){\n";
            cout << "cout << " "; \n";
            cout << "}\n";
            cout << "cout << endl;\n";
            cout << "}\n}\n";

        break;

    }
}
