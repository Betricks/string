#include <stdio.h>
#include <stdlib.h>

/*
  this module contain  string manipulation .
	you can multiply string chars to any number .
example:
	input: cat * 3
	output: cat cat cat

	input: dog * 7
	output: dog dog dog dog dog dog dog

	input: zebra * 0
	output:   

*/

int main(int argc, const char* argv[]){
	if (argc < 2){
		printf("Usage: str, number\n");
		return 1;
	}

	int times = atoi(argv[2]);
	char* chars = malloc(strlen(argv[1]) * times);

	for (int i = 1; i <= times; i++){
		if ( i == 1){
			memcpy(chars, argv[1], strlen(argv[1]));
		}else{
			memcpy(chars + ((strlen(argv[1])  * i)  - strlen(argv[1])), argv[1], strlen(argv[1])); 
		}

	}

	printf("%s\n", chars);

	return 0;
}
