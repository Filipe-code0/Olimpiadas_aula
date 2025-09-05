#include <iostream>

using namespace std;

int main(){

    int m;

    cin >> m;

    while(m != 0){

        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){

            cout << "*";

                if(j != m-1){
                    cout << " ";
                }
            }
            cout << endl;
        }
    cout << endl;

    cin >> m;
    }

    return 0;
}
