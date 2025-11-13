#include <reg51.h>
sbit speaker = P2^0;

void delay(unsigned int t) {
  unsigned int i, j;
  for(i=0; i<t; i++)
    for(j=0; j<100; j++);
}

void tone(unsigned int freq) {
  unsigned int i;
  for(i=0; i<200; i++) {
    speaker = 1;
    delay(freq);
    speaker = 0;
    delay(freq);
  }
}

void main() {
  while(1) {
    tone(2);
    delay(100);
    tone(5);
    delay(100);
    tone(10);
    delay(100);
  }
}
