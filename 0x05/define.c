#include <stdio.h>

// defines PI value to be 3.14 in the whole program
 #define PI 3.14

 int main()
{
 	float radius, area;
 	 		
 	printf("Enter radius of circle to find its area : ");
 	scanf("%f", &radius);
 					
 	// PI will be replaced by 3.14 in the below statement
 	area = PI * radius * radius; 						
	printf("Area of Circle : %0.2f\n", area); 						

	return 0;
}
