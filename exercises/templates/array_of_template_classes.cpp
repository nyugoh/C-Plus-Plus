//
// Created by joe on 9/29/19.
//
#include <iostream>
#include "../include/array_of_template_classes.h"

int main()
{
    int arraySize;
    int ints[] = {10, 30, 2, 45, 78};
    double doubles[] = {10.345, 30.00012, 2.89343, 45.4353};
    char chars[] = {'J', 'o', 'e'};
    Book someBooks[2];
    someBooks[0].setBook("The Suble Art of Not Giving a Fuck", 22.45);
    someBooks[1].setBook("Unf*ck yourself", 15.55);

    Customer customers[4];
    customers[0].setCustomer("Jane", 10.5);
    customers[1].setCustomer("Doe", 1.55);
    customers[2].setCustomer("John", 5.45);
    customers[3].setCustomer("Miller", 0.95);

    arraySize = sizeof(ints)/ sizeof(ints[0]);
    Array<int> arrayOfInts(ints, arraySize);

    arraySize = sizeof(doubles)/ sizeof(doubles[0]);
    Array<double > arrayOfDoubles(doubles, arraySize);

    arraySize = sizeof(chars)/ sizeof(chars[0]);
    Array<char> arrayOfChars(chars, arraySize);

    arraySize = sizeof(someBooks)/sizeof(someBooks[0]);
    Array<Book> arrayOfBooks(someBooks, arraySize);

    arraySize = sizeof(customers)/sizeof(customers[0]);
    Array<Customer> arrayOfCustomers(customers, arraySize);

    arrayOfInts.showFirst();
    arrayOfInts.showList();

    arrayOfDoubles.showFirst();
    arrayOfDoubles.showList();

    arrayOfChars.showFirst();
    arrayOfChars.showList();

    arrayOfBooks.showFirst();
    arrayOfBooks.showList();

    arrayOfCustomers.showFirst();
    arrayOfCustomers.showList();

    return 0;
}