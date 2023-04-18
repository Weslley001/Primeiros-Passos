#include <iostream>
#include <math.h> 

using namespace std;

int main(){

    int a=5, b=2;
    int soma=a+b;
    cout << "Soma: " << soma << endl;
    //cout << "Soma: " << a+b << endl; <--- ESSA FORMA NÃO UTILIZA MEMORIA!!!

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    int mult=a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv=a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv=a%b;
    cout << "Resto da divisao: " << restodiv << endl;

    float div=(float)a/(float)b; // Pensando que "A" em float e "B" em float, assim temos a divisão realmente.
    cout << "Divisao: " << div << endl;

    float pot=pow(a,b); // "A" elevado a "B" = a^b
    cout << "Potencia: " << pot << endl;

    // Incremento e Decremento
    cout << "A antigo; " << a << endl;
    //INCREMENTO

    //a+=4;
    //a+=1; "ESSE PERMITE INCREMENTAR MAIS DE 1, VEJA A CIMA"
    //a=a+1;
    //a++;
    //a*=2;

    //DECREMENTO
    //a-=4;
    //a-=1; "ESSE PERMITE DECREMENTAR MAIS DE 1, VEJA A CIMA"
    //a=a-1;
    //a--;

    cout << "A novo; " << a << endl;

    return 0;
}