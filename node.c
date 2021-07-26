#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"

/**
 * A node in the stack.
 */
struct node_s {
    struct node_s *next; /**< Next element in the stack. */
    uint8_t value; /**< Value stored in the stack. */
}; 

node_t *
create_node (uint8_t value) {
	node_t *new_node;

	new_node = (node_t *) malloc(sizeof(node_t));	
	new_node->value = value;
	new_node->next = NULL;

	return new_node;
}

void
delete_node (node_t *node) {
	free(node);
}

bool
set_next_node (node_t *node, node_t *next) {
	if (node == NULL) { 
		return false;
	}
	node->next = next;
	return true;
}

node_t *
get_next_node (node_t *node) {
	if (node == NULL) {
		return NULL;
	}
	return (node->next);
}

bool
print_node(node_t *node) { 
	if (node == NULL) {
		return false;
	}
	printf("node %p has val %d\n", node, node->value);
	return true;
}


bool
get_node_value (node_t *node, uint8_t *value) {
	if (node == NULL) {
		return false;
	}

	*value = node->value;
	return true;	
}
