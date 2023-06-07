#include <iostream>
#include <string>
#include <sstream>
#include "cat.h"

int main(int argc, char* argv[]) {
    const int numCats = (argc-1) / 2 + (argc-1) % 2; // Calculate the number of cats to parse
    std::cout <<  "Allocating clowder of size " << numCats << std::endl;
    Cat * clowder = new Cat[numCats]; // Dynamically allocate array of Cat objects
    
/*     for (int i = 1; i < argc; i+2) {
        std::string name;
        unsigned int lives;
        name = argv[i];
        std::cout << name <<std::endl;
        
        if (i + 1 < argc) {
            lives = std::stoi(argv[i+1]);
        } else {
            lives = 9;
        }
        std::cout << lives <<std::endl;

        clowder[i] = Cat(name, lives); // Assign values using move-assignment operator
    } */

    unsigned int j = 0;
    for(int i = 1; i < argc; i++) {
        const std::string& name = argv[i];
        
        try{
            const unsigned int& lives = std::stoi(argv[i+1]);
            clowder[j] = Cat(name,lives);
            clowder[j].set_lives(lives);
            clowder[j].set_name(name);
            i++;
        } catch(...) {
            clowder[j] = Cat(name);
        }
        j++;
        
    }

    for (int i = 0; i < numCats; ++i) {
        std::cout << clowder[i].get_name() << " has " << clowder[i].get_lives() << " lives." << std::endl;
    }

    delete[] clowder; // Deallocate the array of Cat objects

    return 0;
}
