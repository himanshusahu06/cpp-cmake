namespace cynthia { namespace mathematica {
    class rational {
        private:
        int numerator;
        int denominator;
        public:
        rational(const int numerator, const int denominator);
        double getValue();
        int getNumerator();
        int getDenominator();
        bool isEqual(const rational& that);
        bool isGreaterThan(const rational& that);
        bool isLessThan(const rational& that);
    };
}}