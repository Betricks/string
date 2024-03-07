#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  This  module contains the functionality to concatinate two strings.
*/


int main(int argc, char* argv[]){
	if (argc < 2){
	   printf("provide two strings to concatinate\n");
	   return 1;
	}else{
	int length = strlen(argv[1]) + strlen(argv[2]);
	char* chars = malloc(length + 2);
	memcpy(chars, argv[1], strlen(argv[1]));
	memcpy(chars + strlen(argv[1]), argv[2], strlen(argv[2]));

	printf("%s\n", chars);
      }
}
