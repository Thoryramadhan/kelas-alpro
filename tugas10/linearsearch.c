#include <stdio.h>
#include <time.h>
#define SIZE 10000

size_t linearSearch(const int array[], int key, size_t size);
clock_t  start, end;

int main(void){
    int a[SIZE];

    for (size_t x =0; x < SIZE; ++x){
        a[x] = 2*x;
    }

    printf("Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    start=clock();
    size_t index = linearSearch(a, searchKey, SIZE);
    end = clock();

    double cpu_time_usd = ( (double) (end-start));


    if (index != -1){
        printf("Found value at index %ld\n", index);
    } else {
        puts("Value not found");
    }

    printf("Waktu yang diperlukan adalah %lf second", cpu_time_usd);
}

size_t linearSearch(const int array[], int key, size_t size) {
    for (size_t n = 0; n<size; ++n){
        if (array[n] == key) {
            return n;
        }
    }

    return -1;

}