typedef struct stack_s mystack_t;

mystack_t * create_stack(void); 

bool stack_is_empty(mystack_t *);

void push_to_stack(mystack_t *, uint8_t); 

bool pop_from_stack(mystack_t *, uint8_t *); 

void print_stack(mystack_t *);
