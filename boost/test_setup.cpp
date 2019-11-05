/**
* Created by Joe Nyugoh Ngigi on 10/5/19 4:33 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <boost/filesystem.hpp>

using namespace std;

// Alias boost::filesystem to just fs
namespace fs = boost::filesystem;

int main(int argvc, char *argv[])
{
    // Throw error if no path is given
    if(argvc == 1){
        cerr << "Usage:: " << argv[0] << " <filename>" << endl;
        return 1;
    }
    
    cout << argvc << endl;
    cout << argv[0] << endl;
    cout << argv[1] << endl;
    fs::path p(argv[1]);
    if(fs::exists(p)){
        cout << "Good file path exists" << endl;
    }else {
        cout << "Path doesn't exist" << endl;
    }

    return 0;
}