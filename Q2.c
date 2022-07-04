#include <stdio.h>
#include <ctype.h>
void Display(char ch){                  // Function declaration 
    switch (ch){                        // Switch to check ch
        case 'A': printf("Ada"); break;
        case 'B': printf("Basic"); break;
        case 'C': printf("C and C++, Cobol"); break;
        case 'D': printf("Dbase"); break;
        case 'F': printf("Fortran"); break;
        case 'G': printf("Golang"); break;
        case 'H': printf("Haskell"); break;
        case 'J': printf("Java, JavaScript"); break;
        case 'K': printf("Kotlin"); break;
        case 'M': printf("MATLAB"); break;
        case 'N': printf("NASM"); break;
        case 'P': printf("Python, PHP"); break;
        case 'R': printf("Ruby"); break;
        case 'T': printf("TypeScript"); break;
        default: printf("No language found");
    }
}
int main(){                             // main() method
    char ch;                            // Declaring variable ch
    printf("Enter the character: ");
    scanf("%c",&ch);                    // Taking char input from user
    Display(toupper(ch));               // Call by value
    return 0;
}