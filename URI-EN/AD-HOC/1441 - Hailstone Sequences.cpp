// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Hailstone Sequences
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1441

#include <cstdio>
using namespace std;

int main () {
int h, maior;

scanf("%d", &h);

while(h!=0) {
maior = h;
while(h!=1) {
if(h%2==0)
h /= 2;
else
h = 3*h+1;
if(h>maior)
maior = h;
}
printf("%d\n", maior);
scanf("%d", &h);
}

return 0;
}
