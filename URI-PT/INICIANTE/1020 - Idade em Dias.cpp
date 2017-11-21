// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Idade em Dias
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1020

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	int a;
	cin >> a;
	
	printf("%d ano(s)\n", a/365);
	a -= (a/365)*365;
	printf("%d mes(es)\n", a/30);
	a -= (a/30)*30;
	printf("%d dia(s)\n", a);
}
