#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "node.h"
#include "stack.h"


/**
 * The stack.
 */
struct stack_s {
    node_t *top_of_stack; /**< Top node in stack. */
};

/**
 * Create an empty stack.
 *
 * @return Stack instance.
 */
mystack_t *
create_stack (void) {
	mystack_t *stack;

	stack = malloc(sizeof(mystack_t));

	stack->top_of_stack = NULL;

	return stack;
}

bool
stack_is_empty (mystack_t *stack)
{
	if (stack->top_of_stack == NULL) {
		return true;
	} else {
		return false;
	}
}

/**
 * Push an element on to stack.
 */
void
push_to_stack (mystack_t *stack, uint8_t value) {
	node_t *node;

	node = create_node(value);
	set_next_node(node, stack->top_of_stack);
	stack->top_of_stack = node;
}


bool
pop_from_stack (mystack_t *stack, uint8_t *value) { 
	if (stack_is_empty(stack)) {
		return false;
	}
	node_t *node;

	node = stack->top_of_stack;
	stack->top_of_stack = get_next_node(node);

	if (get_node_value(node, value)) {
		delete_node(node);
		return true;
	}
	return false;

}

void
print_stack (mystack_t *stack) {
	node_t *node;

	for (node = stack->top_of_stack; node; node = get_next_node(node)) {
		print_node(node);
	}

}
