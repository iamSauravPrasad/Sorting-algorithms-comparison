#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "insertionsort.h"
#include "bubblesort.h"
#include "selectionsort.h"

#define MAX 30

void swap(int *m,int *i)
{
	int temp = *m;
	*m = *i;
	*i = temp;
}

void display(int arr[],int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int randoms(int arr[])
{
	int n,i;
	printf("Enter the total numbers of elements you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%20;
	}
	display(arr,n);
	return n;
}

int random_acc(int arr[])
{
	int n,i,temp;
	printf("Enter the total numbers of elements you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp=rand()%100;
		if(temp >= arr[i-1])
		{
			arr[i]= temp;
		}
		else
		{
			i--;
		}
	}
	display(arr,n);
	return n;
}


int random_desc(int arr[])
{
	int n,i,temp;
	printf("Enter the total numbers of elements you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp=rand()%1000;
//		printf("%d",temp);
		if(i==0)
		{
			arr[i]= temp;
		}
		else if(temp <= arr[i-1])
		{
			arr[i]= temp;
		}
		else
		{
			i--;
		}
	}
	display(arr,n);
	return n;
}

int input(int arr[])
{
	int n,i;
	printf("Enter the total numbers of elements you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\narr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	display(arr,n);
	return n;
}

int main()
{
	int arr[MAX],arr2[MAX],arr3[MAX],arr4[MAX],n,choice,i;
	while(1)
	{
		printf("\n\n1.Create an Array\n2.Generate a random array\n3.Generate a random array of ascending order\n4.Generate a random array of descending array\n5.Display Array\n6.Selection Sort\n7.Insertion Sort\n8.Bubble Sort\n9.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				n=input(arr);
				break;
			case 2:
				n=randoms(arr);
				break;
			case 3:
				n=random_acc(arr);
				break;
			case 4:
				n=random_desc(arr);
				break;
			case 5:
				display(arr,n);
				break;
			case 6:
				for(i=0;i<n;i++)
					arr2[i]=arr[i];
				selection_sort(arr2,n);
				display(arr2,n);
				break;
			case 7:
				for(i=0;i<n;i++)
					arr3[i]=arr[i];
				insertion_sort(arr3,n);
				display(arr3,n);
				break;
			case 8:
				for(i=0;i<n;i++)
					arr4[i]=arr[i];
				bubble_sort(arr4,n);
				display(arr4,n);
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("\nInvalid Input !!\nTry Again !!");
		}
	}
	return 0;
}
