#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string frase1, frase2;
        cin >> frase1;
        cin >> frase2;

        string combinacao = "";
        int a = 0, b = 0;

        while (a < frase1.length() || b < frase2.length()) {
            if (a < frase1.length()) {
                combinacao += frase1[a];
                a++;
            }

            if (b < frase2.length()) {
                combinacao += frase2[b];
                b++;
            }
        }
        cout << combinacao << endl;
    }

    return 0;
}
