#include <iostream>
using namespace std;
int main () {
    string letra;
    cout << "Digite um caractere: " << endl;
    cin >> letra;
    if  (letra == "a"|| letra == "e" || letra == "i" || letra == "o" || letra == "u") {
        cout << "Seu caractere é vogal" << endl;
    }
        else {
            cout << "Seu caractere não é vogal" << endl;
        }
    return 0;
}