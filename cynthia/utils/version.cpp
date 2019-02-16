#include "version.h"
#include "string_util.h"
#include<string>
#include<vector>

namespace cynthia { namespace util {
    version::version(std::string& version_string) {
        for (const string s: split(version_string, '.')) {
            this->version_array.push_back(std::stoi(s));
        }
    }
    version::version(const char* version_char_array) {
        std::string t = string(version_char_array);
        for (const string s: split(t, '.')) {
            this->version_array.push_back(std::stoi(s));
        }
    }
    vector<int> version::get_version_as_vector() {
        return this->version_array;
    }
    bool version::is_equal(const version& that) {
        if (this->version_array.size() != that.version_array.size()) {
            return false;
        }
        for (int i = 0 ; i < this->get_version_as_vector().size(); i++) {
            if (this->version_array[i] != that.version_array[i]) {
                return false;
            }
        }
        return true;
    }
    bool version::is_greater_than(const version& that) {
        const size_t min_size = min(this->version_array.size(), that.version_array.size());
        for (int i = 0 ; i < min_size; i++) {
            if (this->version_array[i] != that.version_array[i]) {
                return this->version_array[i] > that.version_array[i];
            }
        }
        return this->version_array.size() > min_size;
    }
    bool version::is_less_than(const version& that) {
        return !this->is_equal(that) && !this->is_greater_than(that);
    }
}}