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
string itc_three_str(string str1, string str2, string str3){
int i = itc_find_str(str1, str2);
int length2=itc_len(str2);
int length1=itc_len(str1);
int length3=itc_len(str3);
string a;
string b;
 while (i > -1) {
        a = itc_slice_str(str1, 0, i - 1);
        b = itc_slice_str(str1, i + length2, length1);
        str1 = a + str3 + b;
        i = itc_find_str(str1, str2);
    }
    return str1;


 }

