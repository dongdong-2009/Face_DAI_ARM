#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>

using namespace std;

class Hello{
 public:

  Hello(){std::cout << "12345" <<endl;}

  virtual ~Hello(){};

  int get_value(int para);

 private:
  int bbb;

 public:

   int ccc;
};

