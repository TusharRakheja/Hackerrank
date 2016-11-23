#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

struct letterCount {
    int *array;
};

int main() {
    int n;
    cin >> n;
    letterCount *stone = new letterCount[n];    // dyanmic
    char *composition;                          // dynamic
    for(int i = 0; i < n; i++) {
        stone[i].array = new int[125];
        composition = new char[100];
        for(int j = 97; j <=122; j++) {
            stone[i].array[j] = 0;
        }
        cin >> composition;
        for(int j = 0; j < strlen(composition); j++) {
            stone[i].array[composition[j]]++;
        }
        delete composition;
    }
    int count = 0; bool trip;
    for(int i = 97; i <= 122; i++) {
        trip = false;
        for(int j = 0; j < n; j++) {
            if(stone[j].array[i] == 0) {
                trip = true; break;
            }
        }
        if(!trip) {
            count++;
        }
    }
    cout << count << endl;
    delete stone;
    return 0;
}
