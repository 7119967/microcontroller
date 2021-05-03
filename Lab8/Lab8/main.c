/*
 * main.c
 *
 * Created: 4/28/2021 8:32:45 PM
 *  Author: rashi
 */ 

#define F_CPU 8000000L
#define e1    PORTB|=0b00000010 // ��������� ����� E � 1
#define e0    PORTB&=0b11111101 // ��������� ����� E � 0
#define rs1    PORTB|=0b00000001 // ��������� ����� RS � 1 (������)
#define rs0    PORTB&=0b11111110 // ��������� ����� RS � 0 (�������)

#include <xc.h>
#include <util/delay.h>

void set_pos(unsigned char x, unsigned y)
{
	char address;
	address = (0x40*y + x)|0b10000000;
	sendbyte(address, 0);
}

void sendbyte(unsigned char c, unsigned char mode)
{
	if (mode == 0) {
		rs0;
	}
	else {    
		rs1;
	}
	unsigned char hc = 0;
	hc = c>>4;
	sendhalfbyte(hc); sendhalfbyte(c);
}

void sendhalfbyte(unsigned char c)
{
	c <<= 4;
	e1; //�������� ����� �
	_delay_us(50);
	PORTA &= 0b00001111; //������� ���������� �� ������ DB4-DB7, ��������� �� �������
	PORTA |= c;
	e0; //��������� ����� �
	_delay_us(50);
}

void LCD_ini(void)
{
	_delay_ms(15);
	sendhalfbyte(0b00000011);
	_delay_ms(4);
	sendhalfbyte(0b00000011);
	_delay_us(100);
	sendhalfbyte(0b00000011);
	_delay_ms(1);
	sendhalfbyte(0b00000010);
	_delay_ms(1);
	sendbyte(0b00101000, 0); //4���-����� (DL=0) � 2 ����� (N=1)
	_delay_ms(1);
	sendbyte(0b00001100, 0); //�������� ����������� �� ������� (D=1), ������� ������� �� �������� (C=0, B=0)
	_delay_ms(1);
	sendbyte(0b00000110, 0); //������ (���� �� � ��� � ���������) ����� ��������� �����
	_delay_ms(1);
}

void port_ini(void)
{
	PORTA = 0x00;
	DDRA = 0xFF;
	PORTB = 0x00;
	DDRB = 0xFF;
}

void sendchar(unsigned char c)
{
	sendbyte(c,1);
}

void str_lcd (char str1[])
{
	for (int n = 0; str1[n] !='\0'; n++)
	{
		sendchar(str1[n]);
		_delay_ms(10);
	}
}

int main(void)
{
   	char name[] = "_Rashit_";

	port_ini(); //�������������� �����
	LCD_ini();  //�������������� �������
	//set_pos(0,0);
	//str_lcd(name);
	//set_pos(0,1);
	//str_lcd(surname);
	
	while(1) {
		// ����������� ������� ������
		for (int i = 0; i < (16 - sizeof(name)); i++) {
			set_pos(i,0);
			str_lcd(name);
			_delay_ms(100);
			port_ini(); 
		}
		// ����������� ������� �����
		for (int i = (16 - sizeof(name)); i > 0; i--) {
			set_pos(i,0);
			str_lcd(name);
			_delay_ms(100);
			port_ini(); 
		}
	}
}