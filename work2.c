#include<stdio.h>
int main()
{
    FILE *fp_m,*fp_b,*fp_e,*fp_s;
    char *math_file="math.txt";
    char *bangla_file="bangla.txt";
    char *english_file="english.txt";
    char *sum_file="sum.txt";
    char line1[30], line2[30],line3[30];
    int id,m,b,e,s,i;

    fp_m=fopen(math_file,"r");
    fp_b=fopen(bangla_file,"r");
    fp_e=fopen(english_file,"r");
    fp_s=fopen(sum_file,"w");

    for(i=0; i<10; i++)
    {
        fgets(line1, 30,fp_m);
        fgets(line2, 30,fp_e);
        fgets(line3, 30,fp_b);

        printf("Line:%s\n",line1);
        printf("Line:%s\n",line2);
        printf("Line:%s\n",line3);

        sscanf(line1,"%d %d",&id,&m);
        sscanf(line2,"%d %d",&id,&e);
        sscanf(line3,"%d %d",&id,&b);


        s=(m+b+e)/3;
        printf("%d %d %d %d\n",m,b,e,s);
        fprintf(fp_s,"%d %d\n",id,s);
    }

    fclose(fp_m);
    fclose(fp_b);
    fclose(fp_e);
    fclose(fp_s);


}
