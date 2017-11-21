// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Santa's Translator
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1763

#include <iostream>
#include <map>
using namespace std;

int main() {
	string nome;
	map<string, string> dicionario;
	map<string, string>::iterator it;
	
	dicionario["brasil"] = "Feliz Natal!";
	dicionario["alemanha"] = "Frohliche Weihnachten!";
	dicionario["austria"] = "Frohe Weihnacht!";
	dicionario["coreia"] = "Chuk Sung Tan!";
	dicionario["espanha"] = "Feliz Navidad!";
	dicionario["grecia"] = "Kala Christougena!";
	dicionario["estados-unidos"] = "Merry Christmas!";
	dicionario["inglaterra"] = "Merry Christmas!";
	dicionario["australia"] = "Merry Christmas!";
	dicionario["portugal"] = "Feliz Natal!";
	dicionario["suecia"] = "God Jul!";
	dicionario["turquia"] = "Mutlu Noeller";
	dicionario["argentina"] = "Feliz Navidad!";
	dicionario["chile"] = "Feliz Navidad!";
	dicionario["mexico"] = "Feliz Navidad!";
	dicionario["antardida"] = "Merry Christmas!";
	dicionario["canada"] = "Merry Christmas!";
	dicionario["irlanda"] = "Nollaig Shona Dhuit!";
	dicionario["belgica"] = "Zalig Kerstfeest!";
	dicionario["italia"] = "Buon Natale!";
	dicionario["libia"] = "Buon Natale!";
	dicionario["siria"] = "Milad Mubarak!";
	dicionario["marrocos"] = "Milad Mubarak!";
	dicionario["japao"] = "Merii Kurisumasu!";

	while(cin >> nome) {
		it = dicionario.find(nome);
		if(it == dicionario.end())
			cout << "--- NOT FOUND ---\n";
		else
			cout << dicionario[nome] << endl;
	}
	
	return 0;
}
