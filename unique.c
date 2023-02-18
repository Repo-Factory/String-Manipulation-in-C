/* 
    Students shall create a program in C which reads ASCII strings from the standard input 
until it reaches the EOF symbol. From the accumulated input, the program shall extract only its 
unique tokens, seperated by the space character, and send these to the standard output.

For example, if provided with a file containing a text document, it shall send to the 
standard output every unique word contained therein. 

The order the words appear in the 
output does not need to be sorted in any particular order. 

The program shall insert a space character between each output word and ignore line 
endings.

Program Name: unique
Command Line Args: none
Program Input: stdin
Program Output: stdout
Return: 0 on completion
Allowed Imports: Stdio.h
Example Use:
user@computer: $ ./unique<iamsam.txt */

#include <stdio.h>

/* ABCD ABCC ABDD AYHU ABCD 

open a file

read words from the file

determine if the word is unique or a duplicate

Add to an array of words if unique

Ignore if a duplicate
Print the array of unique words

*/

/* Constants */
int BUFFER_LIMIT = 100;
int UNIQUE_WORDS_LIMIT = 10000;

/* Program Flow */
char* fillBuffer(char* buffer, int limit);
void read_words (FILE *f);
int isUnique(char* word, char* uniqueWords);
    int strEqual(char* stringOne, char* stringTwo);
void addToArray(char* uniqueWords);

/* Helpers */




int main()
{
    char buffer[BUFFER_LIMIT];
    char uniqueWords[UNIQUE_WORDS_LIMIT];

    /* Scan the next word into buffer, if it's unique, place it in unique words */

     while (fscanf(stdin, " %100s", buffer) == 1) 
    {
        // puts(buffer);
        char* word = buffer;
        printf("%s", word);
        // if (isUnique(word, &uniqueWords))
        // {
        //     addToArray(uniqueWords);
        // }
    }





















































    while (fscanf(stdin, " %1000s", buffer) == 1) 
    {
        // puts(buffer);
        char* word = buffer;
        printf("%s", word);
        // if (isUnique(word, &uniqueWords))
        // {
        //     addToArray(uniqueWords);
        // }
    }

    read_words(stdin);

    return 0;
}

void read_words (FILE *f) {
    char buffer[BUFFER_LIMIT];
    /* assumes no word exceeds length of 1023 */
    while (fscanf(f, " %1023s", buffer) == 1) {
        puts(buffer);
    }
}




































































































































































































































































































































































































































































































































































































































































































































































































































































char* fillBuffer(char* buffer, int limit)
{
    int nextChar;
    int index = 0;

    while ((nextChar = getchar()) != EOF && index < limit) /* Use Standard getChar() to place stream into array */
    {
        buffer[index] = nextChar;
        ++index;
    }

    for (int i = 0; i < index; ++i)
        putchar(buffer[i]);
        putchar('\n'); 
    
    return buffer;
}


int strEqual(char* stringOne, char* stringTwo)
{
    // iterate through string, if a character differs return false
    while (*stringOne)
    {
        if (*stringOne != *stringTwo) { return 0; }
        stringOne++;
        stringTwo++;
    }
    return 1; // if end of string reached with no difference, return true
}