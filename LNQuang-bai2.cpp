#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float interest_rate,capital, interest;
	printf("Enter Capital Sum: \t");
	scanf("%f",&capital);
	printf("\nEnter Rate of Interest: \t");
	scanf("%f",&interest_rate);
	printf("\nEnter No of year: \t");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		interest = capital*(interest_rate/100);
		capital+=interest;
		interest=capital;
		printf("Year \t Interest \t Sum \n%d \t %f \t %f\n",i,interest,capital);
	}
	return 0;
}
