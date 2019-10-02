//
// Created by joe on 9/22/19.
//
template <class T>
T findLargest(T x, T y)
{
    if(x>y) return x;
    else return y;
}

class PhoneCall
{
    friend ostream& operator<< (ostream&, PhoneCall);
private:
    int minutes;

public:
    PhoneCall(int);
    bool operator> (PhoneCall);
};

ostream& operator<< (ostream& out, PhoneCall call)
{
    out<< "Phone call lasted ::" << call.minutes << endl;
    return out;
}

PhoneCall::PhoneCall(int mins) {
    minutes = mins;
}

bool PhoneCall::operator>(PhoneCall call) {
    return minutes>call.minutes;
}
