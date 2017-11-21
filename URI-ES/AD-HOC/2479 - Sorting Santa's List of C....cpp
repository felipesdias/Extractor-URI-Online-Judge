// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Sorting Santa's List of C...
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2479

#include <bits/stdc++.h>

using namespace std;

int main() {
   multiset<string> bons, ruins, todos;
   string nome;
   int n;
   char op;
   
   cin >> n;
   
   while(n--) {
       scanf(" %c", &op);
       cin >> nome;
       
       if(op == '+') 
           bons.insert(nome);    
       else 
           ruins.insert(nome);

        todos.insert(nome);
   }
   
   for(auto &it : todos)
       cout << it << endl;
   
   printf("Se comportaram: %d | Nao se comportaram: %d\n", bons.size(), ruins.size());
   
   return 0;
}
