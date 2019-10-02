//
// Created by joe on 9/20/19.
//
#include <iostream>
#include "joe.h"
using namespace std;

Student::Student(int age, int weight, int height, string name) {
    this->age = age;
    this->weight = weight;
    this->height = height;
    this-> name = name;
}

int Student::howOld() {
    return this->age;
}

double Student::calculateBMI() {
    return ((this->height* this->age)/ this->weight);
}

void Student::walk() {
    std::cout << "Check me out, am walking." <<std::endl;
}

void Student::grow(int height, int weight) {
    this->height += height;
    this->weight += weight;
}

void Student::display() {
    cout << "Hello guys this is me\n";
    cout << "Name :: " << this->name << endl;
    cout << "Age :: " << this->age << endl;
    cout << "Height :: " << this->height << endl;
    cout << "Weight :: " << this->weight << endl;
    cout << "See you later...." << endl;
}

void displayFromFriend(Student student) {
    cout << "From friend function" << endl;
    cout << "Name ::" << student.name << endl;
    cout << "Age ::" << student.age << endl;
    student.walk();
}