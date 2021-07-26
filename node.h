
typedef struct node_s node_t;

node_t *create_node(uint8_t); 

bool set_next_node(node_t *, node_t *);

node_t *get_next_node(node_t *);

bool print_node(node_t *);

void delete_node(node_t *); 

bool get_node_value(node_t *, uint8_t *);
