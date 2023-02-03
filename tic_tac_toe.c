#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("----IT'S A 'TIC-TAC-TOE' GAME----\nplayer-1 : O\nplayer-2 : X\nlet's begin players...\n^");
    char a[3][3]={'_','_','_','_','_','_','_','_','_'};
    int i,j,o,x,m,n,t=1,dashf;
    scanf("\n");
    while(t) {         
        scanf("%d%d",&m,&n);
        if(a[m-1][n-1]=='_') {
            if(t%2==0)
                a[m-1][n-1]='O';
            else
                a[m-1][n-1]='X';
        }
        else {
            printf("enter valid coordinates...\n");
            t--;
        }
        for(i=0;i<3;i++) {
            o=0;
            x=0;
            for(j=0;j<3;j++) {
                if(a[i][j]=='O') {
                    o++;
                    if(o==3) {
                        printf("***player-1 wins!\n");
                        exit(0);
                    }
                }
                else if(a[i][j]=='X') {
                    x++;
                    if(x==3) {
                        printf("***player-2 wins!\n");
                        exit(0);
                    }   
                } 
            }
        }
        o=0;x=0;
        for(i=0;i<3;i++) {
            o=0;
            x=0;
            for(j=0;j<3;j++) {
                if(a[j][i]=='O') {
                    o++;
                    if(o==3) {
                        printf("***player-1 wins!\n");
                        exit(0);
                    }
                }
                else if(a[j][i]=='X') {
                    x++;
                    if(x==3) {
                        printf("***player-2 wins!\n");
                        exit(0);
                    }   
                } 
            }
        }
        x=0;o=0;
        for(i=0;i<3;i++) {
            if(a[i][i]=='O') {
                o++;
                if(o==3) {
                    printf("***player-1 wins!\n");
                    exit(0);
                }
            }
            else if(a[i][i]=='X') {
                    x++;
                if(x==3) {
                    printf("***player-2 wins!\n");
                    exit(0);
                }   
            } 

        }
        o=0;x=0;
        for(i=0;i<3;i++) {
            if(a[i][2-i]=='O') {
                o++;
                if(o==3) {
                    printf("***player-1 wins!\n");
                    exit(0);
                }
            }
            else if(a[i][2-i]=='X') {
                x++;
                if(x==3) {
                    printf("***player-2 wins!\n");
                    exit(0);
                }   
            } 
        }
        dashf=0;
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                if(a[i][j]=='_')
                    dashf++;
                printf(" %c ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
        if(dashf==0) {
            printf("----IT'S TIE----\ntry again...");
            exit(0);
        }
        t++;
    }
    
    return 0; 
}