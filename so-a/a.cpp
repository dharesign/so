#include <a.h>
#include <lib.h>

namespace A {

void print()
{
    Lib::Printer::instance()->print("From A");
}

}  // close namespace
