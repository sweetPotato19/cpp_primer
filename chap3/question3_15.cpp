#include <iostream>
//#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;

int main() {

    string str;
    vector<string> vec;
    while(cin>>str){
        vec.push_back(str);
    }

    return 0;

}