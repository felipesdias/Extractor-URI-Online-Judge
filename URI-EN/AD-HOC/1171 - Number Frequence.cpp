// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Number Frequence
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1171

#include <iostream>
using namespace std;
 
int main ()
{
    int i, n, x, vetor[2001]={0}, cont=0;
 
    cin >> n;
 
    for (i=0;i<n;i++){
        cin >> x;
        vetor[x]++;
        cont++;
    }
 
    for (i=0;i<2001;i++)
        if(vetor[i]!=0)
            cout << i << " aparece " << vetor[i] << " vez(es)\n";
 
    return 0;
}
