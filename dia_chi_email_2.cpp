#include<stdio.h>
#include<string.h>
int main(){
    int test,so=0,n=1;
    scanf("%d",&test);
    scanf("\n");
    while(test--){
        int luu=0;
        char s[100],x[100];
        char dem[100][100],danhdau[100][100];
        gets(s);
        char *p=strtok(s," ");
        while(p!=NULL){
            for(int i=0;i<strlen(p);i++){
                if(p[i]>='A'&&p[i]<='Z') p[i]+=32;
            }
            strcpy(dem[luu++],p);
            p=strtok(NULL," ");
        }
        strcpy(danhdau[so],dem[luu-1]);
        int tmp = strlen(dem[luu-1]);
        danhdau[so][tmp++] = dem[0][0];
        for(int i=1;i<luu-1;i++){
            danhdau[so][tmp++] = dem[i][0];
        }        
        if(so==0){
             printf("%s@ptit.edu.vn",danhdau[0]);
             continue;
        }
        int i=so-2;
        while(i!=so-1){
            if(strcmp(danhdau[so-1],danhdau[i])==0) n++;
            i++;
        }
        if(n>=2) printf("%s%d@ptit.edu.vn",danhdau[so-1],n);
        else printf("%s@ptit.edu.vn",danhdau[so-1]);
        printf("\n");
    }
    return 0;
}
