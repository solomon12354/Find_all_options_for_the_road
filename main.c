#include <stdio.h>
#include <stdlib.h>
int solutions(int x,int y,int length,int width){
    if(x>=length-1&&y>=length-1){
        return 1;
    }else{
        if(x>=length-1){
            return solutions(x,y+1,length,width);
        }else if(y>=width-1){
            return solutions(x+1,y,length,width);
        }else{
            return solutions(x,y+1,length,width)+solutions(x+1,y,length,width);
        }
    }
}
int main()
{
    int lengthnode,widthnode;
    printf("%s","How many nodes are on your row:");
    scanf("%d",&lengthnode);
    printf("How many nodes areindi on your column:");
    scanf("%d",&widthnode);
    if(lengthnode>widthnode){
        printf("%d\n",solutions(0,0,lengthnode,widthnode));
    }else{
        printf("%d\n",solutions(0,0,widthnode,lengthnode));
    }
    return 0;
}
