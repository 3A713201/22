#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//時薪
    unsigned int  work_hours;//工作時數
    unsigned int  pay;//薪水

};
int salc(struct Sertivor *);  //計算薪資 
void show(struct Sertivor *); //列出結果 
int main(void){

    int number;//有n筆資料
    int o;

    struct Sertivor sertivor[4]; //結構陣列 

    printf("請問有幾個工讀生?:");
    scanf("%d", &number);

    for(o=0;o<number;++o){
        printf("這是第%d筆資料\n\n", o+1);
        printf("pls entering employee id:");
        scanf("%s", sertivor[o].id);
        printf("pls entering employee name:");
        scanf("%s", sertivor[o].name);
        printf("pls entering employee wage: ");
        scanf("%d", &sertivor[o].wage);
        printf("pls entering employee work_hours:");
        scanf("%d", &sertivor[o].work_hours);

        salc(&sertivor[o]);
    }//end loop
    for(o=0;o<number;++o){
    	show(&sertivor[o]);
	}//end loop 
	
	return 0;

}
int salc(struct Sertivor *ser){ //計算薪資 

    (ser->pay)=(ser->wage)*(ser->work_hours);

    return ser->pay;
}
void show(struct Sertivor *show){ //列出結果 

    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->work_hours);
    printf("PAY:%d\n",show->pay);
    printf("-------------\n");
}
