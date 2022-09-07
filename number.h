#pragma once
#include <iostream>
#include <vector>
using namespace std;
class number_t {
protected:
char type;
double numero,res;
public:
number_t(int n);
number_t(double n);
virtual double num();
char get_type();
};
class integer_t:public number_t{
public:
integer_t(int n);
};
class real_t:public number_t{
public:
real_t(double n);};
