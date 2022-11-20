#include "str_easy.h"
using namespace std;
string itc_hello_str(string name){
    return ("Hello,"+ name);

}
 long long itc_len(string str){
     int kol,i;
     kol=0;
     i=0;
     while(str [i]!= '\0'){
      kol++;
      i++;
 }
 return kol;
 }
void itc_print_copy_str(string str, int number){
int i=0;
while(i<number){
    i++;
    cout<<str;
}
}
void itc_first_end_three(string str){
    int length = itc_len(str);
    if(length<5){
        int a=0;
        while(a<length){
            a++;
            cout<<str[0];
        }
    }else{
      cout<< str[0];
      cout<< str[1];
      cout<< str[2];
      cout<< str[length - 3];
      cout<< str[length - 2];
      cout<< str[length - 1];
    }

}
int itc_count_char_in_str(char ch, string str){
int i=0;
int c=0;
int f=0;
int length = itc_len(str);
while(i<length){

   if(str[c]==ch){
    f++;
   }
    c++;
    i++;
}
return f;
}
string itc_even_place(string str){
int length = itc_len(str);
int c=0;
int i=0;
while(i<length){
if(c%2==0){
    cout<<str[c];
   }
i++;
c++;
}
}
 string itc_even_place(string str){
int length = itc_len(str);
int c=0;
int i=0;
while(i<length){
if(c%2==0){
    cout<<str[c];
   }
i++;
c++;
}
}


