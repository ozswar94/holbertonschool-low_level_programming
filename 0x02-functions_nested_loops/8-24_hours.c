#include "main.h"
#define HOUR 24
#define MINUTE 60
/**
* jack_bauer - print every minute of the day of Jack Bauer
* Return: nothing (void)
*/
void jack_bauer(void)
{
	int i;
	int j;
	int h_0;
	int h_1;
	int m_0;
	int m_1;

	h_0 = h_1 = m_0 = m_1 = 0;
	for (i = 0; i < HOUR; i++)
	{
		for (j = 0; j < MINUTE; j++)
		{
			_putchar(h_0 + '0');
			_putchar(h_1 + '0');
			_putchar(':');
			_putchar(m_0 + '0');
			_putchar(m_1 + '0');
			_putchar('\n');
			if (m_1 == 9)
			{
				m_0++;
				m_1 = 0;
			}
			else
				m_1++;
		}
		if (h_1 == 9)
		{
			h_0++;
			h_1 = 0;
			m_0 = 0;
			m_1 = 0;
		}
		else
		{
			h_1++;
			m_0 = 0;
			m_1 = 0;
		}
	}
}

