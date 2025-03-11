// person.cpp
#include "person.h"

// 构造函数
Person::Person(const std::string& name, int age) : name(name), age(age) {}

// 设置名字
void Person::set_name(const std::string& name) {
    this->name = name;
}

// 获取名字
std::string Person::get_name() const {
    return name;
}

// 设置年龄
void Person::set_age(int age) {
    this->age = age;
}

// 获取年龄
int Person::get_age() const {
    return age;
}

// 打招呼
std::string Person::greet() const {
    return "Hello, my name is " + name + " and I am " + std::to_string(age) + " years old.";
}