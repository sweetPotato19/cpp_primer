//
// Created by Yuchen on 2016-09-28.
//

#ifndef QUESTION3_PERSON_H
#define QUESTION3_PERSON_H

#include <iostream>
#include <string>

using namespace std;
using std::string;

struct Person{

    std::string getFirstName() const {return firstName;}
    std::string getLastName() const { return lastName;}
    std::string getAddress() const { return address;}


    string firstName;
    string lastName;
    string address;
};

istream &read(istream &is, Person &p){
    is >> p.firstName >> p.lastName >> p.address;
    return is;
}

ostream &print(ostream &os, const Person &p){
    os << p.firstName << " " << p.lastName << " "<< p.address;
    return os;
}



#endif //QUESTION3_PERSON_H
