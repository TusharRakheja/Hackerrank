#include <iostream>
#include <algorithm>

using namespace std;

struct player_profile {
    int *knowledge;
};

int main()
{
    int n, m;
    cin >> n >> m;
    char *inter;
    player_profile *players = new player_profile[n];        // dynamic
    for(int i = 0; i < n; i++) {    
        inter = new char[m];                    
        players[i].knowledge = new int[m];
        for(int j = 0; j < m; j++) {
            cin >> inter[j];
            if(inter[j]=='1') 
                players[i].knowledge[j] = 1;
            else
                players[i].knowledge[j] = 0;
        }
        delete inter;
    }
    int *count_array = new int[(n*(n-1))/2];    // dynamic
    int count; int index = 0;
    for(int i = 0; i <n; i++)
        for(int j = i+1; j < n; j++) {
            count = 0;
            for(int g = 0; g < m; g++) 
                if(players[i].knowledge[g] + players[j].knowledge[g] > 0) 
                    count++;     
            count_array[index] = count;
            index++;
        }
    stable_sort(count_array, count_array + (n*(n-1))/2);
    cout << count_array[index-1];
    int n_times = 0;
    for(int i = index-1; i>=0; i--)
        if(count_array[index-1] == count_array[i])
            n_times++;
    cout << "\n" << n_times;
    delete count_array;
    delete players;
    return 0;
    
}
