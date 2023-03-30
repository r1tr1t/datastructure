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

// declare function a
void a();
// declare function b
void b();

// define function a
void a() {
    b();
}
// define function b
void b() {

}
