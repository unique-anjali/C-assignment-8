main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Monday:\"Happy Monday morning.May god's blessings be with you throughout the day\"");
			break;
		case 2:
			printf("Tuesday:\"I wish this tuesday morning brings you hopes and courage to face the problems in your life\"");
			break;
		case 3:
		    printf("Wednesday:\"Life is too short to regret on wednesday morning.Make it a blissful one.\"");
			break;
		case 4:
		    printf("Thursday:\"May this Thursday bring a new spark in the air,may you enjoy it to the fullest. Happy Thursday!\"");
			break;
		case 5:
		    printf("Friday:\"Be miserable or motivate yourself.Stay kind & spread happiness today.Have a great day!\"");
			break;
		case 6:
		    printf("Saturday:\"A great attitude is like a perfect cup of coffee-don't start your day without it.\"");
			break;
		case 7: printf("Sunday:\"Start your day by convincing yourself that today will be a wonderful day no matter what the odds are.\"");
		default:
		printf("invalid choice");
		break;	
	}
}
