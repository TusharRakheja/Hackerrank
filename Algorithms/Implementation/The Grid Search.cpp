#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++) {
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        bool found = false;
        for (int i = 0; i < R; i++) {
            int store = i;
            if (G[i].find(P[0]) != -1) {
                int offset = G[i].find(P[0]);
                found = true;
                i++;
                for (int j = 1; j < r; j++) {
                    if (i >= R) { cout << "NO\n"; goto next; }
                    if (G[i++].find(P[j]) != offset) {
                        found = false;
                        break;
                    }
                }
                if (found) { cout << "YES\n"; goto next; }
            }
            i = store;
        }
        cout << "NO\n"; 
        next:;
    }
    return 0;
}