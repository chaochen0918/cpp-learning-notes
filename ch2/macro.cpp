#include <iostream>
#define IS_COMPILE
int main() {
#ifdef IS_COMPILE
    std::cout << "compile this line of code" << '\n';
#endif

#ifdef NOT_COMPILE
    std::cout << "not compiling this line" << '\n';
#endif

#ifndef COMPILE 
    std::cout << "compile this line of code" << '\n';
#endif

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    /* Some
     * multi-line
     * comment here
     */
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}