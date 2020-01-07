#include <stdio.h>
#include <stdlib.h>

//int main() {
		//Printing a for loop
	//int sum = 0;
	//for (int i = 1; i < 101; i++)
	//{
	//	printf("%d\n", i);
	//	sum = sum + i;
	//}
	//printf("%d\n", sum);
	

	//Printing a while loop
	//If print is after vs before, results will vary
	//int x = 0;
	//while (x < 11)
	//{
	//	/*if (x == 5) continue;*/
	//	printf("%d\n", x);
	//	x += 1;
	//}

	/*printf("__\n\n");
	do {
		x += 1;
		if (x == 5) break;
		printf("%d", x);

	} while (x < 11);

	system("pause");
	return 0;
}*/


//int sumoftwo(int a, int b); //PROTOTYPE

//int main(){
	/*int ab, be;
	

	printf("First num?");
		scanf("%d", &ab);
		printf("Second number?");
		scanf("%d", &be);



	sumoftwo(ab , be);


	system("pause");
}*/

//int sumoftwo(int a, int b) {
//	int total;
//	total = a + b;
//
//	printf("\n%d\n", total);
//	return total;
//
//}

int sumBetween(int a, int b); 

int main() { //Addition of the sum between two numbers
	int ay, beh;

	puts("First number?\n");
	scanf("%d", &ay);

	puts("Second number?\n");
	scanf("%d", &beh);

	sumBetween(ay, beh);
	system("pause");
}

int sumBetween(int a, int b) {
	int sum = 0;

	//for (int i = a ; i < (b + 1); i++);
	//sum = sum + i;
	for ( a; a <= (b+1); a++) {

		printf("%d\n",sum);
		sum = sum + a;
		
	}
	
	return sum;
}