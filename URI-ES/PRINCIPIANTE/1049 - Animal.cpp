// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Animal
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1049

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string nome;
	
	cin >> nome;
	
	if(nome == "vertebrado") {
		cin >> nome;
		if(nome == "ave") {
			cin >> nome;
			if(nome == "carnivoro")
				puts("aguia");
			else
				puts("pomba");
		} else {
			cin >> nome;
			if(nome == "onivoro")
				puts("homem");
			else
				puts("vaca");
		}
	} else {
		cin >> nome;
		if(nome == "inseto") {
			cin >> nome;
			if(nome == "hematofago")
				puts("pulga");
			else
				puts("lagarta");
		} else {
			cin >> nome;
			if(nome == "hematofago")
				puts("sanguessuga");
			else
				puts("minhoca");
		}
	}
	return 0;
}
