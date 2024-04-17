#include <iostream>
using namespace std;
int main () {
int array[6];
int a;
array[0] = 1 ; 
array[1] = 2; 
array[2] = 3; 
array[3] = 4; 
array[4] = 5; 
array[5] = 6; 
array[6] = 7; 
cout << "Digite um número de 1 a 7: " << endl;
cin >> a;
if (a == array[0]) {
cout << "A sua cor é: lilas" << endl;
}
if (a == array[1]) {
cout << "A sua cor é: vermelho" << endl;
}
if (a == array[2]) {
cout << "A sua cor é: rosa" << endl;
}
if (a == array[3]) {
cout << "A sua cor é: roxo" << endl;
}
if (a == array[4]) {
cout << "A sua cor é: azul" << endl;
}
if (a == array[5]) {
cout << "A sua cor é: verde" << endl;
}
if (a == array[6]) {
cout << "A sua cor é: branco" << endl;
}
return false;
}
