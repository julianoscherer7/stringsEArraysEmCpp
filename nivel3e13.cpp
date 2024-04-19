#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char frase[50];
    char *lugar = strchr(frase,'a');
    int conta = (lugar - frase + 1);
    cout << "Digite uma frase: " << endl;
    cin.getline(frase,50);
    if ( lugar != nullptr) {
        cout << "A sua letra A esta na posição: " << conta << endl;
    } else {
        cout << "Não possui a letra A na sua frase" << endl;
    }
return 0;
}