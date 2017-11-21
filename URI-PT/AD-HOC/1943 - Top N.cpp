// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Top N
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1943

#include <cstdio>

int main() {
    int n;

    scanf("%d", &n);

    if(n==1)
        printf("Top 1\n");
    else if(n<=3)
        printf("Top 3\n");
    else if(n<=5)
        printf("Top 5\n");
    else if(n<=10)
        printf("Top 10\n");
    else if(n<=25)
        printf("Top 25\n");
    else if(n<=50)
        printf("Top 50\n");
    else if(n<=100)
        printf("Top 100\n");

    return 0;
}

