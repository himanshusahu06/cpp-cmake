namespace cynthia { namespace mathematica {
    class rational {
        private:
        int numerator;
        int denominator;
        public:
        rational(const int, const int);
        double getValue();
        int getNumerator();
        int getDenominator();
        bool isEqual(const rational&);
        bool isGreaterThan(const rational&);
        bool isLessThan(const rational&);
    };
}}