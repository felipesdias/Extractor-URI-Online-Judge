// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Perfect Number
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1164

#include <bits/stdc++.h>

using namespace std;

bool visitado[100000001]; //False = Primo,  True = Não Primo

int resposta(int num) {
	int aux = num/2;
	
	for(int i=0; i<=aux; i++)
		visitado[i] = false;
	
	visitado[1] = true;
	
	for(int i=2; i<=aux; i++)
		if(!(num%i))
			for(int j=i; j<=aux; j+=i)
				visitado[i] = true;
			
	int cont = 0;
			
	for(int i=0; i<=aux; i++)
		if(visitado[i])
			cont += i;

	return cont;
}

int main() {
	int tam;
	
	int n, num;
	int soma;
	
	scanf("%d", &n);
	
	while(n--) {
		
		scanf("%d", &num);
		
		soma = resposta(num);
		
		if(soma == num)
			printf("%d eh perfeito\n", num);
		else
			printf("%d nao eh perfeito\n", num);
		
	}

	return 0;
}

