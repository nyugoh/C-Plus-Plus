//
// Created by joe on 3/22/18.
//

#ifndef C_SMALLOBJECT_H
#define C_SMALLOBJECT_H


class smallObject {
private:
    int someData;
public:
    void setData(int data)
    {
        someData = data;
    }
    void showData()
    {
        cout << "Data is " << someData << endl;
    }

};


#endif //C_SMALLOBJECT_H
