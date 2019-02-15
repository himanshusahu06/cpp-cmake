#include<vector>
using namespace std;

namespace cynthia { namespace util {
    class version {
        public:
        version(string version);
        vector<int> get_version_as_vector();
        bool is_equal(const version& that);
        bool is_greater_than(const version& that);
        bool is_less_than(const version& that);
        private:
        vector<int> vesion_array;
    };
}}