#include <iostream>

using namespace std;

int main(){

    float x, maior;
    int cont = 0;


    for(int i=0; i<10; i++){

        cin >> x;

        if(x > maior){
            maior = x;
            cont = i+1;
        }


    }

    cout << maior << endl << cont;

    return 0;
}
