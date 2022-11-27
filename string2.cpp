#include "str_easy.h"
using namespace std;
string itc_even_place(string str){
int length = itc_len(str);
int c=0;
for(int i=0;i<length;i++){
if(i%2==0){
    cout<<str[i];
   }
}
string itc_reverse_str(string str){
int length = itc_len(str);
for(int i=length;i>-1;i--){
    cout<<str[i];
}
}
 string itc_slice_str(string str, int start, int end){
 int length = itc_len(str);
 int i=0;
while(i<start){
    i++;
    }
while(i<end){
    cout<<str[i];
    i++;
    }

}
