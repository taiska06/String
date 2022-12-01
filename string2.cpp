#include "str_easy.h"
using namespace std;
double itc_percent_lower_uppercase(string str){
    int a=0;
    int b=0;
    int i=0;
 while(str [i]!= '\0'){

      if(str[i]>='A' && str[i]<='Z'){
        a++;
      }
      if(str[i]>='a' && str[i] <='z'){
        b++;
      }
      i++;
 }
return (a/b)*100;
}

string itc_even_place(string str) {
long long length = itc_len(str);
if (length < 2){
return "-1";
}
string a;
for (long long i = 1; i < length; i=i+2){
a = a+str[i];
}
return a;
}

string itc_reverse_str(string str){
long long lenght = itc_len(str);
string a;
for(int i=lenght;i>0;i--){
    a=a+str[i];
}
return a;
}
