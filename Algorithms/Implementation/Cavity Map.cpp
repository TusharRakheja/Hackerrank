#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct grid {
    char *column;
};

int main() 
{
    int n;
    cin >> n;
    grid *row = new grid[n];
    for(int i = 0; i < n; i++) {
        row[i].column = new char[n];
        cin >> row[i].column;
    } 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i!=n-1 && i!=0) && (j!=n-1 && j!=0)) {	// In my defense, this is from years ago. I was a kid.
                if(row[i].column[j] > row[i].column[j+1] && row[i].column[j] > row[i].column[j-1]) {
                    if(row[i].column[j] > row[i+1].column[j] && row[i].column[j] > row[i-1].column[j]) {
                        row[i].column[j] = 'X';
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << row[i].column << endl;
        delete row[i].column;
    }
    delete row;
    return 0;
}

