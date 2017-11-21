// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Helping Uncle Cláudio
// Level: 1
// Category: COMPUTATIONAL GEOMETRY
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2158

#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int FP, FH, A, F, V, n=1;

        while (cin >> FP >> FH){

        A = (5*FP+6*FH)/2;
        F= FH+FP;
        V= A+2-F;

        cout << "Molecula #" << n << ".:."<<endl;
        cout <<"Possui " << V << " atomos e "<< A << " ligacoes"<< endl << endl;
        n=n+1;
        }
return 0;
}

