// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Conversa Internacional
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1581

#include <iostream>
#include <cstring>
using namespace std;
  
  
int main () {
    int n, k, i, j, h;
    char **idiomas;
    bool ingles;
  
    cin >> n;
  
    for (i=0;i<n;i++) {
        cin >> k;
        ingles=false;
  
        idiomas = new char*[k];
         
        for (j=0;j<k;j++)
            idiomas[j] = new char[21];
  
          cin >> idiomas[0];
        for (j=1;j<k;j++) {
            cin >> idiomas[j];
                if(strcmp(idiomas[j],idiomas[j-1]))
                    ingles=true;
          }
  
        if (ingles)
            cout << "ingles\n";
        else
            cout << idiomas[0] << endl;
  
        for (j=0;j<k;j++)
            delete [] idiomas[j];
        delete[] idiomas;
    }
  
    return 0;
}
