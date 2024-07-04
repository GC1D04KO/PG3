#include <iostream>


class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal sound" << std::endl;
    }
};


class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    
    Animal* animals[2] = { new Dog(), new Cat() };

    
    animals[0]->makeSound();
    animals[1]->makeSound();

 
    delete animals[0];
    delete animals[1];

    return 0;
}