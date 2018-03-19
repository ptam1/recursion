#ifndef RECURSION_H
#define RECURSION_H

#include <string>
using namespace std;

class recursion
{
public:

 void numbers(ostream& outs, const string& prefix, unsigned int levels);
 void pattern(ostream& outs, unsigned int n, unsigned int i);
};

#endif