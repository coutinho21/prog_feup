#include <iostream>
#include <cmath>
#include "Operation.h"
using namespace std;

class Sum : public Operation{
public:
    Sum(int op1, int op2) : Operation(op1,op2) { }
    int operation() const{ return this->get_op1() + this->get_op2(); }
};

class Power : public Operation{
public:
    Power(int op1, int op2) : Operation(op1,op2) { }
    int operation() const{ return pow(this->get_op1(), this->get_op2()); }
};