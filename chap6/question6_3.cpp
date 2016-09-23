#include <iostream>

int fact(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res = res*i;
    return res;
}

int main() {
    std::cout << fact(5) << std::endl;
    return 0;
}