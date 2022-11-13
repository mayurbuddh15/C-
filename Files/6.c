#include<stdio.h>

void main()
{
    FILE *fp = fopen("data.txt","w+");

    fseek(fp,0,SEEK_END);
    long int start;
    long int end;
    char tmp1,tmp2;
    for(start=0,end=ftell(fp)-1;start<end;start++,end--)
    {
        fseek(fp,start,SEEK_SET);
        tmp1=fgetc(fp);
  
        fseek(fp,end,SEEK_SET);
        tmp2=fgetc(fp);
        
        fseek(fp,start,SEEK_SET);
        fputc(tmp2,fp);
        fseek(fp,end,SEEK_SET);
        fputc(tmp1,fp);
    }       

}
