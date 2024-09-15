
#include <iostream>
#include <string>

// Encapsulation
class Animal {
private:
    std::string name;
    int age;

public:
    Animal(std::string n, int a) : name(n), age(a) {}
    std::string getName() {
        return name;
    }
    void setName(std::string n) {
        name = n;
    }
    int getAge() {
        return age;
    }
    void setAge(int a) {
        age = a;
    }
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Inheritance
class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(std::string n, int a, std::string b) : Animal(n, a), breed(b) {}
    std::string getBreed() {
        return breed;
    }
    void setBreed(std::string b) {
        breed = b;
    }
    void display() {
        Animal::display();
        std::cout << "Breed: " << breed << std::endl;
    }
};

// Polymorphism
class Cat : public Animal {
public:
    Cat(std::string n, int a) : Animal(n, a) {}
    void display() {
        std::cout << "This is a cat." << std::endl;
        Animal::display();
    }
};

// Abstraction
class AbstractAnimal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class ConcreteDog : public AbstractAnimal {
public:
    void sound() {
        std::cout << "Woof Woof" << std::endl;
    }
};

class ConcreteCat : public AbstractAnimal {
public:
    void sound() {
        std::cout << "Meow Meow" << std::endl;
    }
};
int main() {
    Dog dog("SPY", 3, "LABRADOR");
    dog.display();

    Cat cat("KITTU", 1);
    cat.display();

    ConcreteDog concreteDog;
    ConcreteCat concreteCat;

    AbstractAnimal* animals[] = { &concreteDog, &concreteCat };
    for (AbstractAnimal* animal : animals) {
        animal->sound();
    }

    return 0;
}
