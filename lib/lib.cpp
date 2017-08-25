#include <lib.h>
#include <iostream>
#include <typeindex>

namespace Lib {

void compare(const std::type_info& a, const std::type_info& b)
{
    std::cout << "a: 0x" << std::hex << &a << ", " << a.name() << ", " << a.hash_code() << "\n";
    std::cout << "b: 0x" << std::hex << &b << ", " << b.name() << ", " << b.hash_code() << "\n";
    std::cout <<    "ptr = " << (&a == &b)
              <<  ", obj = " << (a == b)
              << ", hash = " << (a.hash_code() == b.hash_code())
              <<  ", idx = " << (std::type_index(a) == std::type_index(b))
              << "\n";
}

Printer *Printer::instance()
{
    static Printer *s_instance_p = 0;

    if (0 == s_instance_p) {
        static Printer instance;
        s_instance_p = &instance;
    }

    return s_instance_p;
}

void Printer::print(const char *message)
{
    std::cout << "[" << this << "]: " << message << "\n";
}

}  // close namespace
