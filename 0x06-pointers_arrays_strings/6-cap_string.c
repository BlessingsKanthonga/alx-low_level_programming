/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: The input string
 *
 * Return: Pointer to the resulting string
 */

char *cap_string(char *s)
{
	int i;

	/* Capitalize first letter if it's a small letter */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 'a' + 'A';

	/* Capitalize all letters after a separator */
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		    s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		    s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '\"' ||
		    s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		    s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 'a' + 'A';
		}
	}

	return (s);
}

