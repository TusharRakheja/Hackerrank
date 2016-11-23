#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{
    return (b==0) ? a : gcd(b, a%b);
}

int main() 
{
    int t;
    cin >> t; int * array;
    //cout << t;
    int n; bool trip = false;
    for(int i = 0; i < t; i++) {
        trip = false;
        cin >> n;
        array = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> array[j];
        }
        for(int j = 0; j < n-1 && !trip; j++) {
            for(int g = j+1; g < n; g++) {
                if(gcd(array[j], array[g]) == 1) {
                    cout << "YES" << endl;
                    trip = true;
                    break;
                }
            }
        }
        if(trip == false)
            cout << "NO" << endl;
        delete array;
    }
    return 0;
}
