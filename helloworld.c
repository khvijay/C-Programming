    #include <stdio.h>
    // This programm display any 
    // argument that were passed to it

    int main(int argc, char** argv) {
        int i;
        for (i = 0; i < argc; i++) {
            printf("hello world ! argc=%d arg %d is %s \n", argc, i, argv[i]);
        }
        return 0;

    }
