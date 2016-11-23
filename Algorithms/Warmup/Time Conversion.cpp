#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

int main() 
{
    string time;
    cin >> time;
    string mTime;
    string mhrs = time.substr(0, 2);
    string ampm = time.substr(time.size()-2, 2);
    int hrs = stoi(mhrs);
    //cout << "AM/PM: " << ampm << endl;
    if (hrs == 12 && ampm == "PM");
    else if (hrs == 12 && ampm == "AM")
        hrs = (hrs + 12) % 24;
    else if (ampm == "PM")
        hrs = (hrs + 12) % 24;
    if (hrs < 9) cout << "0";
    cout << hrs;
    cout << time.substr(time.find(":"), time.size() - 4);
    return 0;
}