#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>
#include <stddef.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){

	uint32_t file1, file2, sum;
	FILE *first, *second;

	first = fopen(argv[1], "rb");
	second = fopen(argv[2], "rb");

	fread(&file1, sizeof(uint32_t), 1, first);
	fread(&file2, sizeof(uint32_t), 1, second);
	
	file1 = ntohl(file1);
	file2 = ntohl(file2);
	
	sum = file1 + file2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", file1, file1, file2, file2, sum, sum);

	fclose(first);
	fclose(second);
	
	return 0;
}
