main()
{
	int n,n1,n2,ch;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
// menu 
printf("\n---------Menu----------\n");
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
printf("---------------------------");
printf("\nEnter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		n=n1+n2;
		printf("The addition of two numbers is %d\n",n);
		break;
	case 2:
		n=n1-n2;
		printf("The subtraction of two numbers is %d\n",n);
		break;
	case 3:
		n=n1*n2;
		printf("The multiplication of two numbers is %d\n",n);
		break;
	case 4:
		n=n1/n2;
		printf("The division of two numbers is %d\n",n);
		break;
	case 5:
		break;
		deafult:
			printf("Invalid choice");
			
		}
}
