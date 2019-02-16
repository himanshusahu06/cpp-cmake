#include "mathematica/rational.h"
#include "mathematica/complex.h"
#include "utils/version.h"
#include "enums/enums.h"

namespace cynthia {
    namespace mathematica {
        class rational; // this is not required
        class complex;
        // explicit declartion of operators. these operators can be outside of class
        complex operator/(double a, complex b) {
            return complex(a) / b;
        }
        complex operator*(double a, complex b) {
            return complex(a) * b;
        }
        bool operator==(complex a, complex b) {
            return a.real() == b.real() && a.imag() == b.imag();
        }
        bool operator!=(complex a, complex b) {
            return !(a==b);
        }
        double api_version();
    }
    namespace enums {   // this is not required but good to specify
        enum class Color;
        enum Traffic_light;
    }
    double api_version();
    bool is_x86_64_architecture();
}
