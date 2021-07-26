#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include "stack.h"


int main() {
    mystack_t *stack;
    
    stack = create_stack();

	push_to_stack(stack, 1);
	push_to_stack(stack, 2);
	push_to_stack(stack, 3);
	
	print_stack(stack);


	uint8_t ret_val;
	bool result;
	result = pop_from_stack(stack, &ret_val);
	assert(result == true);

	printf("Stack after popping one element\n");
	print_stack(stack);
	
	result = pop_from_stack(stack, &ret_val);
	assert(result == true);

	printf("Stack after popping 2nd element\n");
	print_stack(stack);

	printf("Is stack empty? %d\n", stack_is_empty(stack));

	result = pop_from_stack(stack, &ret_val);
	assert(result == true);

	printf("Stack after popping 3rd element\n");
	print_stack(stack);

	printf("Is stack empty? %d\n", stack_is_empty(stack));

	result = pop_from_stack(stack, &ret_val);
	if (result == false) {
		printf("Pop failed\n");
	}

	printf("Stack after popping 4th element\n");
	print_stack(stack);

	printf("Is stack empty? %d\n", stack_is_empty(stack));

    return 0;
}
