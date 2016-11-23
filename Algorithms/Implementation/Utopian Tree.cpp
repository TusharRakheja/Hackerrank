#include <iostream>
using namespace std;

int hancycles(int n)
{
    int h = 1;
    for(int i = 0; i<n; i++)
    {
        if(i%2 == 0)
            h = 2*h;
        else
            h = h + 1;
    }
    return h;
}

int main()
{
    int t;
    cin>>t;
    int array[10];
    for(int i = 0; i<t; i++)
    {
        cin>>array[i];
    }
    int outp[10];
    for(int j = 0; j<t ; j++)
    {
        outp[j] = hancycles(array[j]);
    }
    for(int g = 0; g<t; g++)
    {
        cout<<outp[g]<<endl;
    }
    return 0;
}
