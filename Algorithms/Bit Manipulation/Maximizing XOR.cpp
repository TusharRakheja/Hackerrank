#include <iostream>
#include <cmath>

using namespace std;

int performXor(int a_bin[10], int b_bin[10])    
{
    long array[10];
    for(int i = 0; i <= 9; i++)    {
        array[i] = pow(2,i);
        //cout << array[i] << " ";
    }
    //cout << endl;
    int answer_bin[10];
    for(int i = 0; i <= 9; i++) {
        if(a_bin[i] + b_bin[i] == 1)
            answer_bin[i] = 1;
        else
            answer_bin[i] = 0;
    }
    for(int i = 0; i<=9; i++) {
        //cout << answer_bin[i] << " ";
    }
    //cout << endl;
    int answer = 0;
    for(int i = 0; i <=9; i++)  {
        if(answer_bin[i] == 1)
            answer += array[i];
    }
    return answer;
}

int * convertToBinary(int a)
{
    long array[10];
    int max = 0, temp = 0;
    for(int i = 0; i <= 9; i++)    {
        array[i] = pow(2,i);
    }
    int * a_bin = new int[10];
    for(int i = 9; i >=0; i--) {
        if(a >= array[i])   {
            a_bin[i] = 1;
            a -= array[i];
        }
        else
            a_bin[i] = 0;
    }
    return a_bin;
}

int maxXor(int l, int r) 
{
    int a, b, *a_bin, *b_bin; 
    int temp = 0, max = 0;
    for(a = l; a <= r; a++)  {
        a_bin = convertToBinary(a);
        for(b = a; b <= r; b++) {
            b_bin = convertToBinary(b);
            temp = performXor(a_bin, b_bin);
            if(temp > max)
                max = temp;
            delete b_bin;
        }
        delete a_bin;
    }
    return max;
}

int main() 
{
    int l, r;
    cin >> l; cin >> r;
    int answer = maxXor(l,r);
    cout << answer;
    return 0;
}
