#include <stdio.h>            
//#include <stdlib.h>
int Input(int size, int a[]) 
{
int i;
	for(i=0; i<size; i++)
	scanf("%d",&a[i]);
	return size;
}
int find_max_array(int size, int a[])
{
	int max = a[0], i;
	for (i = 1; i < size; i++)
		if (max < a[i])
			max = a[i];
	return a[0]=max; 
}

int main()
{
	enum {size = 100};
	int a[size];
	Input(size, a);
	find_max_array(size, a);
	printf("%d ", *a);
	return 0;
}
