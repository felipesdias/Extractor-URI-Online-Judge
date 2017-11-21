// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Mean Median Problem
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1379

#include <cstdio>

int main () {
int a, b, c;

scanf("%d%d", &a, &b);

while(a!=0 && b!=0) {
c = a - (b - a);
printf("%d\n", c);
scanf("%d%d", &a, &b);
}

return 0;
}
