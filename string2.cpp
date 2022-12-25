#include "str_easy.h"
using namespace std;
double itc_percent_lower_uppercase(string str){
    double a=0;
    double b=0;
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
return (b/a)*100;
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
for(int i=lenght-1;i>=0;i--){
     a+=str[i];
}
return a;
}

bool itc_equal_reverse(string str){
long long length = itc_len(str);
string s=itc_reverse_str(str);
if(s==str){
    return 1;
}
    else{
        return 0;
    }
}
 string  itc_slice_str(string str, int start, int end){
long long length = itc_len(str);
int a=0;
int i=0;
int d= start;
int c=end;
string b;
  if (end > length)
        end = length;
  if(start>end){
     end=d;
     start=c;
  }
while(str [i]!= '\0'){
        if (a >= start && a <= end)
           b+=str[a];
        a++;
        i++;
    }
    return b;
}


