#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
   
    int size, i, largest;
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    for(i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("The largest element in the array is: %d\n\n", largest);
    
    
    char str[200];
    int vowels = 0;
    
    printf("Enter a string: ");
    getchar(); 
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;
    
    for(i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
    }
    
    printf("The number of vowels in the string is: %d\n", vowels);
    
    return 0;
}
