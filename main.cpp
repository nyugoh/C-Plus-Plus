#include <iostream>
#include "joe.h"
#include "classes.cpp"
#include "overloading.cpp"
#include "template.cpp"
#include "overloading2.h"
#include "overloading2.cpp"
#include "template_classes.cpp"
using namespace std;

int main() {

    Number<int> an_int(10);
    Number<double> adouble(10.6);
    Number<char> intaschar(65);
    Number<int> charasint('K');

    an_int.displayNumber();
    adouble.displayNumber();
    intaschar.displayNumber();
    charasint.displayNumber();


/*


    cout << "Double 2" << doubleValue<int>(2) << endl;
    cout << "Double 2" << doubleValue<int>(20.2) << endl;
    cout << "Double 2" << doubleValue<int, int>(20.2) << endl;

    int a = 9;
    float b= 7.4;
    double c = 3.12345;
    char d = 'J';
    Store store("Que Base", "Nairobi", 1921903);

    repeatValue(a, 5);
    repeatValue(b, 6);
    repeatValue(c, 4);
    repeatValue(d, 3);
    repeatValue(store, 3);


    string name;
    int age, weight, height;

    PhoneCall call(10);
    PhoneCall previousCall(40);

    cout << "10 vs 20 ::" << findLargest(10, 20) << endl;
    cout << "12.5 vs 8.5 ::" << findLargest(12.5, 8.5) << endl;
    cout << "Current vs Previous call :: " << findLargest(call, previousCall) << endl;

    if(call>(previousCall)) {
        cout << "This call is longer than previous call." << endl;
    } else {
        cout << "Call is not longer than previous call" << endl;
    }



    Sale shirtSale(7000, 350);
    Sale shoeSale(8000, 1500);
    Sale tieSale(9000, 250);

    shirtSale.showSale();
    shoeSale.showSale();
    tieSale.showSale();

    Sale totalSale(1,0.0);
    totalSale = shirtSale + shoeSale + tieSale;
    totalSale.showSale();

    cout << "Enter your age:: ";
    cin >> age;

    cout << "Enter your weight:: ";
    cin >> weight;

    cout << "Enter your height:: ";
    cin >> height;

    cout << "Enter your name:: ";
    cin >> name;


    Student mono(age, weight, height, name);

    mono.display();

    cout << mono.howOld() << endl;

    mono.walk();

    cout << "BMI:: " << mono.calculateBMI() << endl;

    mono.grow(1, 2);

    cout << "BMI:: " << mono.calculateBMI() << endl;

    displayFromFriend(mono);
*/

    return 0;
}
