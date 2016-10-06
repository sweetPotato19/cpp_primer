//
// Created by Yuchen on 2016-10-01.
//

#ifndef QUOTE_BULK_QUOTE_H
#define QUOTE_BULK_QUOTE_H

#include "Quote.h"

class Bulk_quote : public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book , double p, std::size_t qty, double disc):
               Quote(book,p),min_qty(qty),discount(disc){ }

    double net_price(std::size_t) const override ;

private:
    std::size_t min_qty = 0;
    double discount = 0.0;

};




#endif //QUOTE_BULK_QUOTE_H
