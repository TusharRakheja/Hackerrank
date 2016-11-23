#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;


int main() 
{
    char *string, temp;
    int cases, deletions = 0;
    cin >> cases;
    for(int i = 1; i <= cases; i++) {
        string = new char[100001];
        cin >> string;
        temp = string[0];
        for(int j = 1; j < strlen(string); j++) {
            if(string[j] == temp)
                deletions++;
            else
                temp = string[j];
        }
        cout << deletions << endl;
        deletions = 0;
        delete string;
    }
    return 0;
}
