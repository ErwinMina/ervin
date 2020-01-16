//sort boble
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


//last буква в строке
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


//з 2 в 10 систему
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

//вернуть 1 если две буквы или большые или меленкие
//вернуть 0 если две буквы разных ромеров
//вернуть -1 если хоть один из символв не есть буквой
#include <string.h>
#include <stdio.h>

int creat(charr a, char b){
    if((a>='a' && a<='z') && (b>='a' && b<='z')) return 1;
    if((a>='A' && a<='Z') && (b>='A' && b<='Z')) return 1;
    if((a>='A' && a<='Z') && (b>='a' && b<='z')) return 0;
    if((a>='a' && a<='z') && (b>='A' && b<='Z')) return 0;
    else return -1;
    
}

//вернуть 1 если год высокоснй
//вернуть 0 если нет
//1)год высокосный если он делитьса на 400
//2)не високосный если делитса на 100
//3)высокосный если делитса на 4
///1 2 и 3 где выше приоритет то истина 200-не высокосный год
#include <string.h>
#include <stdio.h>

int big_year(int year){
    if(year%400==0 ||(year%100!=0 && year%4==0)) return 1;
    return 0;
    
} 

