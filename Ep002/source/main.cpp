#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a+b;
}


int main(){

    std::cout << "Hello World" << std::endl;
    std::cout << "************************************************************" << std::endl;
    std::cout << "The sum is " << add(3, 7) << std::endl;

    
    std::cout << "Program well done" << std::endl;
    return 0;
}
