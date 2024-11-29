#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int*ptr=arr;
	for(int i=0;i<5;i++){
		printf("element %d:%d\n",i+1,*(ptr+1));
	}
	return 0;
}
