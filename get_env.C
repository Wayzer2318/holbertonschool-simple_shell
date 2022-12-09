#include <stdio.h>

extern char **environ;

int get_env() {
  char **s = environ;

  for (; *s; s++) {
    printf("%s\n", *s);
  }

  return 0;
}
