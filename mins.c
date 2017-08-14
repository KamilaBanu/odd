#include<stdio.h> 
void main() 
{ 
long int v,sec,hr,min;
printf("\n Enter the Time in seconds:"); 
scanf(“%1d",&sec); 
hr=sec/3600; 
v=sec%3600; 
min=v/60; 
sec=v%60; 
printf(“\n Time in hour:min:sec is: %ld:%ld:%ld" ,hr,min,sec);  
} 
