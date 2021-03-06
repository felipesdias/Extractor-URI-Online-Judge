// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Churras no Yuri
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2633

/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author marcos loures
 */

#include <iostream>
#include <fstream>

#include <bits/stdc++.h>

using namespace std;

int getTheAnswer() {
    return 42;
}

int add(int a, int b) {
    return a + b;
}

typedef pair<int, string> carne;

class Task {
public:
	void solve(std::istream& in, std::ostream& out) {
        ios::sync_with_stdio(false);

        cin.tie(0);
        cout.tie(0);

        int n;

        while(in >> n) {
            vector<carne> carnes(n);

            for(auto &it : carnes)
                cin >> it.second >> it.first;

            sort(carnes.begin(), carnes.end());

            for(int i = 0; i < n; i++)
                out << carnes[i].second << " \n"[i == n - 1];
        }
	}
};


int main() {
	Task solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}

