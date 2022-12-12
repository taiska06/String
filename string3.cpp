#include <iostream>
using namespace std;
#include"str_easy.h"
string itc_cmp_str(string str1, string str2, int num){
int length2=itc_len(str2);
int length1=itc_len(str1);
string a;
int i, r;
if(length1<num){
    return str1;
}
else{
for(i=0;i< num;i++){
    a+=str1[i];
}
for(r=0;str2[r]!='\0';r++){
    if(i<length1){
        a+=str2[r];
        i++;
    }
}
    if(i<= length1){
        for(i;str1[i]!='\0';i++)
          a+=str1[i];
    }
    return a;
}
}

int itc_find_str(string str1, string str2) {
    int length2=itc_len(str2);
    int length1=itc_len(str1);
      int a = -1;
    int j = 0;
    if (length2 > length1){
        return -1;

    }
  for (int i = 0; i < length1; i++) {
        if (  j >= length2)
            break;
        if (str1[i] == str2[j]) {
            if (j == 0)
                a = i;
                 j++;
        }
        else {
            a = -1;
            j = 0;
        }
    }
    return a;
}
string itc_three_str(string str1, string str2, string str3){
int length2=itc_len(str2);
int length1=itc_len(str1);
int length3=itc_len(str3);
string a;
int i = itc_find_str(str1,str2);
for(int c=0;c<i;c++){
        a+=str1[c];

}
for(int c=0;c<length3;c++){
        a+=str3[c];

}
for(int c=length2+i;c< length1;c++){
        a+=str1[c];

}
return a;
}





