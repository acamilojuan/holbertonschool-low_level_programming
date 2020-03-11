/**
 * @get_op_func - function pointer
 * @s: pointer to string
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };	
	int a;

	while (ops[a].op != '\0')
		if (strcmp(s, ops[a].op) == 0)
			break;
		i++;		
		return (ops[a].f);
}
