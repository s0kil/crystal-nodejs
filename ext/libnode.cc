#include "node.h"

int node::Start(int argc, char* argv[]);

int main()
{
  char argv0[] = "crystal_nodejs";
  char argv1[] = "-e";
  char argv2[] = "console.log(1)";
  char *argv[] = {argv0, argv1, argv2, NULL};
  node::Start(3, argv);
  return 0;
}


