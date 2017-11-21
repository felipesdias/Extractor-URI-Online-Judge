// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Division of Nlogonia
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1091

#include <cstdio>
 
int main() {
 
    int n;
    int px, py;
    int px2, py2;
    char result[2];
    scanf("%d", &n);
     
    while (n != 0) {
        scanf("%d%d", &px, &py);
        for(int i=0; i<n; i++) {
            scanf("%d%d", &px2, &py2);
            if(px == px2 || py == py2)
                printf("divisa\n");
            else {
                if(px2 > px)
                    result[1] = 'E';
                else
                    result[1] = 'O';
                     
                if(py2 > py)
                    result[0] = 'N';
                else
                    result[0] = 'S';
                printf("%c%c\n" ,result[0], result[1]);
            }
        }
        scanf("%d", &n);
    }
 
    return 0;
}
