#include <stdio.h>
#include "./deps/hash/hash.h"

int main() {
    hash_t * hash_table = hash_new();
    hash_set(hash_table,"test","1");
    printf("%s \r\n", (char *) hash_get(hash_table, "test"));
    return 0;
}