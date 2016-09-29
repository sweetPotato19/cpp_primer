//
// Created by Yuchen on 2016-09-28.
//

#ifndef QUESTION3_PERSON_H
#define QUESTION3_PERSON_H

#include <iostream>
#include <string>

using namespace std;
using std::string;

struct Person;
std::istream &read(std::istream&, Person&);

struct Person{
    Person() = default;
    Person(const std::string &s1,const std::string &s2,const std::string &s3):
        firstName(s1),lastName(s2),address(s3){ }
    Person(istream &is){ read(is,*this);}

    std::string getFirstName() const {return firstName;}
    std::string getLastName() const { return lastName;}
    std::string getAddress() const { return address;}


    string firstName;
    string lastName;
    string address;
};

std::istream &read(std::istream &is, Person &person){
    is >> person.firstName >> person.lastName >> person.address;
    return is;
}

ostream &print(ostream &os, const Person &p){
    os << p.firstName << " " << p.lastName << " "<< p.address;
    return os;
}



#endif //QUESTION3_PERSON_H
