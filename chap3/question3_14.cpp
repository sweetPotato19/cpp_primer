#include <iostream>
//#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;

int main() {

    int number;
    vector<int> vec;
    while(cin>>number){
        vec.push_back(number);
    }

    return 0;

}