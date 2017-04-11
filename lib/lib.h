namespace Lib {

class Printer {
  public:
    static Printer *instance();

    void print(const char *msg);
};

}  // close namespace
