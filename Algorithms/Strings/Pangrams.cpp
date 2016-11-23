#include <iostream>
#include <cstring>

using namespace std;

struct letterCount {
    int count; 
    char letter;
};

int main() {
    char *s = new char[1000];
    cin.getline(s, 1000);
    //cout << s << endl;
    letterCount *array = new letterCount[100];
    for(int i = 65; i <= 90; i++) {
        array[i].count = 0;
    }
    for(int i = 0; i < strlen(s); i++) {
        s[i] = toupper(s[i]);
        if(s[i] >= 65 && s[i] <= 90) 
            array[s[i]].count++;
    }
    bool answer = true;
    for(int i = 65; i <= 90; i++) {
        if(array[i].count == 0) {
            answer = false; break;
        }
    }
    if(answer == false)
        cout << "not pangram";
    else 
        cout << "pangram";
    delete s; delete array;
    return 0;
}
