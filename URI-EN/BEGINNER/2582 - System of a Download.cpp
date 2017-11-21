// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: System of a Download
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2582

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    char pal[][40] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
                      "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

    scanf("%*d");

    int a, b;

    while(scanf("%d %d", &a, &b) > 0)
        puts(pal[a+b]);
}
