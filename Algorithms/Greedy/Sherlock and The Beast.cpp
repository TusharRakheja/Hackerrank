#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin >> t;
    long long int n;
    for(int i = 0; i < t; i++) {
        cin >> n;
        if(n%3==0) {
            for(int j = 0; j < n; j++) {
                cout << "5";
            } 
            cout << endl;
            continue;
        }
        else {
            int g;
            for(g = 1; (5*g <= n) && (n-5*g)%3!=0; g++);
            if (5*g <= n) {
                for(int j = 0; j < (n-5*g); j++) {
                    cout <<"5";
                }
                for(int k = 5*g; k > 0; k--) {
                    cout <<"3";
                }
                cout << endl;
                continue;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
