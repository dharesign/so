#include <b.h>
#include <lib.h>

namespace B {

void print()
{
    Lib::Printer::instance()->print("From B");
}

}  // close namespace
