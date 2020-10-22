#include "ksmemory.hpp"
#include <memory>

#include <iostream>

int main(){
    std::unique_ptr<int> ptr1();
    std::unique_ptr<int> ptr2(new int{5});

    ks::unique_ptr<int> ks1(new int{3});
    ks::unique_ptr<int> ks2{new int{6}};

    ks::unique_ptr<int> asd{std::move(ks2)};



    std::cout << *ptr2 ;
    

    return 0;
}