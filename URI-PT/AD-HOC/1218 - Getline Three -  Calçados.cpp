// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Getline Three -  Calçados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1218

#include <cstdio>

int main () {
	int numDesejado, entradaNum, i = 0, pares, paresF, paresM;
	char entradaChar, token;
	
	while(scanf("%d%*c", &numDesejado) != EOF) {
		i++;
		
		if(i != 1)
			printf("\n");
			
		pares = paresF = paresM = 0;
	
		scanf("%d %c%c", &entradaNum, &entradaChar, &token);
		
		if(entradaNum == numDesejado) {
			pares++;
			if(entradaChar == 'F')
				paresF++;
			else
				paresM++;
		}
		
		while(token != '\n') {
			scanf("%d %c%c", &entradaNum, &entradaChar, &token);
		
			if(entradaNum == numDesejado) {
				pares++;
				if(entradaChar == 'F')
					paresF++;
				else
					paresM++;
			}
		}
		
		printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n", i, pares, paresF, paresM);
	}
	
	return 0;
}

