#include <iostream>
#include <string>

using namespace std;

class A
{
private:
  string name;

public:
  A() : name("Hello A") {}
  A(string name) : name(name) {}
  string get();
};

class A1 : public A
{
};