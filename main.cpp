#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"
#define RANDOM_ARRAY_SIZE 10

int main(int argc, char **argv) {
	int i = 0, tmp;
	struct double_linklist head, *ptr = &head;
	head.next = NULL;
	head.pre = NULL;
	head.data = 65535;
	albert_linklist *my_linklist = new albert_linklist();
	// struct single_linklist head, *ptr = &head;
	if (NULL == my_linklist) {
		printf("alloc mem failed\n");
		return 1;
	}

	printf("The origin array is ");
	for (; i < RANDOM_ARRAY_SIZE; ++i) {
		tmp = rand() % 100;
		printf("%d, ", tmp);
		if (-2 == my_linklist->insert_linklist(ptr, tmp)) {
			printf("alloc mem failed.\n");
		}
		ptr = ptr->next;
	}
	ptr->next = NULL;
	printf("\n");

	// ptr = &head;
	printf("The insert data is ");
	while (NULL != ptr) {
		printf("%d, ", ptr->data);
		ptr = ptr->pre;
	}
	printf("\n");
	
	my_linklist->destroy_linklist(head.next);
	delete my_linklist;

	return 0;
}

