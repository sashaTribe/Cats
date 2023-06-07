#ifndef CAT_H
#define CAT_H

#include <string>

class Cat {
public:
    Cat();
    Cat(const std::string& name);
    Cat(const std::string& name, unsigned int lives);
    ~Cat();

    const std::string& get_name() const;
    const unsigned int& get_lives() const;
    void set_name(const std::string& name);
    void set_lives(const unsigned int& lives);

private:
    std::string name;
    unsigned int lives;
};

#endif 