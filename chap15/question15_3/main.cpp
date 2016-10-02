#include <iostream>
#include "Quote.h"

using namespace std;

double print_total(std::ostream &os,
        const Quote &item, size_t n){
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()
                   << " # sold: " <<"total due: "<< ret << endl;
}


int main() {


    return 0;
}



