#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, valItem;

    int cnt = 1;

    if(std::cin >> currItem)
    {
        while(std::cin >> valItem)
        {
            if(currItem.isbn() == valItem.isbn())
            {
                cnt++;
            } else {
                std::cout << currItem.isbn() << " occurs " << cnt << " times " << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        std::cout << currItem.isbn() << " occurs " << cnt << " times " << std::endl;
    }

    return 0;
}

