#include "node.h"

int node::Start(int argc, char* argv[]);

int main()
{
  char argv0[] = "crystal_node";
  char argv1[] = "-e";
  char argv2[] = "console.log('aaaa');class A {a(n){console.log(n);}}; new A().a(111111);";
  char *argv[] = {argv0, argv1, argv2};
  node::Start(3, argv);

  return 0;
}


