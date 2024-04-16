#include <iostream>
using namespace std;
int main () {
    int array [3];
    int indice;
    cout << "Digite três numeros inteiros: " << endl;
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cout << "Digite um índice: " << endl;
    cin >> indice;
    cout << "O indice escolhido é: " << array[indice] << endl;
    return 0; 
    
}