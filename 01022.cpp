#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//���~
    unsigned int  work_hours;//�u�@�ɼ�
    unsigned int  pay;//�~��

};
int salc(struct Sertivor *);  //�p���~�� 
void show(struct Sertivor *); //�C�X���G 
int main(void){

    int number;//��n�����
    int o;

    struct Sertivor sertivor[4]; //���c�}�C 

    printf("�аݦ��X�ӤuŪ��?:");
    scanf("%d", &number);

    for(o=0;o<number;++o){
        printf("�o�O��%d�����\n\n", o+1);
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
int salc(struct Sertivor *ser){ //�p���~�� 

    (ser->pay)=(ser->wage)*(ser->work_hours);

    return ser->pay;
}
void show(struct Sertivor *show){ //�C�X���G 

    printf("\n\n%s�����---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->work_hours);
    printf("PAY:%d\n",show->pay);
    printf("-------------\n");
}
