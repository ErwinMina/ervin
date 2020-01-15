#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(int *num, int size)
{
  // Для всех элементов
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) // для всех элементов после i-ого
    {
      if (num[j - 1] < num[j]) // если текущий элемент меньше предыдущего
      {
        int temp = num[j - 1]; // меняем их местами
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}



#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char cam(char a[]){
    

char simbol='?';
 
    for(int i=0;i<strlen(a);i++){
        if((a[i]>='a' && a[i]<='z') ||(a[i]>='A' && a[i]<='Z')){
        simbol=a[i];
        }
    }

    return simbol;
}





//записать в масив размером п числа фибаначи
//
#include <string.h>
#include <stdio.h>

void Fibanachi(int *a,const int  n){
 
    a[0]=1;
    a[1]=1;
    for(int i=2;i<n;i++){
        a[i]=a[i-2]+a[i-1];
    }
}




// Перевод из десятичной в двоичную систему счисления
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void encode_char(const char character, bool bits[8]){
    
int symbol =character; //символ в ситсеме аски
    for(int i=7;i>0;i--){
        if(symbol%2!=0){
        bits[i]=1;
        symbol/=2;
        }
        else{
        bits[i]=0;
        symbol/=2;
        }
    }
}



#include <stdio.h>
#include <stdbool.h>
#include <math.h>
char decode_byte(const bool bits[8]){
    
int sum=0;
    for(int i=0,j=7;i<=7;i++,j--){
        if(bits[i]==1){
        sum+=pow(2,j);

        }    
    }
char res=sum;
return res;
}



#include <stdio.h>
#include <stdbool.h>
#include <math.h>
char decode_byte(const bool bits[8]){
    
int sum=0;
    for(int i=0,j=7;i<=7;i++,j--){
        if(bits[i]==1){
        sum+=pow(2,j);

        }    
    }
char res=sum;
return res;
}



#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int a(const int aa){
    int n=1;
    int sum=0;
    int num;
    for(int i=1; i<aa;i++){
    while(n>0){
       num=n%10; 
       sum+=num;
       n/=10;
    }
    n=sum;
    } 
    return sum;
}



#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void upp(char *a, const int count){
    for(int i=0;i<count;i++){
        if(islower(a[i])){
        a[i]=toupper(a[i]);

        }
        else if(isupper(a[i])){
        a[i]=tolower(a[i]);

        }
    }    
}


