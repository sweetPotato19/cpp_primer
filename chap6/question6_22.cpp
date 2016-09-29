#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::string;
using std::begin;
using std::end;

int exchange(int*& i,  int*& j){
    auto a = i;
    i = j;
    j = a;

}


int main()
{
    int a = 1;
    int b = 2;
    auto c = &a;
    auto d = &b;
    exchange(c,d);

    cout << *c << " " << *d << endl;

    return 0;
}