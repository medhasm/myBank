#include <stdio.h>
#include "myBank.h"
#include <math.h>

int main(){
	char c;
printf("Transaction type?:");
while(scanf("%c",&c)==1){

if(c=='O'){
	 O();
printf("Transaction type?:");
}
if(c=='B'){
	 B();
printf("Transaction type?:");
}
if(c=='D'){
	 D();
printf("Transaction type?:");
}
if(c=='W'){
	 W();
printf("Transaction type?:");
}
if(c=='C'){
	 C();
printf("Transaction type?:");
}
if(c=='I'){
	 I();
printf("Transaction type?:");
}
if(c=='P'){
	 P();
printf("Transaction type?:");
}
if(c=='E'){
	 E();
return 0;
}

}
return 0;

}
