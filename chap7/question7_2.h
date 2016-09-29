//
// Created by Yuchen on 2016-09-28.
//

#ifndef QUESTION2_SALES_DATA_H
#define QUESTION2_SALES_DATA_H

#include <string>
struct Sales_data{
    std::string isbn(){ return bookNo; }
    Sales_data& combine(const Sales_data&)


    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data & book2) {
    units_sold+=book2.units_sold;
    revenue+=book2.revenue;
    return *this;

}



#endif //QUESTION2_SALES_DATA_H
