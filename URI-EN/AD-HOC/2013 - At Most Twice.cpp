// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: At Most Twice
// Level: 4
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2013

#include <bits/stdc++.h>

using namespace std;

#define D(x) //cout << #x " = " << x << endl;

int main() {
	unsigned long long int num;
	
	char s[1000];
	
	int cont[10] = {0};
	
	cin >> num;
	
	sprintf(s, "%llu", num);
	
	int tam = strlen(s);
	
	int atual = 0;
	
	while(atual<tam) 
	{
		if(s[atual] == '0' - 1) 
		{
			s[atual] = '9';
			
			atual--;
			
			cont[s[atual] - '0']--;
			s[atual]--;
			
			continue;
		}	
		
		
		if(cont[s[atual] - '0'] < 2) 
		{
			cont[s[atual] - '0']++;
			atual++;
		}
		else 
		{
			for(int i = atual + 1; i < tam; i++)
				s[i] = '9';
			
			if(s[atual] == '0') 
			{
				s[atual] = '9';
				
				atual--;
				
				cont[s[atual] - '0']--;
				s[atual]--;
			}
			else 
				s[atual]--;
		}
	}
	
	D(s);
	sscanf(s, "%llu", &num);
	D(num);
	
	cout << num << endl;
	
	return 0;
}

