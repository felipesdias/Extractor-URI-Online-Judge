// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Average 3
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1040

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, d, media;
	cin >> a >> b >> c >> d;
	media = (a*2+b*3+c*4+d)/10;
	
	printf("Media: %.1lf\n", media);
	if(media < 5)
		puts("Aluno reprovado.");
	else if(media >= 7)
		puts("Aluno aprovado.");
	else {
		puts("Aluno em exame.");
		cin >> a;
		media = (media+a)/2;
		printf("Nota do exame: %.1lf\n", a);
		if(media >= 5)
			puts("Aluno aprovado.");
		else
			puts("Aluno reprovado.");

		printf("Media final: %.1lf\n", media);
	}
	
	return 0;
}
