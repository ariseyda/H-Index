#include<stdio.h>

//H-Index

/*In academia, the h-index is a metric used to calculate the impact of a researcher's papers. It is calculated as follows:

A researcher has index h if at least h papers have at least h citations each. If there are multiple h satisfying this formula, the maximum is chosen.

For example, suppose a researcher has these number of citations of each paper: [4, 3, 0, 1, 5]. Then the h-index would be 3, since the researcher has 3 papers with at least 3 citations.

Given a list of paper citations of a researcher citations, calculate their h-index.*/

int main(){
	
	int i,k,size,count=0;
	
	printf("Enter number of paper:");
	scanf("%d",&size);
	
	int paper[size];
	printf("Enter numbers of citations of each paper:");
	for(i=0;i<size;i++){
		scanf("%d",&paper[i]);
	}
	
	printf("[");
	for(i=0;i<size;i++){
		printf("%d",paper[i]);
		if(i<size-1){
			printf(",");
		}
	}
	printf("]");
	
	for(k=size;k>=0;k--){
		for(i=0;i<size;i++){
			if(paper[i]==k||paper[i]>k){
				count++;
			}
		}
		if(count==k){
			break;
		}
		else{
			count=0;
		}
	}
	
	printf("\n%d",count);
	
	
	
	
	
	
	
	
	
	return 0;
}
