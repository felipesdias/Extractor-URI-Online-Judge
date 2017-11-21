// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Parenthesis Balance I
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1068

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
    int tam;
    char str[1001];

    while(cin.getline(str, 1001)) {
        bool correto = true;
        stack<char> p;

        tam = strlen(str);

        for(int i=0; i<tam; i++) {
            if(str[i]=='(')
                p.push('(');

            else if(str[i]==')') {
                if(p.empty()) {
                    correto = false;
                    break;
                }
                else
                    p.pop();
            }
        }

        if(correto && p.empty())
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }

    return 0;
}

