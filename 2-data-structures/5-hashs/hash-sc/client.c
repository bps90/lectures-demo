// Code adapted from 
// http://see-programming.blogspot.com/2013/05/chain-hashing-separate-chaining-with.html

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hashscLib.h"

int main() {

    int ch, key, age;
    char name[100];

    printf("Enter the hash table size:");
    scanf("%d", &M);
    printf("table size: %d", M);

    // create hash table with "n" no of buckets 
    hashTable = (struct hash *) calloc(M, sizeof(struct hash));
    
    while (1) {
        printf("\n1. Insertion\t2. Deletion\n");
        printf("3. Searching\t4. Display\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter the key value:");
            scanf("%d", &key);
            getchar();
            printf("Name:");
            fgets(name, 100, stdin);
            name[strlen(name) - 1] = '\0';
            printf("Age:");
            scanf("%d", &age);
            //inserting new node to hash table 
            insertToHash(key, name, age);
            break;

        case 2:
            printf("Enter the key to perform deletion:");
            scanf("%d", &key);
            // delete node with "key" from hash table
            deleteFromHash(key);
            break;

        case 3:
            printf("Enter the key to search:");
            scanf("%d", &key);
            searchInHash(key);
            break;
        case 4:
            display();
            display_clusters();
            break;
        case 5:
            exit(0);
        default:
            printf("U have entered wrong option!!\n");
            break;
        }
    }
    return 0;
}