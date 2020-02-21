#include<stdio.h>
int main()
{
	int arr[25],dup[25],n,i,j,cnt;
	printf("Enter The Array Length:");
	scanf("%d",&n);
	printf("\nEnter The Element in Array:");
	
	 for (i = 0; i < n; i++)
	 {
	 	scanf("%d",&arr[i]);
	 	dup[i]=-1;
	 }
	
    for (i = 0; i < n; i++)
	{	
	 	cnt=1;
	 	for (j = i+1; j < n; j++)
	 	{
	 		if(arr[i]==arr[j])
	 		{
	 			cnt++;		 //if in the array the next elements is same than cnt increment and that cnt used 
	 							//for that number that are repeated and it show how many time they are repeated .
	 			dup[j]=0;    //if in the array  next elements is same same then next elemnets put to 0 . 
	 		}
	 	}
		if(dup[i]!=0) //only for one position ...and if value =0 then don't put in dup .
		{
	 		dup[i]=cnt;
		}
	}
	for(i=0;i<n;i++)
	 	{
	 		
	 		 if (dup[i]>1)
	 		 {
	 		 	if(dup[i]%2==0)
	 		    printf("%d\t",arr[i]);
	 		 }	

	 	}

}

