#include <stdio.h>
typedef struct Inventory{
    int itm;
    char name[50];
    int rate;
    int qty;
} Inventory;
int main(){
    int i,s=0;
    Inventory list[5];
    for(i=0;i<5;i++){
        printf("-----------%d----------\n",i+1);
        printf("Enter the Item number: ");
        scanf("%d",&list[i].itm);
        printf("Enter the Name: ");
        scanf("%s",list[i].name);
        printf("Enter the Quantity: ");
        scanf("%d",&list[i].qty);
        printf("Enter the Rate: ");
        scanf("%d",&list[i].rate);
    }
    printf("\nItem Number\t\tName\t\tQty\t\tRate\n");
    for(i=0;i<5;i++){
        if(list[i].qty!=0){
            printf("%d\t\t\t%s\t\t%d\t\t%d\n",list[i].itm,list[i].name,list[i].qty,list[i].rate);
            s += list[i].qty * list[i].rate;
        }
    }
    printf("\t\t\t\t\tGrand Total:\t%d",s);
}