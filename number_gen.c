
#include <stdio.h> 
sint main() 
{ 
	int roll_num; 
	char name[50]; 

	// taking input using scanf 
	scanf("Enter Roll No.: %d", &roll_num); 
	scanf("Enter Name: %s", name); 

	// printing output using printf 
	printf("Name is %s and Roll Number is %d", name, 
		roll_num); 

	return 0; 
}
