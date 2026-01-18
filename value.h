#ifndef VALUE_H
#define VALUE_H

#include <string>

enum class ValueType {
    STRING,
    INTEGER
};

struct Value {
    ValueType type;

    union {
        std::string str;
        long long integer;
    };

    Value();
    Value(const std::string& s);
    Value(long long i);

    Value(const Value& other);
    Value& operator=(const Value& other);

    ~Value();
};

#endif
