#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int nDecSubArr = 0;        
    bool inDecSubArr = false;   
    vector<int> revStart, revEnd;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i] && !inDecSubArr) {
            inDecSubArr = true;
            revStart.push_back(i);
            nDecSubArr++;
        }
        else if (arr[i + 1] > arr[i] && inDecSubArr) {
            revEnd.push_back(i);
            inDecSubArr = false;
        }
    }
    if (inDecSubArr) {
            revEnd.push_back(n - 1);
            inDecSubArr = false;        
    }
    if (nDecSubArr == 0) {
        cout << "yes";
        return 0;
    }
    if (nDecSubArr == 1) {
        bool yes = true;
        if (revStart[0] != 0 && arr[revStart[0] - 1] > arr[revEnd[0]]) {
            yes = false; 
        }
        if (revEnd[0] != n-1 && arr[revEnd[0] + 1] < arr[revStart[0]]) {
            yes = false;
        }
        if (yes) {
            cout << "yes" << endl;
            if (revEnd[0] == revStart[0] + 1) 
                cout << "swap " << revStart[0] + 1 << " " << revEnd[0] + 1;
            else if (revEnd[0] == revStart[0] + 2) 
                cout << "swap " << revStart[0] + 1 << " " << revEnd[0] + 1;
            else
                cout << "reverse " << revStart[0] + 1 << " " << revEnd[0] + 1;                
            return 0;
        }
        cout << "no";
        return 0;
    }
    if (nDecSubArr == 2) {
        bool yes = true;
        if (revEnd[1] > revStart[1] + 1 || revEnd[0] > revStart[0] + 1) {
            yes = false;
        }
        if (revStart[0] != 0 && arr[revStart[0] - 1] > arr[revEnd[1]]) {
            yes = false; 
        }
        if (revStart[0] + 1 < n && arr[revStart[0] + 1] < arr[revEnd[1]]) {
            yes = false;
        }
        if (revEnd[1] != n-1 && arr[revEnd[1] + 1] < arr[revStart[0]]) {
            yes = false;
        }
        if (revEnd[1] - 1 > 0 && arr[revEnd[1] - 1] > arr[revStart[0]]) {
            yes = false;
        }
        if (yes) {
            cout << "yes" << endl;
            cout << "swap " << revStart[0] + 1 << " " << revEnd[1] + 1;
            return 0;
        }        
        cout << "no";
        return 0;
    }
    cout << "no";
    
    return 0;
}
