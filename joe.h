//
// Created by joe on 9/20/19.
//
#include <iostream>
#include <cstring>

using namespace std;

#ifndef JOE_JOE_H
#define JOE_JOE_H

class Student {
    friend void displayFromFriend(Student);
private:
    int age, height, weight;
    string name;

public:
    Student(int, int, int, string);
    void grow(int,  int);
    void walk();
    int howOld();
    double calculateBMI();
    void display();
};

class Sale {
private:
    int saleNum;
    double saleAmount;
public:
    Sale(int = 0, double = 0.0);
    void showSale();
    Sale operator+(Sale);
};

#endif //JOE_JOE_H
