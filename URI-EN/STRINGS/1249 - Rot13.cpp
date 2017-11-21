// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Rot13
// Level: 2
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1249

#include <iostream>
#include <cstring>
using namespace std;
  
int main () {
    int i, tam;
    char msg[51];
     
    while(cin.getline(msg, 51)) {
        tam=strlen(msg);
        for(i=0; i<tam; i++) {
            if( msg[i] >= 'a' && msg[i] <= 'z' ) {
                if(msg[i]+13 > 'z')
                    msg[i] += 13 -'z' + 'a' - 1;
                else
                    msg[i]+=13;
            }
            else if( msg[i]>='A' && msg[i]<='Z' ) {
                msg[i] += 13;
                if(msg[i] > 'Z')
                    msg[i] = msg[i] - 'Z' + 'A' - 1;
            }
            cout << msg[i];
        }
        cout << endl;
    }
 
    return 0;
}
