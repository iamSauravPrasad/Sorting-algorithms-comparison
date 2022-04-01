void insertion_sort(int arr[],int n)
{
	clock_t t;
	t = clock();
	int i,j,temp,count;
	for(i=0;i<n;i++)
	{
		count++;
		temp=arr[i];
		count++;
		j=i-1;
		count++;
		while(j>=0 && temp <=arr[j])
		{
			count++;
			arr[j+1]=arr[j];
			count++;
			j--;
		}
		count++;
		arr[j+1]=temp;
	}
	t=t-clock();
//	printf("Time taken by selection sort is %f",t);
	printf("\nCount taken by insertion sort is %d",count);
}

