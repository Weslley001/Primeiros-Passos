#include <iostream>

using namespace std;

int main(){

    float nota1, nota2;

    cout << "Informe a nota 1: " << endl;
    cin >> nota1;

    cout << "Informe a nota 2: " << endl;
    cin >> nota2;

    float media=(nota1+nota2)/2;
    cout << "Media: " << media << endl;

    //if(media >= 5){
    //    cout << "Aprovado" << endl;
    //}   

    //if(media >= 5){
    //    cout << "Aprovado" << endl;
    //} else{
    //    cout << "Reprovado" << endl;
    //}
    
    // 0-2.5 D, 2.5-5 C, 5-7.5 B, 7.5-10 A

    if(media < 2.5){
        cout << "Nota final: D";
    } else if(media < 5){
        cout << "Nota final: C";
    } else if(media < 7.5){
        cout << "Nota final: B";
    } else{
        cout << "Nota final: A";
    }

    return 0;
}