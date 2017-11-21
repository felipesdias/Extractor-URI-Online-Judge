// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Pedra-papel-tesoura-lagar...
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1873

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    char raj[30], shel[30];

    cin >> n;

    while(n--) {
        cin >> raj >> shel;

        if(strcmp(raj, "pedra")==0) {
            if(strcmp(shel, "pedra")==0)
                cout << "empate\n";
            else if(strcmp(shel, "papel")==0)
                cout << "sheldon\n";
            else if(strcmp(shel, "tesoura")==0)
                cout << "rajesh\n";
            else if(strcmp(shel, "lagarto")==0)
                cout << "rajesh\n";
            else
                cout << "sheldon\n";
        }
        else if(strcmp(raj, "papel")==0) {
            if(strcmp(shel, "pedra")==0)
                cout << "rajesh\n";
            else if(strcmp(shel, "papel")==0)
                cout << "empate\n";
            else if(strcmp(shel, "tesoura")==0)
                cout << "sheldon\n";
            else if(strcmp(shel, "lagarto")==0)
                cout << "sheldon\n";
            else
                cout << "rajesh\n";
        }
        else if(strcmp(raj, "tesoura")==0) {
            if(strcmp(shel, "pedra")==0)
                cout << "sheldon\n";
            else if(strcmp(shel, "papel")==0)
                cout << "rajesh\n";
            else if(strcmp(shel, "tesoura")==0)
                cout << "empate\n";
            else if(strcmp(shel, "lagarto")==0)
                cout << "rajesh\n";
            else
                cout << "sheldon\n";
        }
        else if(strcmp(raj, "lagarto")==0) {
            if(strcmp(shel, "pedra")==0)
                cout << "sheldon\n";
            else if(strcmp(shel, "papel")==0)
                cout << "rajesh\n";
            else if(strcmp(shel, "tesoura")==0)
                cout << "sheldon\n";
            else if(strcmp(shel, "lagarto")==0)
                cout << "empate\n";
            else
                cout << "rajesh\n";
        }
        else {
            if(strcmp(shel, "pedra")==0)
                cout << "rajesh\n";
            else if(strcmp(shel, "papel")==0)
                cout << "sheldon\n";
            else if(strcmp(shel, "tesoura")==0)
                cout << "rajesh\n";
            else if(strcmp(shel, "lagarto")==0)
                cout << "sheldon\n";
            else
                cout << "empate\n";
        }
    }

    return 0;
}

