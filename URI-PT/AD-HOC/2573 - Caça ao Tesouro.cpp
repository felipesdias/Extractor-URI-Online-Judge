// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Caça ao Tesouro
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2573

#include <bits/stdc++.h>

using namespace std;

double integraReta(double x, double a, double b) {
	return (a*x*x)/2 + b*x;
}

double areaSup(double a, double b, double x, double y) {
	bool inverte = false;
	if(a < 0) {
		a *= -1;
		b = -1*b + y;
		inverte = true;
	}

	double menor = max(0.0, -b/a);
	double maior = min(x, (y-b)/a);

	double areaAnalisada = y*maior;

	double areaSuperior = areaAnalisada - (integraReta(maior, a, b)-integraReta(menor, a, b));
	double areaInferior = x*y - areaSuperior;


	return inverte ? areaInferior : areaSuperior;
}

int main() {
	
	double x, y, x1, x2, y1, y2;
	double a, b;

	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	if(y1 == y2) {
		if(x1 < x2) {
			double prob = (((x1+((x2-x1)*1.0)/2.0)*y)*1.0)/(x*y);
			printf("%.6lf %.6lf\n", prob, 1.0-prob);
		} else {
			double prob = (((x2+((x1-x2)*1.0)/2.0)*y)*1.0)/(x*y);
			printf("%.6lf %.6lf\n", 1.0-prob, prob);
		}
	} 
	else if(x1 == x2) {
		if(y1 < y2) {
			double prob = (((y1+((y2-y1)*1.0)/2.0)*x)*1.0)/(x*y);
			printf("%.6lf %.6lf\n", prob, 1.0-prob);
		} else {
			double prob = (((y2+((y1-y2)*1.0)/2.0)*x)*1.0)/(x*y);
			printf("%.6lf %.6lf\n", 1.0-prob, prob);
		}
	} else {
		double pX, pY;
		double auxX, auxY;
		if(x1 < x2) {
			pX = x2-x1;
			pY = y2-y1;
			auxX = x1;
			auxY = y1;
		} else {
			pX = x1-x2;
			pY = y1-y2;
			auxX = x2;
			auxY = y2;
		}

		a = -pX/pY;
		b = (auxY + pY/2.0) + (pX/pY)*(auxX + pX/2.0);

		double areaT = x*y;
		double a1 = areaSup(a, b, x, y);
		double a2 = abs(areaT - a1);

		if(y1 > y2)
			printf("%.6lf %.6lf\n", a1/areaT, a2/areaT);
		else
			printf("%.6lf %.6lf\n", a2/areaT, a1/areaT);
			

	}

	return 0;
}
