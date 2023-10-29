#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int maxTentativas; 
    int tentativas = 0;
    int palpite;
    string name;
    srand(time(0)); 

    int numeroSecreto = rand() % 100 + 1;

    cout << "Insira o seu nome antes de jogar: ";
    cin >> name;
    cout << "Insere o número de tentativas: ";
    cin >> maxTentativas;

    while (tentativas < maxTentativas) { 
        cout << "Tente adivinhar o numero (entre 1 e 100): ";
        cin >> palpite;
        tentativas++; 

        if (palpite < numeroSecreto) {
            cout << "O numero e muito baixo, tente novamente." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "O numero e muito grande, tente novamente." << endl;
        } else {
            cout << "Parabéns " << name << " acertou no número em " << tentativas << " tentativas!" << endl;
            break;
        }
    }

    if (tentativas >= maxTentativas) {
        cout << "Suas " << maxTentativas << " tentativas acabaram. O número secreto era: " << numeroSecreto << endl;
    }

    return 0;
}