#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

int main(){
        char str[100], ho[20], ten[20], tenDem[40], temp[100];
        int d1, d2,j,t;
        
        printf("Nhap Ho Ten cua ban:");
        gets(str);
        int nLen = strlen(str);
        // xoa dau cach dau` chuoi
        while(str[0]==' '){
                strcpy(str,&str[1]);     
        }
        // xoa dau cach cuoi chuoi 
        while(str[nLen-1] == ' '){
                nLen--;         
                str[nLen]=0;
        }
        // xoa dau cach giua chuoi 
        for(int i=0;i<nLen;i++) {
            if(str[i]==' ' && str[i+1]==' ') {
                for(int j=i;j<nLen;j++) {
                    str[j]=str[j+1];    
                }
                i--;    
            }
        }
        printf("\n Chuoi sau khi Chuan hoa: %s",str);
        getch();
        //strcpy(temp,str);
        
        //Lay ho
        for(int i=0;i<nLen;i++){
            ho[i]=str[i];
            if(str[i] == ' ') {
                d1=i; 
                break;
            }
        }
        printf("\n Ho:%s",ho);   
        getch();
        
       // lay  so ky tu cua ten
    
        for(int i=nLen-1;i>0;i--)
        {
             if(str[i]==' ') {
                d2=i; 
                break;
             }
        }
        // them cac ky tu cua ten vao mang
        
        for(int i=d2+1, j=0;i<nLen;i++,j++){
            if(str[i]!=0){
                ten[j]=str[i];
            }
            j++;                 
        }
        
        //printf("\n%d",d2);
        printf("\n Ten:%s",ten);
        
        //for(int i=0;i<strlen(ten);i++) printf("\n%c \t", ten[i]);
        getch();
        for(int i=d1+1,t=0;i <d2; i++){
                tenDem[t]=str[i];
                t++;
        }
        printf("\n Ten Dem:%s",tenDem);
        getch();
        
        printf("\n Ho cua ban la: %s", ho);
        printf("\n Ten dem cua ban la: %s", tenDem);
        printf("\n Ten cua ban la: %s", ten);
            
        getch();
    }
