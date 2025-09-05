#include <iostream>

using namespace std;

int main(){

    float m[12][12];
    float acumulador = 0;
    char  T;
    int L;

    cin >> L;

    cin >> T;

    for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){

                cin >> m[i][j];

            }
    }

    for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){

                if(i == L){
                    acumulador += m[i][j];
                }

            }
    }

    if(T == 'S'){
        cout << acumulador;
    }

    if(T == 'M'){
        cout << acumulador/12;
    }

    return 0;
}
