#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char palavra1[100], palavra2[100];
   
   cout << "Digite alguma palavra: " << endl;
   cin >>  palavra1;
   cout << "Digite a segunda palavra: " << endl;
   cin >> palavra2;
   int conta = strcmp(palavra1, palavra2);
   if (conta < 0) {
    cout << "A primeira palavra é maior em ordem alfabética" << endl;
   }
   else if (conta > 0) {
    cout << "A segunda palavra é maior que a segunda em ordem alfabética" << endl;
   }
   else if (conta == 0) {
    cout << "As duas palavras são iguais" << endl;
   }
   return 0;
}