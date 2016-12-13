int main(void)
{
	char *user_input;
	size_t len;

	len = 1024;
	user_input = malloc(len);
	if (user_input == NULL)
	{
		free(user_input);
		return (-1);
	}
	printf("$ ");
	while (getline(&user_input, &len, stdin) != -1)
	{
		printf("%s", user_input);
		return (0);
	}
	return (0);
}
