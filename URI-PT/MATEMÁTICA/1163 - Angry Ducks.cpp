// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Angry Ducks
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1163

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define grav 9.80665
#define pi 3.14159

int main() {
    int n;
    double h, p1, p2, a, v, x, t;

    while(cin >> h >> p1 >> p2) {
        cin >> n;

        for(int i=0; i<n; i++) {
            bool acertou = false;

            cin >> a >> v;

            t = (v*sin(a*pi/180) + sqrt(v*v*sin(a*pi/180)*sin(a*pi/180)+2*grav*h))/grav;

            x = v*cos(a*pi/180)*t;

            if(x>=p1 && x<=p2)
                acertou = true;

            if(acertou)
                cout << fixed << setprecision(5) << x << " -> DUCK\n";
            else
                cout << fixed << setprecision(5) << x << " -> NUCK\n";
        }

    }

    return 0;
}

