// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Competição
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1514

#include <iostream>
using namespace std;
 
int main() {
    int n, m, i, j, carac, contl, contc;
    bool matriz[100][100], um, dois, tres, quatro;
 
    cin >> n >> m;
 
    while (n!=0&&m!=0){
 
        carac=0;
        um=true; dois=true; tres=true; quatro=true;
 
        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
                cin >> matriz[i][j];
 
        for (i=0;i<n;i++){
            contl=0;
            contc=0;
            for (j=0;j<m;j++)
                if(matriz[i][j]){
                    contc++;
                    contl++;
                }
            if(contc==m)
                um=false;
            if(contl==0)
                quatro=false;
            if(contc==m&&contl==0) break;
        }
 
        for (i=0;i<m;i++){
            contl=0;
            contc=0;
            for (j=0;j<n;j++)
                if(matriz[j][i]){
                    contl++;
                    contc++;
                }
            if(contl==n)
                tres=false;
            if(contc==0)
                dois=false;
            if(contc==0&&contl==n) break;
        }
 
        if(um) carac++;
        if(dois) carac++;
        if(tres) carac++;
        if(quatro) carac++;
 
        cout << carac << endl;
 
        cin >> n >> m;
    }
 
    return 0;
}
