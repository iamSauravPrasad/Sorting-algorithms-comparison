#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selectionsort.h"
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
	for(i=0;i<n;i++)
	{
		printf("\nValue at %d",arr[i]);
	}
}

int random(int arr[])
{
	int n,i;
	printf("Enter the total numbers of elements you want to enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
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
		printf("\nenter the value at %d",i);
		scanf("%d",&arr[i]);
	}
	display(arr,n);
	return n;
}

int main()
{
	int arr[MAX],n,choice;
	n = random(arr);
	while(1)
	{
		printf("\n1.Create an Array\n2.Generate a random array\n3.Generate a random array of ascending order\n4.Generate a random array of descending array\n5.Display Array\n6.Selection Sort\n7.Insertion Sort\n8.Bubble Sort\n9.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				n=input(arr);
				break;
			case 2:
				n=random(arr);
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
				selection_sort(arr,n);
				break;
			case 7:
				insertion_sort(arr,n);
				break;
			case 8:
				bubble_sort(arr,n);
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
