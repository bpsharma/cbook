#include<math.h>
#include<stdio.h>
struct Result{
	int square,cube;
	double sroot,croot;
};
struct Result multiresult(int n){
	struct Result r;
	r.square=n*n;
	r.cube=n*n;
	r.sroot=sqrt(n);
	r.croot=pow(n,1.0/3);
	return r;
}
int main(){
	int num=5;
	struct Result r=multiresult(num);
	printf("Square %d, Cube %d, Square Root %.2f Cube Root %.2f",r.square,r.cube,r.sroot,r.croot);
}

