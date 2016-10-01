//
// Created by Yuchen on 2016-09-28.
//

#ifndef QUESTION2_SALES_DATA_H
#define QUESTION2_SALES_DATA_H

#include <iostream>
#include <string>

using namespace std;

class Sales_data{
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);
    friend ostream &print(ostream &, const Sales_data &);

        public:
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p):
                        bookNo(s),units_sold(n),revenue(p*n){ }
    Sales_data(std::istream &);


    std::string isbn() const  { return bookNo; }
    Sales_data& combine(const Sales_data&);

private:
    inline double avg_price() const;


    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.units_sold += rhs.units_sold;
    sum.revenue+=rhs.units_sold;
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}


Sales_data& Sales_data::combine(const Sales_data & book2) {
    units_sold+=book2.units_sold;
    revenue+=book2.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    return revenue/units_sold;
}



ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn()<< " " << item.units_sold << " "
       <<item.revenue << " " << item.avg_price()<<endl;
    return os;
}



#endif //QUESTION2_SALES_DATA_H
