#include <stdio.h>

main() {
	
	int num; 
	int a;
    int b = 0;
	int x = 0;
	printf("Enter a number :");
	scanf("%d", &num);
    while (num>9){
        while(num>0){
            a = num%10;
            num = num/10;
            b = b+a;
        }
        num = b;
        b = 0;
        x++;
    }
    printf ("%d ", num );
} 
