#include <stdio.h>
#include <stdlib.h>
#include "./deps/hash/hash.h"
#include "./deps/mt19937ar/mt19937ar.h"



int main() {
    hash_t *hash_table = hash_new();
    char buffer[33];
    for (int i = 0; i < 1000; ++i) {
        int random_number = (int) genrand_int32();
        char* number_str = sprintf(buffer, "%d", random_number);
        hash_set(hash_table, strcat("test", number_str), number_str);
    }
    hash_each_key(hash_table,)

    printf("%s \r\n", (char *) hash_get(hash_table, "test"));
    return 0;
}