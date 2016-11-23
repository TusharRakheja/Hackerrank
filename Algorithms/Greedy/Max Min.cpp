#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() 
{
    int N, K;
    cin >> N >> K;
    long long int *array = new long long int[N];
    for(int i = 1; i<=N; i++)  {
        cin >> array[i-1];
    }
    stable_sort(array, array+N);
    long long int *range = new long long int[N-K]; 
    for(int i = 0; i < N-K; i++)  {                    //If it doesn't work, try changing <= to <
        range[i] = array[i+K-1] - array[i];
    }
    int min = range[0];
    for(int i = 0; i < N-K; i++)  {
        if(range[i] < min)
            min = range[i];
    }
    cout << min << endl;
    delete array; 
    delete range;
    return 0;
} 
    
