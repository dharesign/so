#include <typeinfo>

namespace Lib {

void compare(const std::type_info& a, const std::type_info& b);

class Printer {
  public:
    static Printer *instance();

    void print(const char *msg);
};

}  // close namespace
