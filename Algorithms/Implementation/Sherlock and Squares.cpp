#include <cmath>
#include <iostream>

using namespace std;

bool isSquare(long n) 
{
    long a = pow(n,0.5);
    return n == a*a;
}

int main() 
{
    long a, b, t;
    cin >> t;
    int count = 0;
    for(int i = 1; i <= t; i++) {
        count = 0;
        cin >> a >> b;
        for(long j = 0; j <= b-a; j++) {
            if(isSquare(a+j)) {
                count++;
                j += 2*pow(a+j,0.5);
            }
        }
        cout << count << endl;
    }
}

