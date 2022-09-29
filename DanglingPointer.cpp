#include <iostream>
#include <string>

std::string func1()
{
    return "func1";
}

void func2(const char* s)
{
    std::cout << s << std::endl;
}

void func3()
{
    func2(func1().c_str());
    auto ptr = func1().c_str();
    func2(ptr);
}

int main(int argc, char* argv[])
{
    func3();
    return 0;
}