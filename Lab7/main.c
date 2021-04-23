#define F_CPU 8000000L
//#define LETTER_A 0b01000001

#include <xc.h>
#include <string.h>
#include <util/delay.h>

void blink_leds_corrrect (void)
{
	for (int i = 0; i < 3; i++)
	{
		_delay_ms(200);
		PORTA = 0b00000011;
		_delay_ms(200);
		PORTA = 0b00000000;
	}
}

void blink_leds_wrong (void)
{	
	for (int i = 0; i < 2; i++)
	{
		_delay_ms(500);
		PORTA = 0b00000011;
		_delay_ms(500);
		PORTA = 0b00000000;
	}
}

int main(void)
{
	DDRA = 0b00000011;
	PORTA = 0b00000000;
	DDRC = 0b00000000;
	
	char digital[8];
	char LETTER_A[] = "0b01000001";
	
	int i, x, j, k;
	
	i = 0;
	
	while(1)
	{
		//if(!(PINC & 0b000000001))
		//blink_leds_corrrect();
		//
		//if(!(PINC & 0b000000010))
		//blink_leds_wrong();
		
		while (i < 8)
		{
			if (!(PINC & 0b000000001))
			{
				strcat(digital, "1");
				i++;
			}
			if (!(PINC & 0b000000010))
			{
				strcat(digital, "0");
				i++;
			}
		}
		
		if(i == 8)
		{
			k = 0;
					
			strrev(digital);
			
			for (x = 0; x < strlen(digital); x++)
			{
				for (j = 2; j < strlen(LETTER_A) - 1; j++)
				{
					if (digital[x] == LETTER_A[j])
					k++;
				}
			}
			
			if (k == 8)
			{
				blink_leds_corrrect();
			}
			else if (k > 0 && k < 8)
			{
				blink_leds_wrong();
			}
		}
		
		_delay_ms(100);
		
		if (!(PINC & 0b000000100))
		{
			i = 0;
		}
	}

	return 0;
}