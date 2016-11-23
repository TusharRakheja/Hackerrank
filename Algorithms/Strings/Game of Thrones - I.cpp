#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
   string *a = new string;
   cin >> *a;
   int howbig = a->size();
   char *arr = new char[howbig+1];
   strcpy(arr, a->c_str());
   delete a;
   int *lettercount = new int[26];
   for(int j = 0; j <= 25; j++)
       lettercount[j] = 0;
   for(int i = 0; i < howbig; i++)
       lettercount[arr[i] - 97]++;
   int count = 0;        
   bool answer = true;
   if(howbig % 2 == 0) {
       for(int i = 0; i < 26; i++)
           if(lettercount[i] % 2 != 0)
                answer = false;
       if(answer == true)
           cout << "YES";
       else cout << "NO";
   }
   else {
       for(int i = 0; i < 26; i++)
           if(lettercount[i] % 2 != 0)
                count++;
       if(count == 1)
           cout << "YES";
       else cout << "NO";
   }
   delete arr;
   delete lettercount;
   return 0;
}
