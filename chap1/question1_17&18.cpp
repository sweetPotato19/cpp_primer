#include <iostream>
int main (){
    //1.17 What happens in the program presented in this section if the
    //input values are all equal? What if there are no duplicated values?
    //Ans: input: 1 1 1 1 1 1 1 1 1
    //     output: 1 occurs 9 times
    //     input: 1 2 3 4 5 6 7
    //     output:1 occurs 1 times
    //            2 occurs 1 times
    //            3 occurs 1 times
    //            4 occurs 1 times
    //            5 occurs 1 times
    //            6 occurs 1 times
    //            7 occurs 1 times

    //1.18
    //      input : 1 1
    //      output:1 occurs 2 times
    //     input: 1 2 3 4 5 6 7
    //     output:1 occurs 1 times
    //            2 occurs 1 times
    //            3 occurs 1 times
    //            4 occurs 1 times
    //            5 occurs 1 times
    //            6 occurs 1 times
    //            7 occurs 1 times
    


    int currVal = 0, val = 0;
    if(std::cin >> currVal){
        int cnt = 1;
        while (std::cin >> val){
            if(val == currVal){
                ++cnt;
            }
            else{
                std::cout << currVal << " occurs "
                                     <<cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                             << cnt << " times" << std::endl;
    }
    return 0;
}