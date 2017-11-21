// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Sort by Length
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1244

#include <bits/stdc++.h>
 
using namespace std;
 
vector<string> split(string &e) {
    vector<string> resp;
 
    string atual;
 
    for(auto &it : e) {
        if(it != ' ' && it != '\n')
            atual.push_back(it);
        else
            resp.push_back(atual),
            atual = "";
    }
 
    resp.push_back(atual);
 
    return resp;
}
 
bool comp(string a, string b) {
    return a.size() > b.size();
}
 
int main() {
    int n;
    string entrada;
 
    cin >> n;
    getline(cin, entrada);
    
    while(n--) {
        getline(cin, entrada);
        
        auto resp = split(entrada);
 
        stable_sort(resp.begin(), resp.end(), comp);
 
        for(int i = 0; i < resp.size(); i++)
        	cout << resp[i] << " \n"[i + 1 == resp.size()];
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
