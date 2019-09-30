//
// Created by joe on 9/28/19.
//

template<class T>
class Number
{
private:
    T theNumber;
public:
    Number(T);
    void displayNumber();
};

template <class T>
Number<T>::Number(T val)
{
    theNumber = val;
}

template <class T>
void Number<T>::displayNumber() {
    std:: cout << "Number # " << theNumber << std::endl;
}