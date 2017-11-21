// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Ele Está Impedido!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1410

#include <cstdio>

int main() {
    int a, d, ata, def1, def2, aux;

    scanf("%d %d", &a, &d);

    while(a && d) {
        ata = def1 = def2 = 10001;

        for(int i=0; i<a; i++) {
            scanf("%d", &aux);
            if(aux<ata)
                ata = aux;
        }

        for(int i=0; i<d; i++) {
            scanf("%d", &aux);

            if(def1 <= def2 && aux < def2)
                def2 = aux;
            else if(def2 <= def1 && aux < def1)
                def1 = aux;
        }

        if(ata >= def1 && ata >= def2)
            printf("N\n");
        else
            printf("Y\n");

        scanf("%d %d", &a, &d);
    }

    return 0;
}

