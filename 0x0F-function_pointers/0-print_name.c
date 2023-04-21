/**
 * print_name - prints a name.
 * @name: name to be printed
 * @f: pointer to a function that prints the name;
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
