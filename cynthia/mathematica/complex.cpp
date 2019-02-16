#include<string>
#include<sstream>

#include "complex.h"

namespace cynthia { namespace mathematica {
    complex::complex(double real, double imag): re(real), im(imag) {}
    complex::complex(double real): re(real), im(0) {}
    double const complex::real() {
        return re;
    }
    double const complex::imag() {
        return im;
    }
    std::string complex::as_string() {
        std::ostringstream sstream;
        sstream << "( " << re << ", " << im << ")";
        return sstream.str();
    }
    // this` OP `z`
    complex complex::operator+(const complex& z) {
        return complex {re + z.re, im + z.im};
    }
    complex complex::operator-(const complex& z) {
        return complex {re - z.re, im - z.im};
    }
    complex complex::operator*(const complex& z) {
        return complex {(re * z.re - im * z.im),(re * z.im + im * z.re)};
    }
    complex complex::operator/(const complex& z) {
        double den = (z.re * z.re + z.im * z.im);
        return complex {(re * z.re + im * z.im) / den, (im * z.re - re * z.im) / den};
    }
}}