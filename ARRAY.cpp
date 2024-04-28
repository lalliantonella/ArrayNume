#include <iostream>
using namespace std;
int main (){
int num[]={1,2,3,4,5};
int LA=sizeof(num)/sizeof(num[0]);
int NE=6;
int NT=LA+1;
int NA[NT];
copy(num, num + LA, NA);
NA[LA]=NE;

for (int i=0 ; i < NT; i++){
 cout<<NA[i] << endl;
};

return 0;
}

