// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: A Bruxa do 7 x 1
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2569

#include <bits/stdc++.h>

using namespace std;

int main() {
   int a, b;
   char op, pal[100];
   
   scanf("%d %c %d", &a, &op, &b);
   
   sprintf(pal, "%d", a);
   
   for(int i = 0; i < 100; i++)
       if(pal[i] == '7')
           pal[i] = '0';
           
   sscanf(pal, "%d", &a);

   sprintf(pal, "%d", b);
   
   for(int i = 0; i < 100; i++)
       if(pal[i] == '7')
           pal[i] = '0';
           
   sscanf(pal, "%d", &b);

   sprintf(pal, "%d", op == 'x' ? a * b : a + b);
   
   for(int i = 0; i < 100; i++)
       if(pal[i] == '7')
           pal[i] = '0';
           
   sscanf(pal, "%d", &b);
   
   printf("%d\n", b);

   return 0;
}
