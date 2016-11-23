#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    long total = 0, a, b, k;
    for(int i = 1; i <= m; i++) {
        cin >> a >> b >> k;
        total += (b-a+1)*k;
    }
    cout << total/n;
    return 0;
}
