// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Máquina de Café
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2670

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define D(x) cout << #x " = " << (x) << endl

typedef vector<int> vi;
typedef vector<vi> vvi;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", 2 * min(a + c, min(2 * a + b, 2 * c + b)));
}
