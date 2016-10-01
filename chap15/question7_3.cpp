#include <iostream>
#include <map>
#include "Quote.h"


double print_total( std::ostream& os,const Quote& item, size_t n);
int main() {


    return 0;
}


double print_total(std::ostream& os,const Quote& item, size_t n){
        double total = item.net_price(n);

    os<<"\nISBN: "<<item.isbn()<<" \nnumber: " << n << "Total price: " << total;
        return total;
}