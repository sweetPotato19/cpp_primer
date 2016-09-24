#include <iostream>
using std::cout;
using std::endl;
using std::string;

void reset(int &i){
    i = 0;
}



int main() {
    int a = 10;
    cout << a << endl;

    reset(a);
    cout << a << endl;

    return 0;
}