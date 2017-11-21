// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Ordering Trees
// Nível: %d
// Categoria: GRAPH
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1695

#include <bits/stdc++.h>
using namespace std;
#define MAXN 100011
// #define debug(...) do{ fprintf( stdout, __VA_ARGS__ ); } while( false )
#define debug(...) do{  } while( false )

int T,N,M,A,B;
int v[MAXN], vpre[MAXN], ibegin[MAXN], iend[MAXN];
vector<int> adj[MAXN];

/* https://www.quora.com/How-can-you-build-a-data-structure-on-an-array-that-returns-kth-order-statistics-on-subarrays-in-logarithmic-time */
struct elem {
    int val, pos;
    bool operator< (elem b) const {
        return val<b.val;
    }
};
int* tree[4*MAXN+10];
elem temp[MAXN], arr[MAXN], sorted[MAXN];
int* merge(int e, int d) {
    int* num_left = (int*) malloc(sizeof(int) * (d - e + 1));
    int left = e, right = (e+d)/2+1;
    int i = 0, cnt = 0;
    while (left <= (e+d)/2 && right <= d) {
        if (arr[left].pos <= arr[right].pos) {
            num_left[i] = ++cnt;
            temp[i] = arr[left++];
        }
        else {
            num_left[i] = cnt;
            temp[i] = arr[right++];
        }
        i++;
    }
    while (left <= (e+d)/2) {
        num_left[i] = ++cnt;
        temp[i] = arr[left++];
        i++;
    }
    while (right <= d) {
        num_left[i] = cnt;
        temp[i] = arr[right++];
        i++;
    }
    for (int j = 0; j < (d-e+1); j++) {
        arr[e+j]=temp[j];
    }   
    return num_left;        
}
void create_tree (int i=1, int e=1, int d=N) {
	if (e == d) return;
	else {
		create_tree(2*i, e, (e+d)/2);
		create_tree(2*i+1, (e+d)/2 + 1, d);
		tree[i] = merge(e-1, d-1);
	}
}
int query(int p, int q, int k, int i=1, int st=1, int end=N) {  
    if (st == end) return sorted[st-1].val;
    int left = (p!=1 ? tree[i][p-2] : 0);
    int right = tree[i][q-1];
    int diff = right - left;
    if (diff >= k) 
        return query(left+1,right,k,2*i,st,st+(end-st)/2);
    else 
        return query(p-left,q-right,k-diff,2*i+1,st+(end-st)/2+1,end);
}
/* ------------------------------------------------------------------------ */

int preorderCount;
int dfs(int root, int pred)
{
    ibegin[root] = preorderCount++;
    vpre[ibegin[root]] = v[root];
    for (auto u : adj[root])
        if (u != pred) dfs(u,root);
    iend[root] = preorderCount-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++)
        {
            adj[i].clear();
            scanf("%d", &v[i]);
        }
        for (int i = 0; i < N-1; i++)
        {
            scanf("%d %d", &A, &B); A--; B--;
            adj[A].push_back(B);
            adj[B].push_back(A);
        }
        preorderCount = 0;
        dfs(0,-1);
        debug("pre: ");
        for (int i = 0; i < N; i++)
        {
            debug("%d ", vpre[i]);
            sorted[i].val = vpre[i];
            sorted[i].pos = i;
        }
        debug("\n");
        sort(sorted,sorted+N);
        memcpy(arr,sorted,sizeof(sorted));
        create_tree();
        for (int i = 0; i < M; i++)
        {
            scanf("%d %d", &A, &B); A--;
            int l = ibegin[A], r = iend[A];
            printf("%d ", query(l+1,r+1,B));
        }
        printf("\n");

    }
}
