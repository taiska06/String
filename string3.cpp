#include <iostream>
using namespace std;
#include"str_easy.h"
string itc_cmp_str(string str1, string str2, int num){
int length2=itc_len(str2);
int length1=itc_len(str1);
string a;
int c;
if(num>length2){
    return str1;
}
else{
for(int i=0;i<num;i++){
    a+=str1[i];
}
for(int i=num;i<length2 && i<length1;i++){
a+=str2[i];
c++;
}
for(int i=num+c;i<length1;i++){
    a+=str1[i];
}
}
return a;
  }
int itc_find_str(string str1, string str2){
int length2=itc_len(str2);
int length1=itc_len(str1);
int a = -1;
int c = 0;
int i,b;
       if (length2 > length1){
        return -1;
       }
    for ( i = 0, b=0 ; str1[i] != str2[b]; i++ , b++) {
             c++;
        }

    return c;
}






