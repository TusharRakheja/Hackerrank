#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n; long k;
    cin >> n >> k;
    long *array = new long[n];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    stable_sort(array, array + n);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(k >= array[i]) {
            count++;
            k -= array[i];
        }
    }
    cout << count << endl;
    return 0;
}
