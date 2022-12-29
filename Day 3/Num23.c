#include <stdio.h>
#include <string.h>
int main(){
    char code[50],warehouse[50],product[50],qualifiers[50];
    int i,j,k;
    printf("Enter the code\n");
    scanf("%s",code);
    for(i=0;i<strlen(code);i++)
    {
        if(code[i]>='0' && code[i]<='9')
        {
            break;
        }
    }
    for(j=i;j<strlen(code);j++)
    {
        if(code[j]>='A' && code[j]<='Z')
        {
            break;
        }
    }
    strcpy(warehouse,code);
    strcpy(product,code+i);
    strcpy(qualifiers,code+j);
    printf("Warehouse: %s\n",warehouse);
    printf("Product: %s\n", product);
    printf("Qualifiers: %s\n", qualifiers);
    return 0; 
}

Output
Enter the code
ATL1203S14 
Warehouse: ATL1203S14
Product: 1203S14
Qualifiers: S14