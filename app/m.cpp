#include <a.h>
#include <b.h>
#include <lib.h>

int main()
{
    A::print();
    B::print();

    Lib::compare(A::get(), B::get());
}
