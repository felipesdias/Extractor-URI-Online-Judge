// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Honey Reservoir
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2029

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, d;

    while(cin >> n >> d) {
        cout << fixed << setprecision(2) << "ALTURA = " <<  n/(d*d*3.14/4) << endl;
        cout << "AREA = " << d*d*3.14/4 << endl;
    }

    return 0;
}

