//
// Created by joe on 9/21/19.
//

#include <iostream>
#include "joe.h"
using namespace std;


Sale::Sale(int num, double amount) {
    saleNum = num;
    saleAmount = amount;
}

void Sale::showSale() {
    cout << "Sale No." << saleNum << "\nTotal amount :" << saleAmount << endl;
}

Sale Sale::operator+(Sale anotherSale) {
    Sale tempSale(9999);
    tempSale.saleAmount = saleAmount + anotherSale.saleAmount;
    return tempSale;
}

