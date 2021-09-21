#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool delim_character(char c);

int main(){
	//Assuming input will not be greater than 1000
	char input[1000];

	printf("Please enter the input string.\n$");

	fgets(input, 1000, stdin);
	printf("Your string is:%s\n", input);

	//TESTING CODE HERE
	//**/
	char tab = '\t';
	char space = ' ';

	printf("Tab is delim char:%d\nSpace is delim char:%d",
	delim_character(tab), delim_character(space));

	//**/
	return 0;
}

/*Return true (non-zero) if c is a whitespace character
	('\t or ' ').
	Zero terminators are not printable (therefore false) */
bool delim_character (char c){
	bool is_delim = false;
	
	//ascii codes for tab and space are 9 and 32 respectively
	if((c == 9) || (c == 32))
	is_delim = true;

	return is_delim;
}

/*Return true (non-zero) if c is a whitespace character
	(not tab or space).
	Zero terminators are not printable (therefore false) */
bool non_delim_character (char c){

}

/*Returns a pointer to the first character of the next
	space-separated word*/
char *word_start (char* str){

}

/*Returns a pointer to the first space character of the zero
	 terminated string*/
char *end_word (char* str){

}

//Counts the number of words or tokens
int count_tokens(char* str){

}

/*Returns a freshly allocated zero-terminated vector of freshly allocated
space-separated tokens from zero-terminated str.
For example, tokenize("hello world string") would result in:
	tokens[0] = "hello"
	tokens[1] = "world"
	tokens[2] = "string"
	tokens[3] = 0

*/
char *copy_str (char *inStr, short len){

}

char** tokenize (char* str){

}

void print_all_tokens(char** tokens){

}
