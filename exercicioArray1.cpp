#include <iostream>
using namespace std;
int main () {
    int array[5];
    cout << "Digite cinco numeros inteiros: " << endl;
    cin >> array[0], array[1], array[2], array[3], array[4];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cin >> array[4];
    cout << "Você digitou: " << array[4] << "\n" << array[3] << array[2] << array[1] << array[0] << endl;
    return 0;
}