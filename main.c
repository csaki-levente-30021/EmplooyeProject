/*
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char* books[] = {"Gyuruk Ura", "Alchimistul", "Wall Stret", "The Walking Dead"};
    char* *ptr_adr[4];
    ptr_adr[0] = &books[0];
    printf("ptr_adr[0]: %s\n", *ptr_adr[0]);
    ptr_adr[1] = &books[1];
    printf("ptr_adr[1]: %s\n", *ptr_adr[1]);
    *ptr_adr[1] = "Learn C programming";
    printf("books[1]: %s\n\n", books[1]);
    ptr_adr[2] = &books[2];
    *ptr_adr[2] = "Learn JavaScript";

    for(int i = 0; i < 4; i++){
        printf("books[%d]: %s\n", i, books[i]);
    }


    return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>


int main ()
{
    char* vect[] = {"Economic", "Stanca", "Mihai-Eminescu", "Slavici"};
    char* *school[4];
    school[0] = &vect[0];
    printf("school[0]: %s\n", *school[0]);
    school[1] = &vect[1];
    printf("school[0]: %s\n", *school[1]);
    school[2] = &vect[2];
    printf("school[0]: %s\n", *school[2]);
    school[3] = &vect[3];
    printf("school[0]: %s\n\n", *school[3]);

    //modificare
    *school[0] = "Elena-Farago";
    *school[1] = "Kolcsey Ferenc";
    *school[2] = "Nicusor";
    *school[3] = "Tata";

    for(int i = 0; i < 4; i++){
        printf("%s \n", vect[i]);
    }printf("\n");

    school[0] = "Elena";
    school[1] = "Kolcsey";
    school[2] = "Nicu";
    school[3] = "Ta";
    for(int i = 0; i < 4; i++){
        printf("%s \n",school[i]);
    }



    return 0;
}
*/
//
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5


void function(int** arr, int value){
    *arr = (int*)malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        *(*arr + i) = value + i;
    }
}

int main()
{
    int* vect = (int*)malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        vect[i] = i + 1;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", vect[i]);
    }
    printf("\nVectorul modificat: \n");
    function(&vect, 5);
    for(int i = 0; i < 5; i++){
        printf("%d ", *(vect + i));
    }

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*fptr_func[3])(int, int);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}


/// SECOND REPO
int main()
{
    int a, b, choice, sum = 0;
    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);
    fptr_func fptr = {add, sub, mul};

    sum = (fptr[0])(a, b);
    printf("\nThe sum of additional: %d\n", sum);
    sum = fptr[1](a, b);
    printf("The sum of substraction: %d\n", sum);
    sum = fptr[2](a, b);
    printf("The sum of multiplication: %d\n", sum);



    return 0;
}

