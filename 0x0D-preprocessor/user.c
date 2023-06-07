#include <stdio.h>
#include <stdlib.h>

/**
 * main - Create struct data-type New_user
 * Return: 0
 */

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = malloc(sizeof(struct User));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->email = email;
	user->age = age;
	return (user);
}

int main(void)
{
	struct User *user;

	user = new_user("foo", "foo@foo.bar", 98);
	if (user == NULL)
		return (1);
	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	free(user);
	return (0);
}
