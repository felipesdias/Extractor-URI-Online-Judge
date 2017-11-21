// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Campeonato de SMS
// Nível: 4
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1458

#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;

using namespace std;


int l_to_n[255]; //Mapeia letra para o número da tecla correspondente
int qt[255]; //Mapeia quantidade de vezes que tem que apertar a tecla
double dist[13][13]; //Matriz de distancia
double pd[13][13][300]; //Matriz da PD
string s1, s2; //s1 = entrada, s2 = entrada com #

void zeraPD(int n) {
	for(int i=0; i<13; i++)
		for(int j=0; j<13; j++)
			for(int k=0; k<n+2; k++)
				pd[i][j][k] = -1;
}

void inicializa() {
	//Mapeia letra para o número da tecla correspondente
	l_to_n['a'] = l_to_n['b'] = l_to_n['c'] = 2;
	l_to_n['d'] = l_to_n['e'] = l_to_n['f'] = 3;
	l_to_n['g'] = l_to_n['h'] = l_to_n['i'] = 4;
	l_to_n['j'] = l_to_n['k'] = l_to_n['l'] = 5;
	l_to_n['m'] = l_to_n['n'] = l_to_n['o'] = 6;
	l_to_n['p'] = l_to_n['q'] = l_to_n['r'] = l_to_n['s'] = 7;
	l_to_n['t'] = l_to_n['u'] = l_to_n['v'] = 8;
	l_to_n['w'] = l_to_n['x'] = l_to_n['y'] = l_to_n['z'] = 9;
	l_to_n[' '] = 11;
	l_to_n['#'] = 12;

	//Mapeia quantidade de vezes que tem que apertar a tecla
	qt['a'] = qt['d'] = qt['g'] = qt['j'] = qt['m'] = qt['p'] = qt['t'] = qt['w'] = qt[' '] = qt['#'] = 1;
	qt['b'] = qt['e'] = qt['h'] = qt['k'] = qt['n'] = qt['q'] = qt['u'] = qt['x'] = 2;
	qt['c'] = qt['f'] = qt['i'] = qt['l'] = qt['o'] = qt['r'] = qt['v'] = qt['y'] = 3;
													  qt['s']		=	  qt['z'] = 4;

	//Matriz de distancia entre as teclas
	for(int i=0; i<12; i++) {
		int x1 = i%3; 
		int y1 = i/3;
		for(int j=0; j<12; j++) {
			int x = x1 - (j%3);
			int y = y1 - (j/3);
			dist[i+1][j+1] = sqrt( 1.0*(x*x) + 1.0*(y*y) );
		}
	}
}

double vaiPokePd(int esq, int dir, int n) {
	if(esq == dir) //Mesma posição, movimento invalido
		return 6151561531.516;

	if(n+1 == s2.size())//Ultima letra, distancia do anterior até ela
		return 0;

	if(pd[esq][dir][n] != -1)//PD, O.o não me diga!!!!!
		return pd[esq][dir][n];

	int proximo = l_to_n[s2[n+1]]; //Posição do teclado do proximo digito
	double left = dist[esq][proximo]+vaiPokePd(proximo, dir, n+1); //Move dedo esquerdo
	double rigth = dist[dir][proximo]+vaiPokePd(esq, proximo, n+1); //Move dedo direito

	if(left < rigth)//Guarda o menor na PD
		pd[esq][dir][n] = left;
	else
		pd[esq][dir][n] = rigth;

	return pd[esq][dir][n];
}

void imprimePD(int esq, int dir, int n)
{
	cout << esq << " " << dir << " " << s2[n] << " = " << pd[esq][dir][n] << endl;
	if (n+1==s2.size())
		return;
	int proximo = l_to_n[s2[n+1]];
	if (esq == proximo || (pd[proximo][dir][n+1] < pd[esq][proximo][n+1] && proximo!=dir))
		imprimePD(proximo,dir,n+1);
	else
		imprimePD(esq,proximo,n+1);
	return;
}

int main() {

	inicializa();

	while(getline(cin, s1)) {
		s2 = s1[0];
		int cont = qt[s1[0]];

		//Aqui ta certom já testei, gera string2 com as #, e conta quantas vezes precisa apertar a tecla
		for(int i=1; i<s1.size(); i++) {
			if(l_to_n[s1[i]] == l_to_n[s1[i-1]])
				s2 += '#', cont++;
			s2 += s1[i];
			cont += qt[s1[i]];
		}

		zeraPD(s2.size());

		double esq = (dist[4][l_to_n[s2[0]]]+vaiPokePd(l_to_n[s2[0]], 6, 0))/30.0 + cont/5.0;
		double dir = (dist[6][l_to_n[s2[0]]]+vaiPokePd(4, l_to_n[s2[0]], 0))/30.0 + cont/5.0;

		printf("%.2f\n", (esq < dir) ? esq : dir);
		//if (esq<dir)
		//	imprimePD(l_to_n[s2[0]], 6, 0);
		//else
		//	imprimePD(4, l_to_n[s2[0]], 0);
	}

	return 0;
}

