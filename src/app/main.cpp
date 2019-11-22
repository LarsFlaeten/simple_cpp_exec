#include <iostream>

// From external libraries:
#include <cxxopts.hpp>

// From internal libs:
#include <module/Example.h>

using namespace std;

int main(int argc, char** argv) {

    example::Example ex;



    cout << "Hello World!" << endl;
    
    cout << 2 << " + " << 3 << " = " << ex.add(2,3) << std::endl;
    return 0;
}
