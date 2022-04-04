//#include "Student.h"
#include <stdio.h>
#include <string.h>

struct studentT {
	char name[64];
	int  age;
	int  grad_yr;
	float gpa;
} std1, std2;

struct Course {
	char name[32];
	int cnumber;
	struct studentT stdEnrolled[3];

} APS[10];


int main(void) {

	int a[10];

	struct {
		int pips;
		char suit;
	} deck[52];

	//struct ???? 
	deck[0].pips = 10;
	deck[0].suit = 'S';

	struct Course BTP;
	struct studentT  student1 = { "moona",20,2010,4.0 };
	student1.name[0] = 'B';
	student1.name[1] = 'r';
	student1.name[2] = 'i';
	student1.name[3] = 'a';
	student1.name[4] = 'n';

	char name[32];
	name[0] = 'k';
	std1.name[0] = 'g';
	APS[0].name[0] = 'A';



	struct studentT std;
	struct studentT BTP100[50] = { 0 };

	strcpy_s(BTP100[0].name, 13, "Simon Mosaso");
	BTP100[0].age = 21;
	BTP100[0].gpa = 3.00;
	BTP100[0].grad_yr = 2015;
	

	printf("%s %d %d %lf\n", BTP100[0].name, BTP100[0].age, BTP100[0].grad_yr, BTP100[0].gpa);



	//printf("%s",student1);
	/*
   (2) student1.grad_yr
   (3) student1.name
   (4) student1.name[2]
   (5) ipc144
   (6) ipc144[4]
   (7) ipc144[4].name
   (8)ipc144[4].name[5]*/

   //student1 = ipc144[0];

	printf("%s %d %d %lf %d\n", student1.name, student1.age, student1.grad_yr, student1.gpa, &student1);
	printf("%d\n", &student1.name);
	printf("%d\n", &student1.age);
	printf("%d\n", &student1.grad_yr);
	printf("%d\n", &student1.gpa);
	/*
	struct Course btp100, APS;

	//ipc144.cname = "IPC144NMM"; cannot assign string to declared char array
	strcpy_s(btp100.cname, 10, "IPC144NMM");
	btp100.cnumber = 100;
	btp100.stdEnrolled[0] = student1;

	printf("%s %d %s\n", btp100.cname, btp100.cnumber, btp100.stdEnrolled[0].name);

	APS = btp100; // copy data 
	printf("%s %d %s\n", APS.cname, APS.cnumber, APS.stdEnrolled[0].name);
	strcpy_s(APS.cname, 10, "APS");
	APS.cnumber = 122;
	printf("%s %d %s\n", APS.cname, APS.cnumber, APS.stdEnrolled[0].name);
	printf("%s %d %s", btp100.cname, btp100.cnumber, btp100.stdEnrolled[0].name);

	*/
	/*
	int a[3] = { 1,3,4 };
	int b[4];
	b[0]=a[2];
	printf("%d",b[0]); // what should print?

	//b=a; //allowed?
	*/
	return 0;

}