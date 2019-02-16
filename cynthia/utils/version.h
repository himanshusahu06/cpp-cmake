#include<vector>
using namespace std;

namespace cynthia { namespace util {
    class version {
        public:
        version(std::string&);
        version(const char *);
        vector<int> get_version_as_vector();
        bool is_equal(const version&);
        bool is_greater_than(const version&);
        bool is_less_than(const version&);
        private:
        vector<int> version_array;
    };
}}