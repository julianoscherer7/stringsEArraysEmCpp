#include <iostream>
using namespace std;
int main () {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    cout << "Tamanho de array:" << tamanho << endl;
    return 0;
}