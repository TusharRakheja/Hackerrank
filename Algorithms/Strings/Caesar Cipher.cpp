#include <iostream>

using namespace std;

int main() {
    char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if ((s.at(i) >= 65 && s.at(i) <= 90)) {
            int j = s.at(i) - 65;
            j = (j + k) % 26;
            cout << A[j]; 
        }
        else if ((s.at(i) >= 97 && s.at(i) <= 122)) {
            int j = s.at(i) - 97;
            j = (j + k) % 26; 
            cout << a[j];
        }
        else cout << s.at(i);
    }
    return 0;
}