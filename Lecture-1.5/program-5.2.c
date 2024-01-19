#include<stdio.h>

main()
{
	
	// Quastion - 2 :-
	
	
int b , hra , da , ta , Rupees;

printf("Enter your salary Value : ");
scanf("%d",&b);

printf("Enter your value of hra : ");
scanf("%d",&hra);

printf("Enter your value of da :");
scanf("%d",&da);

printf("Enter your value of ta :");
scanf("%d",&ta);


Rupees = b + ( hra * b / 100 ) + ( da * b / 100) + ( ta * b / 100 );

printf("gross salary by adding % Rupees : %d",Rupees);

}

