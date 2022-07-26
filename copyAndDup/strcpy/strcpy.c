// for printf
#include <stdio.h>

// for malloc
#include <stdlib.h>

// for strcpy
#include <string.h>

struct list_s {
  struct list_s *next;
  char *str;
};

void add_to_list(struct list_s **head, char *str) {
  struct list_s *new_node = malloc(sizeof *new_node);
  char* addr = malloc(strlen(str) + 1);
  strcpy(addr, str);
  new_node->str = addr;
  new_node->next = *head;
  *head = new_node;
}

int main() {
  struct list_s *head = NULL;
  char buffer[1024];

  strcpy(buffer, "node 1");
  add_to_list(&head, buffer);
  strcpy(buffer, "node 2");
  add_to_list(&head, buffer);
  strcpy(buffer, "node 3");
  add_to_list(&head, buffer);

  for (struct list_s *ptr = head; ptr; ptr = ptr->next) {
    printf("%s\n", ptr->str);
  }

  return 0;
}