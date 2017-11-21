// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Conversión de Tiempo
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1019

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
