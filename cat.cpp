#include "cat.h"
#include <iostream>

// Default constructor
Cat::Cat()
{
    name = "Tom";
    lives = 9;
    std::cout << "Default constructor called..." << std::endl;
}

// Constructor 1
Cat::Cat(const std::string& name) {
    this->name = name;
    lives = 9;
    std::cout << "Constructor called with name..." << std::endl;
}

// Constructor 2
Cat::Cat(const std::string& name, unsigned int lives) {
    this->name = name;
    this->lives = lives;
    std::cout << "Constructor called with name and lives..."  << std::endl;
}

// Destructor
Cat::~Cat() {
    std::cout << "Destructor called..." << std::endl;
}

// Getter for name
const std::string& Cat::get_name() const {
    return name;
}

// Getter for lives
const unsigned int& Cat::get_lives() const {
    return lives;
}

// Setter for name
void Cat::set_name(const std::string& name) {
    this->name = name;
    std::cout << "set_name called..." << std::endl;
}

// Setter for lives
void Cat::set_lives(const unsigned int& lives) {
    std::cout << "set_lives called..." << std::endl;
    if (lives >= this->lives) {
        return;
    }
    this->lives = lives;
    if (lives == 0 && name != "The Cat formerly known as " + name) {
        std::string former_name = "The Cat formerly known as " + name;
        set_name(former_name);
    }
}
