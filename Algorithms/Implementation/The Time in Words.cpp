#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string tname[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", 
                 "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

string name(int num) {
    string mins = " minutes";
    string twenty = "twenty ";
    string quarter = "quarter";
    if (num == 15) return quarter;
    if (num <= 20) 
        return tname[num - 1] + mins;
    else 
        return twenty + tname[num - 20 - 1] + mins;
}

string timew(int hrs, int mins) {
    string to = " to ", past = " past ";
    if (mins > 30) return name(60 - mins) + to + tname[hrs];
    else return name(mins) + past + tname[hrs - 1];
}


int main() {
    int h;
    cin >> h;
    int m;
    cin >> m;
    if (m == 0) { cout << tname[h - 1] << " o' clock"; }
    else if (m == 30) { cout << "half past " << tname[h - 1]; }
    else cout << timew(h, m);
    return 0;
}