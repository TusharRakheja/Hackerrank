#include <iostream>
#include <algorithm>

using namespace std;

bool empty(int *array, int size) {
    for(int i = 0; i < size; i++) {
        if(array[i] != 0)
            return false;
    }
    return true;
}

void process(int *array, int size) {
    for(int i = 0; i < size; i++) {
        if(array[i] < 0)
            array[i] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    int *array = new int[n];            // dynamic
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    stable_sort(array, array+n);
    int count, subtractor;
    while(!empty(array, n)) {
        count = 0;
        for(int i = 0; i < n; i++) {
            if(array[i]!=0) {
                subtractor = array[i];
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(array[i] >= subtractor) {
                count++;
                array[i] -= subtractor;
            }
        }
        cout << count << endl;
        process(array, n);
    }
    delete array;
    return 0;
}

