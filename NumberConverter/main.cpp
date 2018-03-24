#include <iostream>
#include <vector>

using namespace std;

void welcomeMessage();
void byeMessage();
void converter(vector<int>);

int main() {
    vector<int> decimalNumbers;
    string numbers;
    welcomeMessage();
    for(int i=0;i<5;i++)
    {
        int a;
        cout << "Enter 5 decimal numbers ::" << endl;
        cin >> a;
        decimalNumbers.push_back(a);
    }
    converter(decimalNumbers);
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