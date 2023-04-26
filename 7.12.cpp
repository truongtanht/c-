#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Nhap vao so n: ";
  cin >> n;
  int a = n % 10;
  //b là chuc
  int b = (n / 10) % 10;
  //c là hàng tram
  int c = n / 100;
  //dieu kien co hai chu so
  /*if(n<100 || n > 999){
    cout<<"Nh?p vào s? có hai ch? s?!! ";
  }
  else{
  */
    switch(c){
      case 1: cout<<"Mot tram ";break;
      case 2: cout<<"Hai tram ";break;
      case 3: cout<<"Ba tram ";break;
      case 4: cout<<"Bon tram ";break;
      case 5: cout<<"Nam tram ";break;
      case 6: cout<<"Sau tram ";break;
      case 7: cout<<"Bay tram ";break;
      case 8: cout<<"Tam tram ";break;
      case 9: cout<<"Chin tram ";break;
    }
    // in ra chu le neu chang chuc bang 0
    if( b % 10 == 0 && a != 0 && n > 10){
      cout << "le ";
    }
    //in ra hàng chuc
    switch(b){
      case 1: cout<<"muoi ";break;
      case 2: cout<<"hai muoi ";break;
      case 3: cout<<"ba muoi ";break;
      case 4: cout<<"bon muoi ";break;
      case 5: cout<<"nam muoi ";break;
      case 6: cout<<"sau muoi ";break;
      case 7: cout<<"bay muoi ";break;
      case 8: cout<<"tam muoi ";break;
      case 9: cout<<"chin muoi ";break;
    }
    //in ra hang don vi
    switch(a){
      case 1: cout<<"mot ";break;
      case 2: cout<<"hai ";break;
      case 3: cout<<"ba ";break;
      case 4: cout<<"bon ";break;
      case 5: cout<<"nam ";break;
      case 6: cout<<"sau ";break;
      case 7: cout<<"bay ";break;
      case 8: cout<<"tam ";break;
      case 9: cout<<"chin ";break;
    }
   
  }
 

