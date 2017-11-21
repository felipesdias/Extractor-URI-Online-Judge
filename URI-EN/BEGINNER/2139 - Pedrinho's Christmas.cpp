// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Pedrinho's Christmas
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2139

#include <cstdio>

int main() {
	int dia, mes, cont;
	
	while(scanf("%d %d", &mes, &dia)!=EOF) {
		if(mes == 12) {
			if(dia == 25)
				printf("E natal!\n");
			else if(dia == 24)
				printf("E vespera de natal!\n");
			else if(dia > 25)
				printf("Ja passou!\n");	
		}
		else {
			switch(mes) {
				case 1: cont = 360 - dia; break; 
				case 2: cont = 329 - dia; break; 
				case 3: cont = 300 - dia; break; 
				case 4: cont = 269 - dia; break; 
				case 5: cont = 239 - dia; break; 
				case 6: cont = 208 - dia; break; 
				case 7: cont = 178 - dia; break; 
				case 8: cont = 147 - dia; break; 
				case 9: cont = 116 - dia; break; 
				case 10: cont = 86 - dia; break;
				case 11: cont = 55 - dia; break;
				case 12: cont = 25 - dia; break;
			}
			
			printf("Faltam %d dias para o natal!\n", cont);
		}
	}

	return 0;
}
