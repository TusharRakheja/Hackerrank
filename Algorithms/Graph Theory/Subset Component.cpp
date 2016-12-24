/* Passes 13/14 test cases. Times out on the 14th. Complexity: O(n*2^n) [ignoring UF] */

#include <cmath>
#include <vector>
#include <iostream>
#include <bitset>

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
    int ncomponents() {
        int count = 0;
        for (int i = 0; i < this->n; i++) {
            if (parent[i] < 0) 
                count++;
        }
        return count;
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> d(n);
    long times = pow(2, n);
    UnionFind ** lastCol = new UnionFind * [times];
    for (int i = 0; i < times; i++) {
        lastCol[i] = new UnionFind(64);
    }
    for (int i = 0; i < n; i++) {
        unsigned long long di;
        cin >> di;
        d[i] = bitset<64>(di).to_string();        
    }
    long flip = times;
    for (int j = 0; j < n; j++) {
        vector<int> indicesWith1;
        for (int index = 0; index < 64; index++) {
            if (d[j][index] == '1') {
                indicesWith1.push_back(index);
            }
        }
        flip >>= 1;
        int fill = 1;
        for (long i = flip; i <= times - flip; i += flip) {
            for (int k = 0; k < flip; k++, i++) {
                for (int i2 = 1; i2 < indicesWith1.size(); i2++) {    
                        lastCol[i]->_union(indicesWith1[0], indicesWith1[i2]);
                }
            }
        }
    }
    int ncomponents = 0;
    for (int i = 0; i < times; i++) {
        ncomponents += lastCol[i]->ncomponents();
    }
    cout << ncomponents;
    return 0;
}
