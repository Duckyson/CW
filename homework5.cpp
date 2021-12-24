#include <stdio.h>
#include<string.h>
int main()
{
    char ress[2048],ch[2]=",",*ret;
    int a[1024],b[1024],i=0;
    int x, y;
    strcpy(ress,"3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90");
    ret=strtok(ress,ch);
    while (ret!=NULL){
    sscanf(ret,"%dx%d",&a[i],&b[i]);
    i++;
    ret=strtok(NULL,ch);
    }
    scanf("%d %d", &x, &y);
    for(i=0;i<30;i++){
        if(a[i]*b[i]<x*y){
            if((x*y-a[i]*b[i])>a[i-1]*b[i-1]-x*y){
                x=a[i-1];y=b[i-1];
            }else{
                x=a[i];y=b[i];
            }
            break;
        }else if(i==29){
            x=a[i];y=b[i];
        }
    }

    printf("选中的分辨率是%dx%d\n",x,y );
    return 0;
}
