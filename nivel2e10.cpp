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
cout << "A seu dia é: domingo" << endl;
}
if (a == array[1]) {
cout << "O seu dia é: segunda " << endl;
}
if (a == array[2]) {
cout << "O seu dia é: terça-feira" << endl;
}
if (a == array[3]) {
cout << "O seu dia é: quarta-feira" << endl;
}
if (a == array[4]) {
cout << "O seu dia é: quinta-feira" << endl;
}
if (a == array[5]) {
cout << "O seu dia é: sexta-feira" << endl;
}
if (a == array[6]) {
cout << "O seu dia é: sábado" << endl;
}
return false;
}