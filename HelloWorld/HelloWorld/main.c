#include <stdio.h>
#include <stdlib.h>

//int main() {//int main to work in just numbers
//	printf("Hello World!!\n");
//	system("pause");
//	return 0;//unlike js, here we have to tell the computer to make a return
//}
//

//int main() {
//	/*char yourName[20]; thelast character of an array of a character, is a null character*/
//	int number = 10;//type of indeger 32bit data incuding negatives
//	char initial = 'a';//single characters are always indicated by single quotes
//	float pi = 3.14;//For Real numbers - 32bit
//	double coffee = 2.55;// this is real numbers- 64bits
//	printf("My integer is %d My char is %c My float is %.2f My double is %.4lf", number, initial, pi, coffee);
//	printf("The size of my number is %zu bytes\n", sizeof(number));
//	printf("The size of my initial is %zu bytes\n", sizeof(initial));
//	printf("the size of my pi is %zu bytes\n", sizeof(pi));
//	printf("The size of my coffee is %zu bytes\n", sizeof(coffee));
//	
//
//	//FORMATION OUTPUT
//	printf("This is \t for is\t tab\n");//Tab
//	printf("This is for Backspace\b\n");//Backspace
//	printf("This is for alert sound\a\n"); //Alert
//	system("pause"); // buit in 
//	return 0;
//}

void Hello();// Function prototype
void ageandname();
int main() {
	
	ageandname();

	system("pause"); // buit in inside the  <stdio.h>
	return 0;
}

void Hello() {//fucntion declaration
	puts("HI, I'm function");

}

void ageandname() {
	int age;
	char name[20];
	printf("Hello! What is your name?\n");
	scanf("%s", &name);

	printf("Hello %s , How old are you?\n", name);
	scanf("%d", &age);
	printf("Dear %s, you are %d years old", name, age);
}
