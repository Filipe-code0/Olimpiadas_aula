#include <iostream>

    using namespace std;

int main(){

    float x, y;

    cin >> x;
    cin >> y;

    if(x == 0 || y == 0){
        if(x == 0){
            cout << "eixo x" << endl;
        }

        else{
            cout << "eixo y" << endl;
        }
    }

    else{
        if(x>0){
                if(y>0){
                    cout << "quadrante 1" << endl;
                }

                else{
                    cout << "quadrante 4" << endl;
                }
        }

        else{
                if(y>0){
                    cout << "quadrante 2" << endl;
                }

                else{
                    cout << "quadrante 3" << endl;
                }
        }
    }

    return 0;
}
