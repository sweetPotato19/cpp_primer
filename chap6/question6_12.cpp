#include <iostream>

using std::cout;
using std::endl;

void reset(int &i,int &j ){
    int change = i;
    i = j;
    j = change;
}

int main() {

    int a = 1;
    int b = 2;
    reset(a,b);
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;


    return 0;
}