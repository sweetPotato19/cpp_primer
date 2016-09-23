
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::cerr;

struct  Sales_data{
    string bookNo;
    unsigned unit_sold;
    double revenue = 0;
};

int main()
{

    Sales_data total;
    if(cin >> total.bookNo >> total.unit_sold >>total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.unit_sold >> trans.revenue){
            if (total.bookNo == trans.bookNo){
                total.unit_sold+=trans.unit_sold;
                total.revenue+=trans.revenue;
            } else{
                cout << total.bookNo << " " <<total.unit_sold<< " " << total.revenue <<endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;
    } else{
        cerr << "  No data?! "<<endl;
    }
    return 0;
}