#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

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
