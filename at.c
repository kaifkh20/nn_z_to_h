#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void){
	int n;
	scanf("%d",&n);
	int maxa = INT_MIN;
	int maxb = INT_MIN;
	for(int i=0;i<n;++i){
		int mt;
		scanf("%d",&mt);
		if(mt>maxa) maxa=mt;
		//scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i){
		int mt;
		scanf("%d",&mt);
		if(mt>maxb) maxb=mt;
		//scanf("%d",&a[i]);
	}

	printf("%d",maxa+maxb);
}
