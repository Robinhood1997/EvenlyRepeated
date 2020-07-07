import java.util.*;
class Repeated{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);		
		System.out.println("Enter The Range of Array:");
		int n=scan.nextInt();
		int arr[]=new int[n];
		int dup[]=new int[n];
		Arrays.fill(dup,-1);
		System.out.println("Enter Value in an Array:");
		for(int i=0;i<n;i++)
		{
			arr[i]=scan.nextInt();
		}
		
		
		for(int i=0;i<n;i++)
		{	
			int count=1;
			if(arr[i]>0)
			{
				for(int j=i+1;j<n;j++)
				{
					if(arr[i]==arr[j])
					{
						count++;
						arr[j]=0;
					}	
				}
			}
		dup[i]=count;	
		}
		
		for(int i=0;i<n;i++)
		{
			
			if((dup[i]>-1) && (dup[i]%2==0))
			System.out.println("The Evenly Repeated Element is:"+arr[i]);
		}
		
	}
}
