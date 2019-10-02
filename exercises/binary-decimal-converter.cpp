#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void welcomeMessage();
void byeMessage();
void converter(vector<int>);
int binaryToDecimal(vector<int>);

int main() {
    vector<int> decimalNumbers;
    vector<int> binaryNumbers;
    string numbers;
    int choice;
    welcomeMessage();
    cout << "Let\'s Play \n 1 : Decimal ==> Binary\n 2 : Binary ==> Decimal\n\n Choose 1 or 2 ::" << endl;
    cin >> choice;
    cin.clear();
    if (choice == 1)
    {
        cout << "Enter 5 decimal numbers ::" << endl;
        for(int i=0;i<5;i++)
        {
            int a;
            cin >> a;
            decimalNumbers.push_back(a);
        }
        converter(decimalNumbers);
    }
    else
    {
        cout << "Enter a binary number (end it with a decimal i.e 1010.) ::" << endl;
        getline(cin, numbers, '.');
        char binary[numbers.size()];
        char* pEnd;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i] == '0' || numbers[i] == '1')
            {
                binary[i] = numbers[i];
                binaryNumbers.push_back(int(strtol(binary, &pEnd, 10)));
            }
        }
        cout << numbers << " ===> " << binaryToDecimal(binaryNumbers) << endl;
    }
    byeMessage();
    return 0;
}

void welcomeMessage()
{
    const int SIZE = 30;
    for (int i = 0; i < SIZE ; ++i)
        cout << "/";
    cout << endl;

    cout << "Welcome to Number system converter" << endl;
    for (int j = 0; j < SIZE; ++j)
        cout << "\\";
    cout << endl;
}

void byeMessage()
{
    const int SIZE = 30;
    for (int i = 0; i < SIZE ; ++i)
        cout << "\\";
    cout << endl;

    cout << "Bye, hope you got your answer" << endl;
    for (int j = 0; j < SIZE; ++j)
        cout << "/";
    cout << endl;
}

void converter(vector<int> numbers)
{
    vector< vector<int> > bset;
    int i = 0;
    for (int number :numbers)
    {
        vector<int> binary;
        do
        {
            if (number == 0)
            {
                binary.push_back(0);
                binary.push_back(0);
            }
            else if (number == 1)
            {
                binary.push_back(1);
                number = 0;
            }
            else
            {
                binary.push_back(number % 2);
                number /= 2;
            }
        } while (number != 0);
        bset.push_back(binary);
        i++;
    }

    for (vector<int> set : bset)
    {
        auto rit = set.rbegin();
        for (; rit != set.rend(); rit++)
            cout << *rit;
        cout << endl;
    }
}

int binaryToDecimal(vector<int> binary)
{
//    binary = {1,0,1,0};
    auto rit = binary.rbegin();
    int index = 0;
    int decimal = 0;
    for( ;rit < binary.rend(); rit++)
    {
        int base2 = pow(2, index);
        int current = *rit;
        decimal += current * base2;
        index ++;
    }
    return decimal;
}