#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ispalindrome(char * string)
{
    int g; int j = strlen(string) - 1;
    g = j;
    for(int i = 0; i <= j/2; i++)   {
        if(string[i] != string[g])
            return 0;
        g--;
    }
    return 1;
}

int main() 
{
    int cases;
    cin >> cases;
    char * string; 
    int j;
    int switches = 0;
    char temp;
    for(int i = 1; i<= cases; i++)  {
        string = new char[10001];
        cin >> string;
        j = strlen(string) - 1;
        for(int g = 0; !ispalindrome(string) && g <= j; g++)  {
            if(string[g] > string[j - g])  
                switches += (string[g]) - (string[j - g]);
            else
                switches += string[j - g] - string[g];
        }
        cout << switches/2 << endl;
        delete string;
        switches = 0;
    }
    return 0;
}
