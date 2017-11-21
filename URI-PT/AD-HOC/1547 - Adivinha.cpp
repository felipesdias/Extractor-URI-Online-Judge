// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Adivinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1547

#include <cstdio>

int abs(int n) {
	return n < 0 ? -1*n : n;
}

int main () {
	int n, nAlunos, numSecreto, alunoGanhador, alunoAtual, chute, chuteGanhador;
	
	scanf("%d", &n);
	
	while(n > 0) {
		alunoAtual = alunoGanhador = 1;
		chute = chuteGanhador = 1000;
		
		scanf("%d %d", &nAlunos, &numSecreto);
		while(nAlunos > 0) {
			scanf("%d", &chute);
			
			if(abs(chute-numSecreto) < abs(chuteGanhador-numSecreto)) {
				chuteGanhador = chute;
				alunoGanhador = alunoAtual;
			}
			
			alunoAtual++;
			nAlunos--;
		}
		
		printf("%d\n", alunoGanhador);
		n--;
	}
	
	return 0;
}

