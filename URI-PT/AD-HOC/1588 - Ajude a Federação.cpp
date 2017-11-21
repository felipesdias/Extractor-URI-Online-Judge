// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Ajude a Federação
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1588

#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

typedef struct tTime {
	char nome[50];
	long long int pontos, vitorias, gp, ap;
} tTime;

int main() { 
	int t, n, m, id1, id2, p1, p2, i, j;
	char t1[50], t2[50];
	tTime time[2000], aux;
	
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d %d", &n, &m);
		
		for(i = 0; i < n; i++) 
			time[i].pontos = time[i].vitorias = time[i].gp = 0;
		
		for(i = 0; i < n; i++) {
			scanf("%s", time[i].nome);
			time[i].ap = i;
		}
		
		for(i = 0; i < m; i++) {
			scanf("%d %s %d %s", &p1, t1, &p2, t2);
			
			for(id1 = 0; strcmp(t1, time[id1].nome); id1++);
			for(id2 = 0; strcmp(t2, time[id2].nome); id2++);
			
			if(p1 == p2) {
				time[id1].pontos++;
				time[id2].pontos++;
				time[id1].gp += p1;
				time[id2].gp += p2;
			}
			else if(p1 > p2) {
				time[id1].vitorias++;
				time[id1].pontos += 3;
				time[id1].gp += p1;
				time[id2].gp += p2;
			}
			else {
				time[id2].vitorias++;
				time[id2].pontos += 3;
				time[id1].gp += p1;
				time[id2].gp += p2;
			}
		}
		
		for(i = 0; i < n; i++)
			for(j = 1; j < n; j++)
				if(time[j].pontos > time[j-1].pontos)
					swap(time[j], time[j-1]);
				else if(time[j].pontos == time[j-1].pontos) {
					if(time[j].vitorias > time[j-1].vitorias)
						swap(time[j], time[j-1]);
					else if(time[j].vitorias == time[j-1].vitorias) {
						if(time[j].gp > time[j-1].gp)
							swap(time[j], time[j-1]);
						else if (time[j].gp == time[j-1].gp && time[j].ap < time[j-1].ap)
							swap(time[j], time[j-1]);
					}
				}
				
		for(i = 0; i < n; i++) {
			printf("%s\n", time[i].nome);
		}
	}
	
	return 0;
}
