#include "node.h"

int node::Start(int argc, char* argv[]);

void eval(char *code) {
  char* argv[3];
  char* app = (char*)"crystal_nodejs";
  char* option = (char*)"-e";
  argv[0] = app;
  argv[1] = option;
  argv[2] = code;
  node::Start(3, argv);
}

// void install() {
  // char* argv[2];
  // char* app = (char*)"crystal_nodejs";
  // char* option = (char*)"/home/t/Work/crystal-nodejs/ext/test.js";
  // argv[0] = app;
  // argv[1] = option;
  // node::Start(2, argv);
// }

int main() {
  char* code = (char* )"console.log('test');";
  eval(code);
  // install();
  return 0;
}

