//
// Created by joe on 9/28/19.
//

namespace test
{
    int age, height;

    class Person;

    void helloWorld(const char*);
}

test::int age = 10;
class test::Person
{
    int age;
    string name;
public:
    Person(int, string);
    void printPerson();
};

Person::Person(int age, string name)
{
    this.age = age;
    this.name = name;
}

void test::Person::printPerson()
{
    std::cout << name << std::endl;
}