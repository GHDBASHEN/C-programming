#include<stdio.h>
int findRank(int avg);
int main(){
	int avg;
	printf("Insert Average:");
	scanf("%d",&avg);
	char grade=findRank(avg);
	printf("Rank:%c\n",grade);
	return 0;
}
int findRank(int avg){
	char  rank;
	if ((90<avg) && (avg<=100)){
		rank='A';
		}
	else if(70<avg && avg <89){
		rank='B';
	}
	else if(50<avg && avg<69){
		rank='C';
	}
	else if(30<avg && avg<49){
		rank='D';
	}
	else if(0<avg && avg<29){
		rank='F';
	}
	
	return rank;
}
