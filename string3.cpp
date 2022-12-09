#include <iostream>
using namespace std;
#include"str_easy.h"
 itc_cmp_str(string str1, string str2, int num){
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

int itc_find_str(string str1, string str2){
int length2=itc_len(str2);
int length1=itc_len(str1);
int a = -1;
int c = 0;
int i,b;
int n=0;
     if (length2 > length1){
        return -1;
       }
    for ( i = 0; i<length1; i++) {
        if(str1[i]==str2[0]){
            while(str1[i+n]==str2[n]){
                n++;
            }
        }

        }
        if(n!=0){
        return n;

}
else{
    return -1;
}
}





