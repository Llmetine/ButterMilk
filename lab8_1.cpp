#include <iostream>
#include<string>
using namespace std;

int main(){
  char rank;
  string a[] = {"You have received Super Ultra Rare Unit!!!\n","You have received 5 gems.\n","You have received 1 gems.\n","You have received 2000 coins.\n","You have received very KAK items.\n"};
  cout << "Input your rank: ";
  cin >> rank;
if(rank=='S'){
cout << a[0] << a[1] << a[2] << a[3] << a[4] ;}
else if(rank=='A'){
cout << a[1] << a[2] << a[3] << a[4] ;}
else if(rank=='B'){
cout << a[2] << a[3] << a[4] ;}
else if(rank=='C'){
cout << a[3] << a[4] ;}
else if(rank=='D'){
cout << a[4] ;}

return 0;
//dsa
}

