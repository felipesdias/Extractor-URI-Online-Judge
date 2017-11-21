// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Tempo de um Evento
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1061

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	
	long long int seg, seg2;
	int a,b,c,d;
	string atoa;
	char atoa2;
	
	cin >> atoa >> a >> b >> atoa2 >> c >> atoa2 >> d;
	seg = a*86400+b*3600+c*60+d;
	cin >> atoa >> a >> b >> atoa2 >> c >> atoa2 >> d;
	seg2 = (a*86400+b*3600+c*60+d) - seg;
	
	cout << seg2/86400 << " dia(s)\n";
	seg2 -= (seg2/86400)*86400;
	cout << seg2/3600 << " hora(s)\n";
	seg2 -= (seg2/3600)*3600;
	cout << seg2/60 << " minuto(s)\n";
	seg2 -= (seg2/60)*60;
	cout << seg2 << " segundo(s)\n";

	
	return 0;
}
