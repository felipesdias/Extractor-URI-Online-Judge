// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Diving
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2311

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string nome;
    double gd, notas[7];

    cin >> n;
    cout << fixed << setprecision(2);

    while(n--) {
        cin >> nome;
        cin >> gd;

        double menor = 11.0;
        double maior = -1.0;
        double resp = 0.0;

        for(int i = 0; i < 7; i++) {
            cin >> notas[i];
            if(notas[i] <= menor) menor = notas[i];
            if(notas[i] >= maior) maior = notas[i];
            resp += notas[i];
        }

        resp -= menor;
        resp -= maior;
        resp *= gd;

        cout << nome << " " << resp << endl;
    }
}
