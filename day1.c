#include <stdio.h>
#include <stdbool.h>
int main(){


int age = 21; //integer
float gpa = 2.05; //floating point
char grade = 'C'; //single character
char name[] = "Tims"; //array of characters
float c = 3.141592; // %f
double d = 3.141592653589793; //more precise than float %lf

bool e = true; //%d

char f = 100; //(-128 to +127) %d or %c
unsigned char g = 255; //(0 to +255) %d or %c

short int h = 32767;  //(-32768 to +32767)%d
unsigned short int i = 65535; //(0 to +65535)%d

int j = 2147483647; //(-2147483648 to +2147483647)%d
unsigned int k = 4294967295; //(0 to +4294967295)%u

long long int l = 9223372036854775807;  //(-9 quintillion to +9 quintillion)%lld
unsigned long long int m = 18446744073709551615U; //(0 to +18 quintillion)%llu 


printf("Hello %s\n", name);
printf("You are %d years old", age);
printf("Your average grade is %c\n", grade);
printf("Your gpa is %f\n", gpa);
printf("%f\n", c); //float
printf("%lf\n", d); //double
printf("%d\n", e); //boolean
printf("%c\n", f); //character
printf("%d\n", f); //integer
printf("%c\n", g); //character
printf("%d\n", h); //integer
printf("%d\n", i); //unsigned short int
printf("%d\n", j); //integer
printf("%u\n", k); //unsigned int
printf("%lld\n", l); //long long int
printf("%llu\n", m); //unsigned long long int

return 0;


}
