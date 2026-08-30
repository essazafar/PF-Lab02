#include <stdio.h>

int main()
{
	char myChar = 'M'; 
	int myInt = 42;
	float myFloat = 3.1411590;
	double myDouble = 98.765432;
	
	
	printf("---------------------------------------------------------\n");
	printf("Type Name\t Variable Value \t Size in Memory\n");
	printf("---------------------------------------------------------\n");
    printf("char\t\t    %c\t\t          %zu byte(s)\n",myChar,sizeof(char));
    printf("int\t\t    %d\t\t          %zu byte(s)\n",myInt,sizeof(int));
    printf("float\t\t    %f\t\t  %zu byte(s)\n",myFloat,sizeof(float));
    printf("double\t\t    %.6f\t\t  %zu byte(s)\n", myDouble, sizeof(double));
      
      
     printf("-------------------------------------------------------\n");
        	return 0;
}
