#include<stdio.h>
#include <stdlib.h>
#define size 10
int key;
int arr[size];
int init()
{   
    int i;
    for(i=0;i<size;i++)
        arr[i]=-1;
}

int insert(int num){
    key=num%size;
    if(arr[key]==-1){
        arr[key]=num;
        printf("INSERTED SUCCESSFULY.\n");
    }
    else{
        printf("COLLISION!!!\n");
    }
    
}

int del(int num){
    key=num%size;
    if(arr[key]==num){
        arr[key]=-1;
        printf("DELETED SUCCESSFULY.\n");
    }
    else{
        printf("NUMBER NOT FOUND!!!!\n");
    }
}


int find(int num){
    key=num%size;
    if(arr[key]==num){
        printf("ELEMENT FOUND\n");
    }
    else{
        printf("NUMBER NOT FOUNF!!!\n");
    }
}


int main()
{
     init();
     insert(11);
     insert(12);
     insert(14);
     insert(16);
     insert(21);
     insert(10);
     printf("\ninsertion completed.\n\n");
     del(10);
     del(24);
     del(12);
     printf("\ndelection completed.\n\n");
     find(11);
     find(12);
     find(14);
     find(16);
     find(10);
     printf("\nfinding completed.\n\n");
    
}
