#include "str_easy.h"
using namespace std;
string itc_even_place(string str) {
long long len = itc_len(str);
if (len < 2){
return "-1";
}
string a;
for (long long i = 1; i < len; i=i+2){
a = a+str[i];
}
return a;
}
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
