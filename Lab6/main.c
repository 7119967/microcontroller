#include <avr/io.h>

void wait (int delay) {
	while (delay > 0)
	{
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		
		delay--;
	}
}

void morse (char l, int n, int dt) {
	if (l == 'a'){
		tochka(n);defis(dt);
		} else if (l == 'b') {
		defis(dt);tochka(n);tochka(n);tochka(n);
		} else if (l == 'c') {
		defis(dt);tochka(n);defis(dt);tochka(n);
		} else if (l == 'd') {
		defis(dt);tochka(n);tochka(n);
		} else if (l == 'e') {
		tochka(n);
		} else if (l == 'f') {
		tochka(n);tochka(n);defis(dt);tochka(n);
		} else if (l == 'g') {
		defis(dt);defis(dt);tochka(n);
		} else if (l == 'h') {
		tochka(n);tochka(n);tochka(n);tochka(n);
		} else if (l == 'i') {
		tochka(n);tochka(n);
		} else if (l == 'j') {
		tochka(n);defis(dt);defis(dt);defis(dt);
		} else if (l == 'k') {
		defis(dt);tochka(n);defis(dt);
		} else if (l == 'l') {
		tochka(n);defis(dt);tochka(n);tochka(n);
		} else if (l == 'm') {
		defis(dt);defis(dt);
		} else if (l == 'n') {
		defis(dt);tochka(n);
		} else if (l == 'o') {
		defis(dt);defis(dt);defis(dt);
		} else if (l == 'p') {
		tochka(n);defis(dt);defis(dt);tochka(n);
		} else if (l == 'q') {
		defis(dt);defis(dt);tochka(n);defis(dt);
		} else if (l == 'r') {
		tochka(n);defis(dt);tochka(n);
		} else if (l == 's') {
		tochka(n);tochka(n);tochka(n);
		} else if (l == 't') {
		defis(dt);
		} else if (l == 'u') {
		tochka(n);tochka(n);defis(dt);
		} else if (l == 'v') {
		tochka(n);tochka(n);tochka(n);defis(dt);
		} else if (l == 'w') {
		tochka(n);defis(dt);defis(dt);
		} else if (l == 'x') {
		defis(dt);tochka(n);tochka(n);defis(dt);
		} else if (l == 'y') {
		defis(dt);tochka(n);defis(dt);defis(dt);
		} else if (l == 'z') {
		defis(dt);defis(dt);tochka(n);tochka(n);
	}
}
void morse_1 (char s, int n, int dt) {
	if (s == 'a'){
		tochka(n);defis(dt);
		} else if (s == 'b') {
		defis(dt);tochka(n);tochka(n);tochka(n);
		} else if (s == 'c') {
		defis(dt);tochka(n);defis(dt);tochka(n);
		} else if (s == 'd') {
		defis(dt);tochka(n);tochka(n);
		} else if (s == 'e') {
		tochka(n);
		} else if (s == 'f') {
		tochka(n);tochka(n);defis(dt);tochka(n);
		} else if (s == 'g') {
		defis(dt);defis(dt);tochka(n);
		} else if (s == 'h') {
		tochka(n);tochka(n);tochka(n);tochka(n);
		} else if (s == 'i') {
		tochka(n);tochka(n);
		} else if (s == 'j') {
		tochka(n);defis(dt);defis(dt);defis(dt);
		} else if (s == 'k') {
		defis(dt);tochka(n);defis(dt);
		} else if (s == 'l') {
		tochka(n);defis(dt);tochka(n);tochka(n);
		} else if (s == 'm') {
		defis(dt);defis(dt);
		} else if (s == 'n') {
		defis(dt);tochka(n);
		} else if (s == 'o') {
		defis(dt);defis(dt);defis(dt);
		} else if (s == 'p') {
		tochka(n);defis(dt);defis(dt);tochka(n);
		} else if (s == 'q') {
		defis(dt);defis(dt);tochka(n);defis(dt);
		} else if (s == 'r') {
		tochka(n);defis(dt);tochka(n);
		} else if (s == 's') {
		tochka(n);tochka(n);tochka(n);
		} else if (s == 't') {
		defis(dt);
		} else if (s == 'u') {
		tochka(n);tochka(n);defis(dt);
		} else if (s == 'v') {
		tochka(n);tochka(n);tochka(n);defis(dt);
		} else if (s == 'w') {
		tochka(n);defis(dt);defis(dt);
		} else if (s == 'x') {
		defis(dt);tochka(n);tochka(n);defis(dt);
		} else if (s == 'y') {
		defis(dt);tochka(n);defis(dt);defis(dt);
		} else if (s == 'z') {
		defis(dt);defis(dt);tochka(n);tochka(n);
	}
}
void morse_2 (char p, int n, int dt) {
	if (p == 'a'){
		tochka(n);defis(dt);
		} else if (p == 'b') {
		defis(dt);tochka(n);tochka(n);tochka(n);
		} else if (p == 'c') {
		defis(dt);tochka(n);defis(dt);tochka(n);
		} else if (p == 'd') {
		defis(dt);tochka(n);tochka(n);
		} else if (p == 'e') {
		tochka(n);
		} else if (p == 'f') {
		tochka(n);tochka(n);defis(dt);tochka(n);
		} else if (p == 'g') {
		defis(dt);defis(dt);tochka(n);
		} else if (p == 'h') {
		tochka(n);tochka(n);tochka(n);tochka(n);
		} else if (p == 'i') {
		tochka(n);tochka(n);
		} else if (p == 'j') {
		tochka(n);defis(dt);defis(dt);defis(dt);
		} else if (p == 'k') {
		defis(dt);tochka(n);defis(dt);
		} else if (p == 'l') {
		tochka(n);defis(dt);tochka(n);tochka(n);
		} else if (p == 'm') {
		defis(dt);defis(dt);
		} else if (p == 'n') {
		defis(dt);tochka(n);
		} else if (p == 'o') {
		defis(dt);defis(dt);defis(dt);
		} else if (p == 'p') {
		tochka(n);defis(dt);defis(dt);tochka(n);
		} else if (p == 'q') {
		defis(dt);defis(dt);tochka(n);defis(dt);
		} else if (p == 'r') {
		tochka(n);defis(dt);tochka(n);
		} else if (p == 's') {
		tochka(n);tochka(n);tochka(n);
		} else if (p == 't') {
		defis(dt);
		} else if (p == 'u') {
		tochka(n);tochka(n);defis(dt);
		} else if (p == 'v') {
		tochka(n);tochka(n);tochka(n);defis(dt);
		} else if (p == 'w') {
		tochka(n);defis(dt);defis(dt);
		} else if (p == 'x') {
		defis(dt);tochka(n);tochka(n);defis(dt);
		} else if (p == 'y') {
		defis(dt);tochka(n);defis(dt);defis(dt);
		} else if (p == 'z') {
		defis(dt);defis(dt);tochka(n);tochka(n);
	}
}
//name
void tochka(int dot) {
	DDRB = 0b00000001;
	PORTB = 0b00000000;
	wait(dot);
	PORTB = 0b00000001;
	wait(dot);
	PORTB = 0b00000000;
}
void defis (int def) {
	DDRA = 0b00000111;
	PORTA = 0b00000000;
	wait(def);
	PORTA = 0b00000111;
	wait(def);
	PORTA = 0b00000000;
}

//surname
void surname_tochka(int dot) {
	DDRD = 0b00000001;
	PORTD = 0b00000000;
	wait(dot);
	PORTD = 0b00000001;
	wait(dot);
	PORTD = 0b00000000;
}
void surname_defis (int def) {
	DDRD = 0b00000001;
	PORTD = 0b00000000;
	wait(def);
	PORTD = 0b00000001;
	wait(def);
	PORTD = 0b00000000;
}
//patronym
void patronym_tochka(int dot) {
	DDRE = 0b00000001;
	PORTE = 0b00000000;
	wait(dot);
	PORTE = 0b00000001;
	wait(dot);
	PORTE = 0b00000000;
}
void patronym_defis (int def) {
	DDRE = 0b00000001;
	PORTE = 0b00000000;
	wait(def);
	PORTE = 0b00000001;
	wait(def);
	PORTE = 0b00000000;
}



int main(void)
{
	int tochka_val = 5000;
	int defis_val = 15000;
	char name[] = "name";
	char surname[] = "surname";
	char patronym[] = "patronym";
	
	for (int i = 0; i < sizeof(name); i++) {
		int n_bucva = name[i];
		morse_1(n_bucva, tochka_val, defis_val);
	}

	for (int j = 0; j < sizeof(surname); j++) {
		int s_bucva = surname[s];
		morse_3(s_bucva, tochka_val, defis_val);
		
		for (int k = 0; k < sizeof(patronym); k++) {
			int p_bucva = patronym[k];
			morse_3(p_bucva, tochka_val, defis_val);
			
		}
	}

