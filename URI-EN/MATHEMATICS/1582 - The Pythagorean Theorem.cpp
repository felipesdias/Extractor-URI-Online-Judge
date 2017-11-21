// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Pythagorean Theorem
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1582

#include <stdio.h>

void swap(int &a, int &b) {
	int aux;
	
	if(b < a) {
		aux = a;
		a = b;
		b = aux;
	}
}

int mdc(int a, int b) {
	if (b==0)
		return a;
	
	if (b>a)
		return mdc(a, b%a);
	else
		return mdc(b, a%b);
}

int min(int a, int b, int c) {
	return a < b && a < c ? a : b < c ? b : c;
}

int mdc(int a, int b, int c) {
	return min(mdc(a,b), mdc(b,c), mdc(a,c));
}


int main () {
	int a, b, c, pitagorica, primitiva;
	
	while(scanf("%d %d %d", &a, &b, &c) >  0) {
		pitagorica = primitiva = 0;
		
		swap(a, b);
		swap(b, c);
		swap(a, b);
		
		if(c*c == a*a + b*b)
			pitagorica = 1;
		if(pitagorica && mdc(a, b, c) == 1)
			primitiva = 1;
	
		printf("tripla%s%s\n", pitagorica ? " pitagorica" : "", primitiva ? " primitiva" : "");
	}
	
	return 0;
}
