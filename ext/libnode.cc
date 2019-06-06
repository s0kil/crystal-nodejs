#include "node.h"

int node::Start(int argc, char* argv[]);

void eval(char jscode[]) {
  char argv0[] = "crystal_node";
  char argv1[] = "-e";
  char *argv[] = {argv0, argv1, jscode};
  node::Start(3, argv);
}

int main(int argc, char* argv[]) {
  eval("class A {a(n){console.log(n);}}; new A().a(7777);");
  node::Start(argc, argv);
  return 0;
}

