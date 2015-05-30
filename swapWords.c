/*
Reverse all the individual words in a string.
*/

#include <stdio.h>
#include <ctype.h>

void swapWords(char a[]){
	char tmp = 'a'; //used for swapping
	int front = 0, back = 0, //indecies that walk the array
		f = 0, b = 0; //used for swapping
	
	while(a[front] != 0) //stop if it's the end of the string
	{
		while(!isalnum(a[front])) //walk until you find the start of a word
		{
			front++;
		}
		back = front;
		while(isalnum(a[back+1])) //walk until you find the end of a word
			back++;
		f = front;
		b = back;
		while(f < b) //swap the word
		{
			tmp = a[f];
			a[f] = a[b];
			a[b] = tmp;
			f++;
			b--;
		}
		front = back + 1; //resume from the next character after the word
	}
}

int main(){
	
	char s1[] = "1234567890 1 12";
	char s2[] = " 123   ";
	char s3[] = "	  1234 ";
	char s4[] = "1";
	char s5[] = " ";
	char s6[] = "";
	
	printf(":%s:\n",s1);
	swapWords(s1);
	printf(":%s:\n\n",s1);
	
	printf(":%s:\n",s2);
	swapWords(s2);
	printf(":%s:\n\n",s2);
	
	printf(":%s:\n",s3);
	swapWords(s3);
	printf(":%s:\n\n",s3);
	
	printf("4:%s:\n",s4);
	swapWords(s4);
	printf("4:%s:\n\n",s4);
	
	printf("5:%s:\n",s5);
	swapWords(s5);
	printf("5:%s:\n\n",s5);
	
	printf("6:%s:\n",s6);
	swapWords(s6);
	printf("6:%s:\n\n",s6);
	return 0;
}
