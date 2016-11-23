#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char *w; bool cbr;
    int k; char *wsub; char temp;
    int length, length2;
    bool noanswer;
    int t;
    cin >> t;
    while(t--) {
        w = new char[101];
        noanswer = true;
        cin >> w;
        cbr = false;
        length = strlen(w);
        for(k = length-2; k >= 0 && !cbr; k--) {
            for(int j = k+1; j < length; j++) {
                if(w[j] > w[k]) {
                    cbr = true;
                    length2 = length - k - 1;
                    wsub = new char[length2];
                    int i = 0;
                    for(int g = k+1; g < length; g++) {
                        wsub[i] = w[g];
                        i++;
                    }
                    noanswer = false;
                    break;
                }
            }
        }
        if(noanswer) {
            cout << "no answer" << endl;
            continue;
        }
        stable_sort(wsub, wsub + length2);
        for(int i = 0; i < length2; i++) {
            if(wsub[i] > w[k+1]) {
                temp = wsub[i];
                wsub[i] = w[k+1];
                w[k+1] = temp;
                break;
            }
        }
        stable_sort(wsub, wsub + length2);
        for(int i = 0; i < length2; i++) {
            w[k+2+i] = wsub[i];
        }
        cout << w << endl;
        delete w; delete wsub;
    }
    return 0;
}
