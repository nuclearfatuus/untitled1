#include <iostream>
int main() {
    float c = 0.4;
    std::cout << "c = " << c << '\n';
    std::cout << " адрес c = " << &c << '\n';
    int a = 7;
    int *b = &a;
    std::cout << "указатель b = " << b << '\n';
    std::cout << "a = " << a << '\n';
    std::cout << "адрес a = " << &a << '\n';
    float b = 0.4;
    std::cout << "b = " << b << '\n';
    std::cout << "адрес b = " << &b << '\n';
    std::cout << "*b = " << *b << '\n';
    *b+=5;
    std::cout << "*b = " << *b << '\n';
    std::cout << "a = " << a << '\n';
    b = (int *) &c;
    std::cout << "указатель b = " << b << '\n';
    *b =7;
    std::cout << "c = " << c << '\n';
    a = *((int *)&c);
    std::cout<<a<<'\n';
    return 0;
