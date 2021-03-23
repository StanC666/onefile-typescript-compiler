#include <stdio.h>

int main(int argc, char* argv[]) {
	FILE* fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("OTC > error: No such file exists as %s\n", argv[1]);
		return -1;
	}
	
 	return 0;
}
