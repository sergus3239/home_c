#include <stdio.h>            
//#include <stdlib.h>
int Input(int size, int a[]) 
{
int i;
	for(i=0; i<size; i++)
	scanf("%d",&a[i]);
	return size;
}
int is_two_same(int size, int a[])
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (a[i] == a[j])
				return 1;
		}		
	}
	return 0; 
}

int main()
{
	enum {size = 10};
	int a[size];
	Input(size, a);
	is_two_same(size, a)? printf ("YES") : printf ("NO");
	return 0;
}
