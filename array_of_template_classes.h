//
// Created by joe on 9/29/19.
//
#include <string>
#include <cstring>

#ifndef JOE_ARRAY_OF_TEMPLATE_CLASSES_H
#define JOE_ARRAY_OF_TEMPLATE_CLASSES_H

template<class T>
class Array {
private:
    T *data;
    int size;
public:
    Array(T *, int);

    void showList();

    void showFirst();
};

template<class T>
Array<T>::Array(T *list, int size) {
    data = list;
    this->size = size;
}

template<class T>
void Array<T>::showFirst() {
    std::cout << "\nFirst element:: " << *data << std::endl;
}


template<class T>
void Array<T>::showList() {
    for (int i = 0; i < size; ++i)
        std::cout << *(data + i) << " ";
    std::cout << "\n--------------------------------" << std::endl;
}

class Book {
    friend ostream& operator<<(ostream&, Book);
    string title;
    double price;
public:
    void setBook(string, double);
};

void Book::setBook(string name, double amount) {
    title = name;
    price = amount;
}

ostream& operator<<(ostream& out, Book book) {
    out << "Title:: " << book.title << " Price:: " << book.price << std::endl;
    return out;
}

class Customer {
    friend ostream&operator<<(ostream&, Customer);
    string name;
    double balanceAmount;
public:
    void setCustomer(string, double);
};

void Customer::setCustomer(string custName, double bal) {
    name = custName;
    balanceAmount = bal;
}

ostream & operator<<(ostream &out, Customer cust) {
    out << "Customer:: " << cust.name << " has a balance of :: " << cust.balanceAmount << std::endl;
    return out;
}

#endif //JOE_ARRAY_OF_TEMPLATE_CLASSES_H
