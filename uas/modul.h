#include <iostream>
#include <string>
using namespace std;

int pola(int x){
    int i,j;
    int n=x-1;
    for (i = 0; i < (2 * n) + 1; i++) {
            cout<< "\n";

            for (int j = 0; j < (4 * n) + 3; j++) {


                if (i <= n) {
                    if ((j == n - i) || (j == n + i) ) {
                        cout<<"-";
                    }
                    else if((j== n*3-i+2)|| (j==n*3+i+2)){
                        cout<<"+";
                    }
                    else {
                        cout<<" ";
                    }
                }
                else {

                    if ((j == i - n) || (j == 3*n-i)) {
                        cout<<"-";
                    }
                    else if ((j == i+n+2) || (j == 5*n-i+2) ) {
                        cout<<"+";
                    }
                     else {
                        cout<<" ";
                }
            }
        }
    }
    cout<< endl;
}
