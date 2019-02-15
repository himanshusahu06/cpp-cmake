#include<iostream>
#include "cynthia/cynthia.h"

using namespace std;
using namespace cynthia;    // cool name. isn't it?
/**
 * How to write a c++ library and use it? 
 **/
int main(int argc, char const *argv[])
{
    mathematica::rational retnum(3,7);
    cout << retnum.getValue() << endl;
    cout << is_x86_64_architecture() << endl; // method is defined in `cynthia` namespace
    cout << api_version() << endl;  // method is defined in `cynthia` namespace
    cout << mathematica::api_version() << endl; // there can be multiple methods in different namespace
    return 0;
}
