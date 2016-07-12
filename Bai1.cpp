#include <stdio.h>
#include <conio.h>
int isNguyenTo(int n);
int main(){
	int i = 0;
	int n = 0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	do{
		if(isNguyenTo(i)==1){
			printf("%d ",i);
		}
		i++;
	}while(i < n);
}
int isNguyenTo(int n){
	int result = 0;
	int count = 0;
	if(n == 0){
		result = 0;
	}else if(n == 1){
		result = 0;
	}else{
		for(int i = 1;i<=n;i++){
			if(n%i==0){
				count++;
			}
		}
		if(count == 2){
			result = 1;
		}
	}
	return result;
}
