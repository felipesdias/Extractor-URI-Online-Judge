// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Fake Tickets
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1318

#include <iostream>

using namespace std;



int main() {

    int falsos;
    int i, j , num;
    int bilhetes, presentes;
    cin >> bilhetes >> presentes;
    while (bilhetes !=0 && presentes !=0) {
        int vetor[10001] = {0};
        falsos = 0;
        for(i=0; i<presentes; i++) {
            cin >> num;
            if(vetor[num] == 0 && num <= bilhetes) {
                vetor[num]++;
            } else if(vetor[num] < 2){
                vetor[num]++;
                falsos++;
            }
        }
        cout << falsos << endl;
        cin >> bilhetes >> presentes;
    }

    return 0;
}

