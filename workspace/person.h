// person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& name, int age);
    void set_name(const std::string& name);
    std::string get_name() const;
    void set_age(int age);
    int get_age() const;
    std::string greet() const;

private:
    std::string name;
    int age;
};

#endif // PERSON_H