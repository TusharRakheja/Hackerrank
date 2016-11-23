#include<iostream>

using namespace std;

int main()
{
    int n, t;
    cin>>n; cin>>t;
    int width[100000];
    int cases[1000][2];
    for(int i = 0; i<n; i++)
    {
        cin>>width[i];
    }
    for(int g = 0; g<t; g++)
    {
        cin>>cases[g][0]>>cases[g][1];
    }
    int aval;
    for(int y = 0; y<t; y++)
    {
        aval = 3;
        for(int d = cases[y][0]; d <= cases[y][1]; d++)
        {
            if(width[d]<aval)
                aval = width[d];
        }
        cout<<aval<<endl;
    }
    return 0;
}


