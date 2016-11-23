#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    int *letterCount1 = new int[125], *letterCount2 = new int[125];
    char *s1 = new char[10000], *s2 = new char[10000], *s = new char[10000];
    while(t) {
        cin >> s;
        int len = strlen(s);
        int difference = 0;
        if(strlen(s)%2 != 0) {
            cout << "-1" << endl;
            goto jump;
        }
        
        for(int i = 97; i <= 122; i++) {
            letterCount1[i] = letterCount2[i] = 0;
        }
        for(int i = 0; i < (len/2); i++) {
            s1[i] = s[i];
            letterCount1[s1[i]]++;
        }
        for(int i = (len/2); i < len; i++) {
            s2[i-len/2] = s[i];
            letterCount2[s2[i-len/2]]++;
        }
        
        for(int i = 97; i <= 122; i++) {
            difference += abs(letterCount1[i] - letterCount2[i]);
        }
        cout << difference/2 << endl;
jump:   t--;    
    }
    return 0;
}
