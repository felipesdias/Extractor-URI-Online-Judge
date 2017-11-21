// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Pedra, Papel, Ataque Aéreo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2031

#include<cstdio>

int main() {
    int n;
    char jog1[10], jog2[10];

    scanf("%d", &n);

    while(n--) {
        scanf("%s%s", &jog1, &jog2);

        if(jog1[1]=='t') {
            if(jog2[1]=='t')
                printf("Aniquilacao mutua\n");
            else if(jog2[1]=='e')
                printf("Jogador 1 venceu\n");
            else
                printf("Jogador 1 venceu\n");
        }
        else if(jog1[1]=='e') {
            if(jog2[1]=='t')
                printf("Jogador 2 venceu\n");
            else if(jog2[1]=='e')
                printf("Sem ganhador\n");
            else
                printf("Jogador 1 venceu\n");
        }
        else {
            if(jog2[1]=='t')
                printf("Jogador 2 venceu\n");
            else if(jog2[1]=='e')
                printf("Jogador 2 venceu\n");
            else
                printf("Ambos venceram\n");
        }
    }

    return 0;
}

