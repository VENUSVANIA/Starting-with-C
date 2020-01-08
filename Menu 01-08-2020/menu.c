#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>// Library needed to use * bool  *
#include <math.h>//To use math related things

//void isRain();

void bmenu();

int main() {
	
	
	
	
	//isRain();
	bmenu();

	_Bool standardBool = 1;  //C standard includes teh datatype _Bool with the value
	printf("This is the standard Bool defines as true %d\n", standardBool);

	bool librarBool = false; // at preprocessor time, bool, true and false are replaced
	printf("This is standard Bool defined as false %d\n", librarBool);



	system("pause");
	return 0;
}


//void israin() {
//int x;
//
//	printf("is it raining\n yes-1\n no-2\n live in vancouver-3?");
//	scanf("%d", &x);
//
//	if (x == 1) {
//		printf("take the darn umbrella");
//	}
//	else if (x == 2) {
//		printf("don't take your umbrella");
//	}
//	else if (x == 3) {
//		printf("always take");
//	}
//	else {
//		printf("please enter valid input\n");
//	}
//}

void bmenu() {

	int choice;
	printf("******************\n");
	printf("----MENU----\n");
	printf("******************\n");
	printf("What will you choose?\n Option 1\n Option 2\n Option 3\n Option 4\n Exit \n");
	scanf("%d", &choice);


	switch (choice)
	{
	case 1:
		printf("You Chose 1!!\n");
		bmenu();


	case 2:
		printf("You Chose 2, loser haha!\n");
		bmenu();
		break;
	case 3:
		printf("You Chose 3, really?\n");
		bmenu();
		break;

	case 4:
		printf("You have chosen 4! Right on!\n");
		bmenu();
		break;
	default:
		exit(0);
		break;
	}
}