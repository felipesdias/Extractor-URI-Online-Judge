// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Conversão de Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1019

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	int a;
	cin >> a;
	
	printf("%d:", a/3600);
	a -= (a/3600)*3600;
	printf("%d:", a/60);
	a -= (a/60)*60;
	printf("%d\n", a);
}
