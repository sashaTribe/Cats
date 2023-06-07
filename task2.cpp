#include <iostream>
#include "cat.h"

int main(int argc, char* argv[]) {
    // Create a cat named "Garfield" with 9 lives
    Cat a("Garfield");
    std::cout << a.get_name() << " has " << a.get_lives() << " lives." << std::endl;

    // Create a cat named "Mog" with 10 lives
    Cat b("Mog", 10);
    std::cout << b.get_name() << " has " << b.get_lives() << " lives." << std::endl;

    // Set the cat's lives to be 42 (should not change anything)
    b.set_lives(42);
    std::cout << b.get_name() << " has " << b.get_lives() << " lives." << std::endl;

    // Set the cat's name to "Prince"
    b.set_name("Prince");
    std::cout << b.get_name() << " has " << b.get_lives() << " lives." << std::endl;

    // Set the cat's lives to 8 (should succeed)
    b.set_lives(8);
    std::cout << b.get_name() << " has " << b.get_lives() << " lives." << std::endl;

    // Set the cat's lives to 0 (should change the name)
    b.set_lives(0);
    std::cout << b.get_name() << " has " << b.get_lives() << " lives." << std::endl;

    // Set the cat's lives to 0 again (should not change the name)
    b.set_lives(0);
    std::cout << b.get_name() << " has " << b.get_lives() << " lives." << std::endl;

    return 0;
}
