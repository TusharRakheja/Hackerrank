#include <cmath>
#include <iostream>

using namespace std;

struct matrix {
    char *col;
};

int main() {
    string s;
    cin >> s;
    int rows = 800, columns = 800;
    for (int i = floor(sqrt(s.size())); i <= ceil(sqrt(s.size())); i++) {
        for (int j = i; j <= ceil(sqrt(s.size())); j++) {
            if (i*j >= s.size() && i*j < rows*columns) {
                rows = i; columns = j;
            }
        }
    }
    matrix *row = new matrix[rows];
    for (int i = 0; i < rows; i++) {
        row[i].col = new char[columns] {0};
    }
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            row[i].col[j] = s.at(k++);
            if (k >= s.size()) goto outOfLoop;
        }
    } outOfLoop:;
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            if (row[i].col[j] != '\0')
                cout << row[i].col[j];
        }
        cout << " ";
    }
    return 0;
}