#include<string>

namespace cynthia { namespace mathematica {
    /**
     * complex number as a concrete class
     **/
    class complex {
        public:
        complex(double, double);
        complex(double);
        double const real();
        double const imag();
        complex operator+(const complex& z);  // pass by const reference is better than pass by values
        complex operator-(const complex& z);
        complex operator*(const complex& z);
        complex operator/(const complex& z);
        std::string as_string();
        private:
        double re;
        double im;
    };
}}