#include <stdio.h>

int main(){
	int a, total=0;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		total = i*i + total;
	}
	printf("%d", total);
}
