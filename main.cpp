#include <iostream>

using namespace std;

int main() {
  int evOrOdd, num;
  cout << "Please input 0 for even or 1 for odd\n";
  cin >> evOrOdd;

  if (evOrOdd == 0){
    // even
    num = 0;
    while(num <= 50){
      if(num % 2 == 0){
        cout << num << endl;
      }
      num++;
    }

  }
  if(evOrOdd == 1){
    //odd
    num = 0;
    while(num <= 50){
      if(num % 2 != 0){
        cout << num << endl;
      }
      num++;
    }

  }
  else{
    return 0;
  }


}

//using a for loop
// for(int x = num; x <= 50; x += 2){
//  cout << x << endl;
//}