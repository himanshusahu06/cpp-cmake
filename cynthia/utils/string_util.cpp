#include<vector>
#include<string>
#include<sstream>

#include "string_util.h"

using namespace std;

namespace cynthia {
    vector<std::string> util::split(string& string_to_split, const char delimeter) {
        vector<string> result;
        std::stringstream ss(string_to_split);
        std::string s;
        while(std::getline(ss, s, delimeter)){
            result.push_back(s);
        }
        return result;
    }
}
