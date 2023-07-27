#include<stdio.h>
#include<stdlib.h>

int base(int);

main()
{
	int arr[500],i;
	int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,ten=0;
	printf("\nrandom numbers ->\n");
	for(i=0;i<500;i++)
	{
		arr[i]=rand()%999;
		printf("%d ",arr[i]);
	}
	printf("\nrandom numbers base ->\n");
	for(i=0;i<500;i++)
	{
		if(base(arr[i])==1)
		two++;
	
	 	if(base(arr[i])==2)
		three++;
		
		if(base(arr[i])==3)
		four++;
		
		if(base(arr[i])==4)
        five++;
		
		if(base(arr[i])==5)
		six++;
		
		if(base(arr[i])==6)
		seven++;
		
		if(base(arr[i])==7)
		eight++;
		
		if(base(arr[i])==8)
		nine++;
		
		if(base(arr[i])==9)
		ten++;
	}
	
	int b[9]={two,three,four,five,six,seven,eight,nine,ten};
	int s;
	for(i=0;i<9;i++)
	
	{    printf("base %d :-",i+2);
	    for(s=0;s<b[i];s++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}
	for(i=0;i<9;i++)
	printf("%d ",b[i]);
return 0;
}

int base(int n)
{
	int i,r,m=1;
	while(n)
	{
		r=n%10;
		if(m<r)
		m=r;
		n=n/10;
	}
	return m;
}
