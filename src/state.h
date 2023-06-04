#ifndef HSTR_STATE_H
#define HSTR_STATE_H

#include <string>
#include <cstddef>

class Query {
public:
    size_t total_characters();
    const char *c_str() const { return q.c_str(); }
    std::string insert(size_t idx, std::string s) { return q.insert(idx, s); }
    std::string substr(size_t a, size_t b) { return q.substr(a, b); }
    size_t length() { return q.length(); }
    size_t byte_index(size_t pos);
    char operator[](size_t idx) { return q[idx]; }
private:
    std::string q;    
};

#endif