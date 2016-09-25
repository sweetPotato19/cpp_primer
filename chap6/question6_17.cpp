#include <iostream>

using std::cout;
using std::endl;
using std::string;

bool findCapital(string const& str){
    for(auto a:str){
        if(isupper(a))
            return true;
        return false;
    }
}

void toSmall(string& str){
    for(auto& c : str)
           c = tolower(c);
}



int main() {
    string tragedy("Tomorrow is Monday");
    cout << (findCapital(tragedy))?(cout<<"true\n"):(cout<<"false\n") << endl;
    toSmall(tragedy);
    cout << tragedy<< endl;





    return 0;
}