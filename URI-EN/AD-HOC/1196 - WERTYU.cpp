// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: WERTYU
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1196

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {

	char c;
	bool maiuscula;
	
	while(scanf("%c", &c) != EOF){
		if(c >= 'a' && c <= 'z')
			maiuscula = false;
		else {
			maiuscula = true;
			c = tolower(c);	
		}
		//cout << c << endl;
		switch(c) {
			case '1': c = '`';break;
			case '2': c = '1';break;
			case '3': c = '2';break;
			case '4': c = '3';break;
			case '5': c = '4';break;
			case '6': c = '5';break;
			case '7': c = '6';break;
			case '8': c = '7';break;
			case '9': c = '8';break;
			case '0': c = '9';break;
			case '-': c = '0';break;
			case '=': c = '-';break;
			case 'w': c = 'q';break;
			case 'e': c = 'w';break;
			case 'r': c = 'e';break;
			case 't': c = 'r';break;
			case 'y': c = 't';break;
			case 'u': c = 'y';break;
			case 'i': c = 'u';break;
			case 'o': c = 'i';break;
			case 'p': c = 'o';break;
			case '[': c = 'p';break;
			case ']': c = '[';break;
			case '\\': c = ']';break;
			case 's': c = 'a';break;
			case 'd': c = 's';break;
			case 'f': c = 'd';break;
			case 'g': c = 'f';break;
			case 'h': c = 'g';break;
			case 'j': c = 'h';break;
			case 'k': c = 'j';break;
			case 'l': c = 'k';break;
			case ';': c = 'l';break;
			case '\'': c = ';';break;			
			case 'x': c = 'z';break;
			case 'c': c = 'x';break;
			case 'v': c = 'c';break;
			case 'b': c = 'v';break;
			case 'n': c = 'b';break;
			case 'm': c = 'n';break;
			case ',': c = 'm';break;
			case '.': c = ',';break;
			case '/': c = '.';break;
		}
		if(maiuscula)
			c = toupper(c);
		printf("%c",c);
	}

	return 0;
}
