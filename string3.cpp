#include <iostream>
using namespace std;
#include"str_easy.h"
string itc_cmp_str(string str1, string str2, int num){
int length2=itc_len(str2);
int length1=itc_len(str1);
string a;
int i, r;
int n=0;
int c=0;
if(length1<num){
    return str1;
}
else{
for(i=0;i< num;i++){
    a+=str1[i];
}
for(r=0,c=num;str2[r]!='\0';r++, c++){
    if(c<length1){
        a+=str2[r];
    }
}
for(int i=num;i<length1-length2;i++){
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
    long long lenght2 = itc_len(str2);
    long long lenght1= itc_len(str1);
    int i = itc_find_str(str1, str2);
    while (i != -1) {
        string n1 = itc_slice_str(str1, 0, i - 1);
        string n2 = itc_slice_str(str1, i + lenght2,  lenght1);
        str1 = n1 + str3 + n2;
        i = itc_find_str(str1, str2);
    }
    return str1;
}
int itc_max_char_on_end(string str){
long long lenght = itc_len(str);
int x = 0;
int xmax = 0;
for (int i = 0; i < lenght; i++) {
        if (str[i]<str[i+1]) {
            x++;
        }
        else {
            x = 0;
        }
        if (x > xmax) {
            xmax = x;
        }

  }
  return xmax+1;
}





