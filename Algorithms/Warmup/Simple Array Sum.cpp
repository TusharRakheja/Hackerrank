#include <iostream>

int main() {
    int n, k, sum = 0; 
    std::cin>>n;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        sum += k;
    }
    std::cout << sum << std::endl;
    return 0;
}
