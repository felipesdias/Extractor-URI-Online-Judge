// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Pascal Library
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1267

#include <iostream>
using namespace std;
 
int main () {
    int n, d, i, j, cont=0, **p;
    bool sim=false;
 
    cin >> n >> d;
 
    while (n!=0||d!=0){
        p = new int*[d];
        for(i=0;i<d;i++){
            p[i] = new int[n];
        }
        for(i=0;i<d;i++)
            for(j=0;j<n;j++)
                cin >> p[i][j];
 
        for(i=0;i<n;i++){
            for(j=0;j<d;j++){
                if(p[j][i]==1)
                    cont++;
            }
            if(cont==d){
                sim=true;
            }
            cont=0;
        }
 
        for(i=0;i<d;i++)
            delete[] p[i];
        delete[] p;
 
        if(sim)
            cout << "yes\n";
        else
            cout << "no\n";
        sim=false;
        cin >> n >> d;
    }
 
    return 0;
}
