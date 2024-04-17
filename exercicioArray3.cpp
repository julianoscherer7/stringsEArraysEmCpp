#include <iostream>
using namespace std;
int main () {
    int array[4];
    int numero;
    cout << "Digite 4 numeros inteiros: " << endl;
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cout << "Digite um número que digitou anteriormente: " << endl;
    cin >> numero;
    if    (array[0] == numero) {
        cout << "-1" << endl;
    }
     else {
        cout << "array[0]" << endl;
     }
        if    (array[1] == numero) {
        cout << "-1" << endl;
    }
     else {
        cout << "array[1]" << endl;
     }
        if    (array[2] == numero) {
        cout << "-1" << endl;
    }
     else {
        cout << "array[2]" << endl;
     }
        if    (array[3] == numero) {
        cout << "-1" << endl;
    }
     else {
        cout << "array[3]" << endl;
     }
    
    return false;
}