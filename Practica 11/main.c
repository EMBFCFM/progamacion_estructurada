#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x);

int main() {
	int x=0;
	printf("Igrese un valor\n");
	scanf("%d",&x);
	int Ans=fibonacci(x)-fibonacci(x-1);
	printf("\n %d + %d =%d",Ans,fibonacci(x-1),fibonacci(x));
	return 0;
}

int fibonacci(int x){
	if (x==0){
		return 0;
	}else if(x==1){
		return 1;
	} else {
		return (fibonacci(x-1)+fibonacci(x-2));
	}
}
