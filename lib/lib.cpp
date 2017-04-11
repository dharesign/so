#include <lib.h>
#include <iostream>

namespace Lib {

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
