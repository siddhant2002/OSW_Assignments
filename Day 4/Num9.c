#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str[] ="ITER:IBCS;SOA:Pot*Hot";
char* token,*last;
token=strtok_r(str,":;*",&last);
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok_r(NULL,":;*",&last);
}
return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str[] ="ITER:IBCS;SOA:Pot*Hot";
char* token,*last; token=strtok_r(str,":;",&last);
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok_r(NULL,":;",&last);
}
return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str[] ="TOC;;PLC,USP;";
char* token,*last;
token=strtok_r(str,";",&last);
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok_r(NULL,";",&last);
}
return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str[]="CSE/CSIT//EEE/EC//MECH//CIVIL:MBA:MBBS";
char* token,*last;
token=strtok_r(str,":",&last);
while (token!=NULL){
printf("SubToken=%s\n",token);
token=strtok_r(NULL,":",&last);
}
return 0;
}