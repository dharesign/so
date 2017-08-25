#include <a.h>
#include <lib.h>
#include <vector>

namespace A {

const std::type_info& get()
{
    return typeid(std::vector<int>);
}

void print()
{
    Lib::Printer::instance()->print("From A");
}

}  // close namespace
