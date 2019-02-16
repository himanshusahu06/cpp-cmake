#include<iostream>
#include "cynthia/cynthia.h"

using namespace std;
using namespace cynthia;    // cool name. isn't it?
/**
 * How to writke a c++ library and use it? 
 **/
int main(int argc, char const *argv[])
{
    cout << endl << "*********** rational numbers *************" << endl;
    mathematica::rational retnum(6,7);
    try {
        cout << retnum.getValue() << endl;
    } catch(invalid_argument iae) {
        cout << "ERROR invalid_argument : " << iae.what() << endl;
        return -1;
    } catch(out_of_range oore) {
        cout << "ERROR out_of_range: " << oore.what() << endl;
        return -1;
    }

    cout << is_x86_64_architecture() << endl; // method is defined in `cynthia` namespace
    cout << api_version() << endl;  // method is defined in `cynthia` namespace
    cout << mathematica::api_version() << endl; // there can be two methods with same name in different namespace


    cout << endl << "*********** complex numbers *************" << endl;
    mathematica::complex z1(3,2);
    mathematica::complex z2(4,-3);
    mathematica::complex z3 {1/z1};
    mathematica::complex z4 {z1 + 2*z2};
    cout << "z1: " << z1.as_string() << endl;
    cout << "z2: " << z2.as_string() << endl;
    cout << "z3: " << z3.as_string() << endl;
    cout << "z4: " << z4.as_string() << endl;
    cout << "z1 + z2: " << (z1 + z2).as_string() << endl;
    cout << "z1 == z2: " << (z1 == z2) << endl;
    cout << z1.as_string() << endl;


    cout << endl << "*********** version util *************" << endl;
    util::version version_a("5.10.0.1");
    util::version version_b("5.10.1");
    cout << version_a.is_equal(version_b) << endl;
    cout << version_a.is_greater_than(version_b) << endl;
    cout << version_a.is_less_than(version_b) << endl;
    
    
    cout << endl << "*********** enum & enum class *************" << endl;
    // usage of `enum class`. elements do not bleed
    const enums::Color traffic_color = enums::Color::RED;
    // enum class can be compared
    const bool is_less_attractive = enums::Color::RED > enums::Color::BLUE;
    // usage of `enum`. elements are bleeding to upper scope
    const int yellow_traffic_light = enums::YELLOW;

    cout << endl << "*********** static assertion *************" << endl;
    /**
     * Exceptions report errors found at run time. but static asswertion does it at compile time.
     * static_assert(A, S) prints S if A is not true. mostly used for type assertion.
     * A must be constant expression.
     * https://stackoverflow.com/questions/13346879/const-vs-constexpr-on-variables
     * https://stackoverflow.com/questions/14116003/difference-between-constexpr-and-const
     * */
    constexpr double PI2 = 3.141592653589793;
    static_assert(PI2 == 3.141592653589793, "PI value is not matching.");

    return 0;
}
