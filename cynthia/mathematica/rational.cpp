#include<iostream>
#include "rational.h"

using namespace std;

namespace cynthia { namespace mathematica {

    rational::rational(const int numerator, const int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    int rational::getNumerator() {
        return this->numerator;
    }

    int rational::getDenominator() {
        return this->denominator;
    }

    double rational::getValue() {
        return double(this->numerator)/double(this->denominator);
    }

    bool rational::isEqual(const rational& that) {
        return this->numerator * that.denominator == this->denominator * that.numerator;
    }

    bool rational::isGreaterThan(const rational& that) {
        return this->numerator * that.denominator > this->denominator * that.numerator;
    }

    bool rational::isLessThan(const rational& that) {
        return !isGreaterThan(that) && !isEqual(that);
    }
}}