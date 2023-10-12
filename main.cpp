#include <iostream>
#include <cstdlib>  //para usar o rand() - funcao
using namespace std;

int main() {
    int tentativas = 0;
    int palpite;
    int numeroSecreto = rand() % 100 + 1; 

    while (true) {
        cout << "Tente adivinhar o numero (entre 1 e 100): ";
        cin >> palpite;
        tentativas++; //aumenta o valor de "tentivas"

        if (palpite < numeroSecreto) {
            cout << "O numero e muito baixo, tente novamente." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "O numero e muito grande, tente novamente." << endl;
        } else {
            cout << "Parabens, você acertou o número em " << tentativas << " tentativas!" << endl;
            break; 
        }
    }
