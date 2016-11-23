#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    char * number;
    long num;
    int t, count;
    cin >> t;
    for(int i = 0; i < t; i++) {
        number = new char[12];      // dynamic
        count = 0;
        cin >> number;
        strcat(number,"\0");
        num = atoi(number);
        for(int j = 0; j < strlen(number); j++) {
            if(number[j]-'0' != 0) {
                if(num%(number[j]-'0')==0) {
                    count++;
                }
            }
        }
        cout << count << endl;
        delete number;
    }
    return 0;
}
