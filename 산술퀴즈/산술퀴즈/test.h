#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>


#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3	
#define SPACE 4




int keyControl();
void init();
void title();
void gotoxy(int, int);
int menu();
void infoD();
int frontdoor();
int front_main();
void result(int);
int sum();
int sub();
int mul();