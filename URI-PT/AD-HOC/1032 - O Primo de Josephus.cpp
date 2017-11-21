// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O Primo de Josephus
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1032

#include <cstdio>
#include <cmath>

void geraCrivo(int *vetor, int tam) {
    bool crivo[100000] = {false};
	crivo[0] = crivo[1] = true;
	for(int i=2; i<=tam; i++)
		if(!crivo[i])
			for(int j=2*i; j<=tam; j+=i)
				crivo[j] = true;

	int contPrimos = 0;
	for(int i=0; i<=tam; i++) {
		if(!crivo[i]) {
			vetor[contPrimos] = i;
			contPrimos++;
		}
        if(contPrimos==3501)
            return;
	}
}

int fjp(int n, int k, int* crivo) {
    if(n==1)
        return 1;

    return (fjp(n-1, k+1, crivo)+crivo[k]-1)%n+1;
}

int main() {
    int n, crivo[3501];

    geraCrivo(crivo, 100000);

    scanf("%d", &n);

    while(n) {
        printf("%d\n", fjp(n, 0, crivo));
        scanf("%d", &n);
    }

    return 0;
}

