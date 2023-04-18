#include <iostream>

using namespace std;

int main(){

    // INT: Essa variavel armazena numeros inteiros apenas.

    int inteiro;
    inteiro = 5;
    cout << inteiro << endl;

    // FLOAT: Essa variavel armazena numeros reais que vão de 1.2e-38 a 3.4e-38.

    float real;
    real = 5.2;
    cout << real << endl;

    // DOUBLE: Essa variavel armazena numeros reais que vão de 2.2e-308 a 1.79e308.

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;
    
    // BOOL: Essa variavel armazena valores True = 1 ou False = 0.

    bool booleano;
    booleano = false;
    cout << booleano << endl;

    // CHAR: Essa variavel armazena uma caractere apenas.

    char letra;
    letra = 'b';
    cout << letra << endl;

    // STRING: Essa variavel armazena uma cadeia de carateres.

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    // CIN: Ele vai pegar o que o usario digitou e colocar em alguma variavel.

    int idade;
    cout << "Qual e sua idade?" << endl;
    cin >> idade;
    cout << "idade: " << idade << endl;

    return 0;
}