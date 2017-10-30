#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
float index=0, hight=0, mass=0;
int gender=0;
   puts("Indicate your gender:\n");
     puts("Women- 1\n");
       puts("Man- 2\n");
         scanf("%d", &gender);
           if(gender!=1 && gender!=2)
           {
         	printf("\nData error!\n"); //при вводе чего либо кроме цифр 1 и 2 программа сообщит об ошибке
         	return 1;
           }
              puts("\nEnter your body weight in kilograms. Use only one sign after the point:\n");
                if(scanf("%f", &mass)==0) //при вводе символа програма сообщит об ошибке
                   {                                
                 	printf("\nData error!\n");
                	return 1;                
		   }
                      if(mass<=0)
                      {                                
                 	   printf("\nData error!\n");//если масса тела равняется нулю
                	   return 1;                //или меньше нуля, то программа сообщит об ошибке    
		      }
                         puts("\nEnter your hight in meters. Use two signs after the point:\n");
                           if(scanf("%f", &hight)==0)//при вводе символа програма сообщит об ошибке
                           {                                
                          	printf("\nData error!\n");
                	        return 1;                
		            }
                              if(hight<=0)//если рост равен нулю или меньше нуля
                              {          //программа сообщит об ошибке         
                 	           printf("\nData error!\n");
                	           return 1;                
		              }
                                 index=mass/(hight*hight);
                                   printf("\nYour body index=%.2f\n",index);
                                     if(index>=20 && index<=25.99)
                                       puts("\nYour weigh is normal\n");
                                         if(index>=12 && index<=19.99)
						     	           puts("\nYour weigh less than normal\n");
                                             if(index>=26 && index<=29.99)
							    	           puts("\nYour weight above normal\n");
                                                 if(index>30)
                                                   puts("\nYou need to see a dietician\n");
                                            
                                                       return 0;
}

