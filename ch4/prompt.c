#include <stdio.h> #include <stdlib.h>

/* If we are compiling on Windows compile these functions */

#ifdef _WIN32

#include <string.h>

static char buffer[2048];

/* Fake readline function */
char *readline(char* prompt) {
    fputs("lispy> ", stdout);
    fgets(buffer, 2048, stdin);
    char *cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

/* Fake add_history function */
void add_history(char* unused){}

#endif

/* Linuxes */
#ifdef __linux__

#include <editline/readline.h>
#include <editline/history.h>

#endif


int main(int argc, char** argv) {
    
    /* Print version and exit information */
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* In a never ending loop */
    while(1) {
        
        char *input = readline("lispy> ");

        /* Add input to history */
        add_history(input);

        printf("No you're a %s\n", input);

        /* Free retrived input */
        free(input);
    }

    return 0;
}
