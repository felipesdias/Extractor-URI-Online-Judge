// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Prefácio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1837

#include <cstdio>

int abs(int a) {
	return a < 0 ? -a : a;
}

int main() {
	int a, b, q, r;
	
	scanf("%d %d", &a, &b);
	
	q = a/b;
	r = a%b;
	
	if(a < 0 && b < 0)
{
if(r<0 && q<=0)
{
q++;
r=-(b*q)+a;
}
else if(r<0 && q>0)
{
q++;
r=-(b*q)+a;
}
}
else
{
if(r<0 && q<=0)
{
q--;
r=-(b*q)+a;
}
else if(r<0 && q>0)
{
q++;
r=-(b*q)+a;
}
}
	
	printf("%d %d\n", q, r);

	return 0;
}
