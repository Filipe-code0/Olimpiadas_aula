#include <iostream>

using namespace std;

int main(){

    int x, n;

    cin >> n;

    int dentro = 0, fora = 0;

    for(int i = 0; i<n; i++){

        cin >> x;

        if(x >= 10 && x <= 20){
            dentro++;
        }

        else{
            fora++;
        }
    }

    cout << dentro << " in" << endl;
    cout << fora << " out" << endl;

    return 0;
}

