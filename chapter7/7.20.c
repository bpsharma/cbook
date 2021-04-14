int sum(int ar[], int size){
	int i,s=0;
	for(i=0;i<size;i++)
		s=s+ar[i];
	return s;
}
int main(){
	int ar[]={6,7,8,9,10};
	printf("Sum of array is %d",sum(ar,5));
}

