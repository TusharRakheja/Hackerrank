#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class UnionFind {   
public:    
    int * parent;
    int n;
    UnionFind(int n) {
        parent = new int[n];
        this->n = n;
        for (int i = 0; i < n; i++)
            parent[i] = -1;
    }
    ~UnionFind() {
        delete[] parent;
    }
    int find(int a) {
        int p = a;
        while (parent[p] >= 0) {
            if (parent[parent[p]] >= 0)
                parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }
    void _union(int a1, int a2) {
        int p1 = find(a1), p2 = find(a2);
        if (p1 == p2) return;
        else if (-parent[p1] > -parent[p2]) {
            parent[p1] += parent[p2];
            parent[p2] = p1;
        }
        else {
            parent[p2] += parent[p1];
            parent[p1] = p2;
        }
    }    
    vector<int> nsets() {
        int count = 0;
        vector<int> citizens;
        for (int i = 0; i < this->n; i++) {
            if (parent[i] < 0) 
                citizens.push_back(-parent[i]);
        }
        return citizens;
    }
};

int main() {
    int N, I;
    cin >> N >> I;
    UnionFind astronauts(N);
    for (int i = 1; i <= I; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        astronauts._union(a1, a2);
    }
    vector<int> nastros = astronauts.nsets();                   // # of astronauts by country.
    int sum = accumulate(nastros.begin(), nastros.end(), 0);
    long nways = 0;
    for (int i = 0; i < nastros.size(); i++) {
        nways += (sum - nastros[i]) * nastros[i];
        sum -= nastros[i];
    }
    cout << nways;
    return 0;
}
