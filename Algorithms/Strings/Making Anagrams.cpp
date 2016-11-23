#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char a[10001], b[10001];
    int arr[26], brr[26];
    for(int i = 0; i < 26; i++) {
        arr[i] = brr[i] = 0;
    }
    cin >> a >> b;
    int lena = strlen(a), lenb = strlen(b);
    for(int i = 0; i < lena; i++) {
        arr[a[i]-97]++;
    }
    for(int i = 0; i < lenb; i++) {
        brr[b[i]-97]++;
    }
    int count = 0;
    for(int i = 0; i < 26; i++) {
        count += abs(arr[i] - brr[i]);
    }
    cout << count;
    return 0;
}
