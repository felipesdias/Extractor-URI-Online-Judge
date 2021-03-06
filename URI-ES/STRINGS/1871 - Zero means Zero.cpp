// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Zero means Zero
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1871

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;

const char digit_pairs[201] = {
  "00010203040506070809"
  "10111213141516171819"
  "20212223242526272829"
  "30313233343536373839"
  "40414243444546474849"
  "50515253545556575859"
  "60616263646566676869"
  "70717273747576777879"
  "80818283848586878889"
  "90919293949596979899"
};


string& itostr(int n, string& s)
{
    if(n==0)
    {
        s="0";
        return s;
    }

    int sign = -(n<0);
    unsigned int val = (n^sign)-sign;

    int size;
    if(val>=10000)
    {
        if(val>=10000000)
        {
            if(val>=1000000000)
                size=10;
            else if(val>=100000000)
                size=9;
            else 
                size=8;
        }
        else
        {
            if(val>=1000000)
                size=7;
            else if(val>=100000)
                size=6;
            else
                size=5;
        }
    }
    else 
    {
        if(val>=100)
        {
            if(val>=1000)
                size=4;
            else
                size=3;
        }
        else
        {
            if(val>=10)
                size=2;
            else
                size=1;
        }
    }
    size -= sign;
    s.resize(size);
    char* c = &s[0];
    if(sign)
        *c='-';

    c += size-1;
    while(val>=100)
    {
       int pos = val % 100;
       val /= 100;
       *(short*)(c-1)=*(short*)(digit_pairs+2*pos); 
       c-=2;
    }
    while(val>0)
    {
        *c--='0' + (val % 10);
        val /= 10;
    }
    return s;
}

string& itostr(unsigned val, string& s)
{
    if(val==0)
    {
        s="0";
        return s;
    }

    int size;
    if(val>=10000)
    {
        if(val>=10000000)
        {
            if(val>=1000000000)
                size=10;
            else if(val>=100000000)
                size=9;
            else 
                size=8;
        }
        else
        {
            if(val>=1000000)
                size=7;
            else if(val>=100000)
                size=6;
            else
                size=5;
        }
    }
    else 
    {
        if(val>=100)
        {
            if(val>=1000)
                size=4;
            else
                size=3;
        }
        else
        {
            if(val>=10)
                size=2;
            else
                size=1;
        }
    }

    s.resize(size);
    char* c = &s[size-1];
    while(val>=100)
    {
       int pos = val % 100;
       val /= 100;
       *(short*)(c-1)=*(short*)(digit_pairs+2*pos); 
       c-=2;
    }
    while(val>0)
    {
        *c--='0' + (val % 10);
        val /= 10;
    }
    return s;
}

int main() {
	int a, b;
	string num;
	
	scanf("%d%d", &a, &b);
	
	while(a != 0 || b != 0) {
		itostr(a+b, num);
		
		for(int i=0; i<num.length(); i++)
			if(num[i] != '0')
				printf("%c", num[i]);
			
		puts("");
		
		scanf("%d%d", &a, &b);
	}
}
