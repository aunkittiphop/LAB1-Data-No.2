#include <stdio.h>

void printNDown(int n) {
	while(n) {
		printf("%d ",n--);
	}
}

void printNDownR(int n) {
	if(n) {
		printf("%d ",n);
		printNDownR(n-1);
	}
}

int main(void) {
  printNDown(6);
  printf("\n");
  printNDownR(4);
  return 0;
}