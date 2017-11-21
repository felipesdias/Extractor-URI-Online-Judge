// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Libertadores
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1536

#include <cstdio>

int main () {
	int n, entradaA, entradaB, pontosA, pontosB, saldoA, saldoB, golsForaA, golsForaB;
	
	scanf("%d", &n);
	
	while(n > 0) {
		pontosA = pontosB = saldoA = saldoB = golsForaA = golsForaB = 0;
	
		scanf("%d x %d", &entradaA, &entradaB);
		
		if (entradaA > entradaB) 
			pontosA += 3;
		else if (entradaB > entradaA)
			pontosB += 3;
		
		saldoA += entradaA - entradaB;
		saldoB -= entradaA - entradaB;
		
		golsForaB += entradaB;
		
		scanf("%d x %d", &entradaB, &entradaA);
		
		if (entradaA > entradaB) 
			pontosA += 3;
		else if (entradaB > entradaA)
			pontosB += 3;
		
		saldoA += entradaA - entradaB;
		saldoB -= entradaA - entradaB;
		
		golsForaA += entradaA;
		
		if(pontosA > pontosB || pontosA == pontosB && saldoA > saldoB || pontosA == pontosB && saldoA == saldoB && golsForaA > golsForaB)
			puts("Time 1");
		else if(pontosA == pontosB && saldoA == saldoB && golsForaA == golsForaB)
			puts("Penaltis");
		else
			puts("Time 2");
		
		n--;
	}
	
	return 0;
}

