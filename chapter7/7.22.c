int length(char *str){
	int i=0;
	
	while(str[i]) i++;
	
	return i;
}
int main(){
	char ar[]="Welcome to India";
	printf("Length is %d",length(ar));
}



