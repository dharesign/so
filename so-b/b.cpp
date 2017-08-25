#include <b.h>
#include <lib.h>
#include <vector>

namespace B {

const std::type_info& get()
{
    return typeid(std::vector<int>);
}

void print()
{
    Lib::Printer::instance()->print("From B");
}

}  // close namespace
