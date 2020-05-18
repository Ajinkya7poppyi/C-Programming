// C Program To Copy A Given Number of Characters from Given Index
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*define true and false*/
#define false 0
#define true 1
typedef int bool;

#define NULLCHAR    '\0'
#define BUFFERSIZE  50
#define ZERO        0

/* Copy one string to other with given inde and number of characters*/
bool copy_string(const char* srcString, int indexString, int numChar, char* dstString)
{
	/*Source and destination string cloned pointers*/
	char* _dst = dstString;
	const char* _src = srcString + indexString - 1;
	bool status= true;
	 
	while(numChar > 0)
	{
		*_dst++ = *_src++;
		numChar--;
	}
	return status;
}	

/*Main loop of program*/
int main()
{
	/*Input Strings for concatenating*/
	char* input_string=(char*) malloc(BUFFERSIZE * sizeof(char));
	char* dest_string=(char*) malloc(BUFFERSIZE * sizeof(char));
	int char_idx;
	int char_number;
	char state_continue;

	while(true)
	{
		memset(input_string, ZERO, sizeof(char)* BUFFERSIZE);
		memset(dest_string, ZERO, sizeof(char)* BUFFERSIZE);
		printf("Please Enter String:");
		/*Get characters from user*/
		if(NULL == gets(input_string))
		{
			printf("Error Occurred While Reading String\n");
		}
		
		printf("Please Enter Character Index");
		/*Get character index from user*/
		if(0 == scanf("%d", &char_idx))
		{
			printf("Error Occurred While Reading Character Index\n");
		}
		
		printf("Please Enter Number of Character To Copy:");
		/*Get character number from user*/
		if(0 == scanf("%d", &char_number))
		{
			printf("Error Occurred While Reading Number of Character To Copy\n");
		}
		
		int input_length = strlen(input_string);
		printf("Length %d\n",input_length);
		if(input_length >= char_idx)
		{
			if(input_length <= (char_idx + char_number))
			{
				char_number = input_length - char_idx;
			}
			copy_string(input_string, char_idx, char_number, dest_string);
			printf("Original String is: %s\n", input_string);
			printf("Copied String is: %s\n", dest_string);
		}
		else
		{
			printf("Index to copy Exceeeds the size of string\n");
		}	
		
		printf("Do You Want To Continue(Y/N):");
        if(0 == scanf(" %c", &state_continue))
        {
            printf("Error Occurred While Reading Number of Character To Copy\n");
        }

        /*Check if user wants to exit*/
        if((state_continue == 'N') || (state_continue == 'n'))
        {
            break;
        }
	}
}