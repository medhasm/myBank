#include<stdio.h>
#include "myBank.h"
#define Counter 50
#define ROW_size 2
#define COL_size 50
#include <math.h>

double  BA[COL_size][ROW_size]={ 0 };
int Account_Number=0;
void O(){
	double Ammount;
printf("Ammount?: ");
	if(scanf("%lf",&Ammount)!=1){
		printf("error in getting ammount\n");
		return ;
	}
if(Ammount<0){
printf("cant enter an negative number\n");
return ;
}
	if(Account_Number>50){
		printf("there is no more place for more account\n");
		return ;
	}
	if(Account_Number<=50){ 
		int i;
	for(i=0;i<Counter ;i++){
			if(BA[i][1]==0){
				Ammount = (int)(Ammount*100);
				Ammount /= 100;
				BA[i][0]=Ammount;
				BA[i][1]=1;
				Account_Number++;
				
				
				printf("The Account Number is : %d \n  ",901+i);
			 return ;
				
		}
	}
}

return ;
}
void B(){
int AccountN;
printf("Account number?: ");
	if(scanf("%d",&AccountN)!=1){
		printf("error in getting account number\n");
		return ;
	}
	int C;
	C=((AccountN)%100)-1;
	if(BA[C][1]==0){
		printf("the Account is Closed error\n");
		return ;
	}
	printf("the Balance is :%.2f \n:",BA[C][0]);
return;
}

void D(){
	int AccountN;
	double Ammount;
	printf("Account number?:");
	if(scanf("%d",&AccountN)!=1){
		printf("error in getting account number\n");
		return ;
	}
	printf("Ammount?: ");
	if(scanf("%lf",&Ammount)!=1){
		printf("error in getting ammount\n");
		return ;
	}
if(Ammount<0){
printf("cant enter an negative number \n");
return;
}
	
	if(AccountN>=901 && AccountN<=950){
		int C;
		C=(AccountN%100)-1;
		if(BA[C][1]==0){
			printf("bankaccont is closed\n");
			return ;
		}
	BA[C][0]=BA[C][0]+Ammount;
		return ;
	}
	printf("Account number not available\n");
return;
}
	void W(){
			int AccountN;
	double Ammount;
	printf("Account number?: ");
	if(scanf("%d",&AccountN)!=1){
		printf("error in getting account number\n");
		return ;
	}
	printf("Ammount?:");
	if(scanf("%lf",&Ammount)!=1){
		printf("error in getting ammount\n");
		return ;
	}
if(Ammount<0){
printf("cant enter an negative number \n");
return;
}
	if(AccountN>=901 && AccountN<=950){
		int C;
		C=AccountN%100-1;
		if(BA[C][1]==0){
		printf("the Account is Closed error\n");
		return ;
	}
	if(BA[C][0]<Ammount){
		printf("there is no enough money in the account\n");
		return ;
	}
	BA[C][0]=BA[C][0]-Ammount;
	printf("the Balance is :%.2lf \n:",BA[C][0]);
		return ;
		}
		printf("Account number not available\n");
return;
}
void C(){
	int AccountN;
	int C;
printf("Account number?:");
	if(scanf("%d",&AccountN)!=1){
		printf("error in getting account number\n");
		return ;
	}
	C=(AccountN%100)-1;
	if(BA[C][1]==0){
		printf("the account is already closed\n");
	}
	if(AccountN>=901 && AccountN<=950){
	BA[C][0]=0.0;
	BA[C][1]=0;
	Account_Number--;
	return ;
	}
	printf("Account number not available\n");
return;
	
}
void I(){
	double interest_rate;
printf("enter interestRate:");
	if(scanf("%lf",&interest_rate)!=1){
		printf("error in getting interest_rate\n");
		return ;
	}
	int i;
	double V;
	for(i=0;i<Counter;i++){
		if(BA[i][1]==1){
			V=(BA[i][0]*interest_rate)/100;
		BA[i][0]=BA[i][0]+V;
		}
	
}
return ;
}
void P(){
	int i;
	for(i=0;i<Counter;i++){
		if(BA[i][1]==1){
			printf("the balance in account number : %d is :%.2lf \n",901+i,BA[i][0]);
	}

}
return;
}
void E(){
	int i;
	for(i=0;i<Counter;i++){
		BA[i][0]=0;
		BA[i][1]=0;
		
	}
return ;
}
	
