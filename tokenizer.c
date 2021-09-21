#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool delim_character (char c);
bool non_delim_character (char c);
char *word_start (char* str);
char *end_word (char* str);
//int count_tokens (char* str);
//char *copy_str (char *inStr, short len);
//char** tokenize (char* str);
//void print_all_tokens(char** tokens);

int main(){
	//Assuming input will not be greater than 1000
	char input[1000];

	printf("Please enter the input string.\n$");

	fgets(input, 1000, stdin);
	printf("Your string is:%s\n", input);

	//TESTING CODE HERE
	//**/
	
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
	bool is_non_delim = false;

	if((c < 33) || (c > 126)){
		if(delim_character(c) == false){
			if(c != 0){
				is_non_delim = true;
			}
		}
	}

	return is_non_delim;
}

/*Returns a pointer to the first character of the next
	space-separated word*/
char *word_start (char* str){
	char current = *str;
	int i = 0;

	while((delim_character(current) == true)||(non_delim_character(current) == true)){
		i += 1;
		current = *(str+i);
	}

	return (str+i);
}

/*Returns a pointer to the first space character of the zero
	 terminated string*/
char *end_word (char* str){
	char current = *str;
	int i = 0;

	while((delim_character(current) == false) && (non_delim_character(current) == false)){
		i += 1;
		current = *(str+i);
		//Check for zero terminator to avoid endless loop
		if(current == 0){
			return(str+i);
		}
	}

	return (str+i);
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
