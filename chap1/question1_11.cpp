#include <iostream>

int main() {

    int val_1 = 0, val_2 = 0;

    std::cout << "Please input two intergers" << std::endl;

    std::cin >> val_1 >> val_2;

    int a = 0, b = 0;

    if(val_1 == val_2)
    {
        std::cout << val_1;
    }
    else if (val_1 < val_2)
    {
        a = val_1;
        b = val_2;
    }
    else
    {
        a = val_2;
        b = val_1;

    }



    while (a <= b)
    {
        std::cout << a << std::endl;
        a++;
    }


    return 0;
}