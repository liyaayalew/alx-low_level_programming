#include <stdio.h>
/**
 * main - prints all  different combi of these digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int on = '0';
	int ten = '0';
	int hund = '0';

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (on = '0'; on <= '9'; on++)
			{
				if (!((on == ten) || (ten == hund) || (ten > on) || (hund > ten)))
				{
					putchar(hund);
					putchar(ten);
					putchar(on);
					if (!(on == '9' && hund == '7' && ten == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
