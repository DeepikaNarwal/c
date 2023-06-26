#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <graphics.h>
int input;
void sps(){
	
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(1, 30, 300, 200);
	
    printf("\t\t\t\t\n\n\n\nLet's play ROCK PAPER SCISSORS\n\n\n\n\nEnter the any given number :-\n1 = Rock\t\t2\n = Paper\t\t3\n = Sciosser");
    int num,com_s=0;
    srand(time(0));
    num=rand()%9+1;
    char c_mark;
    
    if(num>=1 && num<=3){
        c_mark='R';
    }
    else if(num>3 && num<=6){
        c_mark='P';
    }
    else {
        c_mark='S';
    }
    
    int draw=0;
    int player=1,p_s=0;
    char arr[]={'R','P','S'};
    char temp;
    for(int i=0;i<3;i++){
    printf("\nChoice : ");
    scanf("%d",&input);
    if(input==1){
        temp=arr[input-1];
    }
    else if(input==2){
        temp=arr[input-1];
    }
    else if(input==3){
        temp=arr[input-1];
    }
    else {
        printf("Invalid input !\n");
        system("clear");
        sps();
    }
    
    if(temp=='R' && c_mark=='R'){
        draw++;
    }
    else  if(temp=='S' && c_mark=='S'){
        draw++;
    }
    else  if(temp=='P' && c_mark=='P'){
        draw++;
    }
    else if(temp=='R' && c_mark=='P'){
        p_s++;
    }
    else if(temp=='R'&& c_mark=='S'){
        com_s++;
    }
    else if(temp=='P' && c_mark=='R'){
        p_s++;
    }
    else if(temp=='P' && c_mark=='S'){
        com_s++;
    }
    else if(temp=='S' && c_mark=='P'){
        p_s++;
    }
    else {
        com_s++;
    }
    printf("Player\t\tComputer\t\tDraw\n");
    printf("%d\t\t%d\t\t\t%d",p_s,com_s,draw);
    }
    if(p_s>com_s){
        printf("\nCongrulations ! You  won the game \n");
    }
    else if(p_s<com_s){
        printf("\nHurray ! you loose the game\n");
    }
    else{
        printf("\nGame is draw !\n");
    }
    printf("________");
    
	
}

    void main()
 {
  sps();
 }