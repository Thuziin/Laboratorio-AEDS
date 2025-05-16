#include "iostream"

using namespace std;

void dec2bin(int dec);

int main () {
    int dec;
    cout << "Digite um numero inteiro: ";
    cin >> dec;
    cout << "Resultado: ";
    dec2bin(dec);
    cout << endl;
    return 0;
}

void dec2bin(int dec) {
    if (dec < 2) {
        cout << 1;
        return ;
    }
    dec2bin(dec / 2);
    cout << dec % 2;
    return ;
}