void selectswap(int *m,int *i)
{
	int temp = *m;
	*m = *i;
	*i = temp;
}


void selection_sort(int arr[],int count)
{
	clock_t t;
	t = clock();
	int i,j,min_indx,counter;
	for(i=0;i<count-1;i++)
	{
		counter++;
		min_indx=i;
		counter++;
		for(j=i+1;j<count;j++)
		{
			counter++;
			if(arr[min_indx]>arr[j])
			{
				counter++;
				min_indx=j;
				counter++;
			}
		}
		counter++;
		counter++;
		selectswap(&arr[min_indx],&arr[i]);
	}
	counter++;
	printf("%ld",clock());
	t=t-clock();
	
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
//	printf("Time taken by selection sort is %f",time_taken);
	printf("\nCount taken by selection sort is %d",count);
}
