#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    long array[33];
    for(long i = 0; i <= 32; i++)    {
        array[i] = pow(2,i);
        //cout << array[i] << " ";
    }
    int testcases; 
    cin >> testcases;
    long list[101];
    for(int i = 0; i < testcases; i++)  {
        cin >> list[i];
        //cout << list[i] << endl;
    }
    //cout << endl;
    char answerlist[101][34];
    for(long i = 0; i < testcases; i++) {
        for(long j = 32; j >=0; j--) {
            if(list[i] >= array[j])  {
                answerlist[i][j] = '1';
                list[i] -= array[j];
            }
            else
                answerlist[i][j] = '0';
        }
        answerlist[i][33] = '\0';
        //cout << answerlist[i] << endl;
        unsigned int sum = 0;
        for(int g = 0; g <= 32; g++)    {
            if(answerlist[i][g] == '0')
                sum += array[g];
        }
        cout << sum << endl;
    }    
    return 0;
}


