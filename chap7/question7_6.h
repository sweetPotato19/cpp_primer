//
// Created by Yuchen on 2016-09-28.
//

#ifndef QUESTION2_SALES_DATA_H
#define QUESTION2_SALES_DATA_H

#include <iostream>
#include <string>

using namespace std;

struct Sales_data{
    std::string isbn() const  { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;


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



Sales_data& Sales_data::combine(const Sales_data & book2) {
    units_sold+=book2.units_sold;
    revenue+=book2.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    return revenue/units_sold;
}

istream &read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price*item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn()<< " " << item.units_sold << " "
       <<item.revenue << " " << item.avg_price();
    return os;
}



#endif //QUESTION2_SALES_DATA_H
