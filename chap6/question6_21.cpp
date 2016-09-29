#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::string;
using std::begin;
using std::end;

int find_larger(const int i, const int *j){
    return (i>*j)?i:*j;
}


int main()
{
    int a = 1;
    int b = 2;

    cout << find_larger(a,&b);

    return 0;
}