#include <iostream>
using namespace std;
int main () {
char array[][20] = {"tucano", "lhama", "avestruz", "raposa", "ornitorrinco", "gato", "cachorro", "hipopótamo", "macaco", "elefante"};
string a;


cout << "Digite uma letra: " << endl;
cin >> a;

if ("a" == a) {
cout << "Seu animal é: avestruz" << endl;
}
else if ("t" == a) {
cout << "Seu animal é: tucano " << endl;
}
else if ("l" == a) {
cout << "Seu animal é: lhama " << endl;
}
else if ("r" == a) {
cout << "Seu animal é: raposa" << endl;
}
else if ("o" == a) {
cout << "Seu animal é: ornitorrinco" << endl;
}
else if ("g" == a) {
cout << "Seu animal é: gato" << endl;
}
else if ("c" == a) {
cout << "Seu animal é: cachorro" << endl;
}
else if ("h" == a) {
cout << "Seu animal é: hipopótamo" << endl;
}
else if ("m" == a) {
cout << "Seu animal é: macaco" << endl;
}
else if ("e" == a) {
cout << "Seu animal é: elefante" << endl;
} else {
    cout << "Valor inválido caralho burro" << endl;
}

return false;
}