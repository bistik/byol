#include <stdio.h>

void hello_world_n_times(int n) {
    for (int i = 0; i < n; i++) {
        puts("Hello, world!");
    }
}

int main(int argc, char** argv) {

    for (int i = 0; i < 5; i++) {
        puts("Hello, world!");
    }

    hello_world_n_times(10);

    return 0;
}

