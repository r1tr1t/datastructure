#include "Object.hxx"

int main ()
{
    // : Instantiate a new instance of "Object"
    Object o {};

    // : Print the memory address of object "o"
    std::cout << &o << "\n";

    return 0;
}

//

void a();
void b();

void a() {
    b();
}
void b() {

}
