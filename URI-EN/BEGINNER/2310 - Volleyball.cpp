// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Volleyball
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2310

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, aux, pontos[6] = {0};
    double saque = 0.0, bloqueio = 0.0, ataque = 0.0;
    string str;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;
        
        for(int j = 0; j < 6; j++) {
            cin >> aux;
            pontos[j] += aux;
        }
    }

    saque += (double)(pontos[3] * 100) / pontos[0];
    bloqueio += (double)(pontos[4] * 100) / pontos[1];
    ataque += (double)(pontos[5] * 100) / pontos[2];
    
    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << saque << " %." << endl;
    cout << "Pontos de Bloqueio: " << bloqueio << " %." << endl;
    cout << "Pontos de Ataque: " << ataque << " %." << endl;
}
