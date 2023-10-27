#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int tentativas = 0;
    int palpite;
    string name;
    srand(time(0)); // Seed the random number generator

    int numeroSecreto = rand() % 100 + 1;

    cout << "Insira o seu nome antes de jogar: ";
    cin >> name;

    while (true) {
        cout << "Tente adivinhar o numero (entre 1 e 100): ";
        cin >> palpite;
        tentativas++; // Increase the value of "tentativas"

        if (palpite < numeroSecreto) {
            cout << "O numero e muito baixo, tente novamente." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "O numero e muito grande, tente novamente." << endl;
        } else {
            cout << "Parabéns " << name << " acertou no número em " << tentativas << " tentativas!" << endl;
            break;
        }
    }

    return 0;
}
