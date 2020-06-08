#include <iostream>
#include "greeter.h"

using namespace std;

int main(int argc, char *argv[]) {
  Greeter* g = new Greeter();
  cout << g->sayHello("world") << endl;
  delete g;

  return 0;
}
