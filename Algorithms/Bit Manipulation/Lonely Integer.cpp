#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int *a = new int[n]; // dynamic.
    for(int i = 0; i < n; i++)  {
        cin >> a[i];
        //cout << a[i] << " ";
    }
    stable_sort(a, a+n);
    if (n==1) {
        cout << a[0]; 
    }
    else {
        for(int i =0; i<n-2; i+=2) {
            if(a[n-1] != a[n-2]) {
                cout << a[n-1];
                break;
            }
            else if(a[i]!=a[i+1]) {
                cout << a[i];
                break;
            }
        }
    }
    return 0;
}