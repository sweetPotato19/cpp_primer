#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<int> v1;
    vector<int> v2(10);
    //vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<int> v6{10};
    vector<string> v7{10, "hi"};


    cout << "v1 size : "<< v1.size()
        <<"\nv1 value: ";
    for(auto i: v1)
        cout << i << ",";

    cout << "\n\nv2 size : "<< v2.size()
         <<"\nv2 value: ";
    for(auto i: v2)
        cout << i << ",";

    cout << "\n\nv4 size : "<< v4.size()
         <<"\nv3 value: ";
    for(auto i: v4)
        cout << i << ",";


    cout << "\n\nv5 size : "<< v5.size()
         <<"\nv5 value: ";
    for(auto i: v5)
        cout << i << ",";

    cout << "\n\nv6 size : "<< v6.size()
         <<"\nv6 value: ";
    for(auto i: v6)
        cout << i << ",";

    cout << "\n\nv7 size : "<< v7.size()
         <<"\nv7 value: ";
    for(auto i: v7)
        cout << i << ",";



    return 0;

}