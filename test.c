#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
#include "rbt.h"

static void print_char(char *key) {
    printf("%s\n", key);
}

int main(void) {
    rbt r = rbt_new();
    char word[256];
    char op;
    
    /* We must have a space before the %c */
    while (2 == scanf(" %c %255s", &op, word)) {
        if ('+' == op) {
            r = rbt_insert(r, word);
        } else if ('-' == op) {
            r = rbt_delete(r, word);
        } else if ('?' == op) {
            printf("%d %s\n", rbt_search(r, word), word);
        } else if ('#' == op) {
            rbt_preorder(r, print_char);
        }
    }
    rbt_free(r);
    return EXIT_SUCCESS;
}