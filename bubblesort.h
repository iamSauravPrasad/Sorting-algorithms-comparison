void bubbleswap(int *m,int *i)
{
	int temp = *m;
	*m = *i;
	*i = temp;
}

void bubble_sort(int arr[],int n)
{
	clock_t t;
	t = clock();
	int i,j,count;
	for(i=0;i<n;i++)
	{
		count++;
		for(j=0;j<n-i-1;j++)
		{
			count++;
			if(arr[j]>arr[j+1])
			{
				count++;
				bubbleswap(&arr[j],&arr[j+1]);
				count++;
			}
		}
		count++;
	}
	count++;
	t=t-clock();
//	printf("Time taken by selection sort is %f",t);
	printf("\nCount taken by bubble sort is %d",count);
}
