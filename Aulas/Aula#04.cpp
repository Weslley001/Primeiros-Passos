#include <iostream>

using namespace std;

#define pi 3.14;
#define aprendendo cout << "Estou apredendo programacao" << endl;

int t; // Essa e uma variavel global

void welcome(){

    cout << "Sejam bem vindos!!!" << endl;
    
}

int somar(int x, int y){

    //int t;
    t = 1;

    int soma; // Essa variavel sera uma variavel local, ela so valera dentro dessa função
    soma = x+y;

    return soma;
}

int main(){

    //int t;
    //t = 0;

    welcome();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout << "soma: " << s << endl;

    cout << t;

    //cout << pi;
    //aprendendo;

    return 0;
}