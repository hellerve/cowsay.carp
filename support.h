#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <core.h>

String read_MINUS_all_MINUS_stdin() {
  char buf[1024];
  size_t size = 1;
  char* content = malloc(1024);

  content[0] = '\0';

  while(fgets(buf, 1024, stdin)) {
      char* old = content;
      size += strlen(buf);
      content = realloc(content, size);
      strcat(content, buf);
  }

  return content;
}
