int sum(char ar[], int size){
	int i,s=0;
	for(i=0;i<size;i++)
		s=s+ar[i];
	return s;
}
int main(){
	char ar[]={'6','A','a','$','@'};
	printf("Sum of array is %d",sum(ar,5));
}


