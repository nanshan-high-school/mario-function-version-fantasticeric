#include <iostream>
using namespace std;
void print_hashtag(int number);
void print_space(int number);
int main() {
  int height;
  cout << "請輸入幾層(1~8):";
  cin >> height;
  if(height > 8 || height < 1)
    cout << "超出範圍";
  else
  for(int a=1, K=7; a<height+1; a++,K--){
    print_space(K);
    print_hashtag(a);
    cout<<" ";
    print_hashtag(a);
    cout<<"\n";
    }
}
void print_hashtag(int number)
{
  for(int i=0; i<number; i++){
      cout<<"#";
      }
}
void print_space(int number)
{
  for(int i=0; i<number; i++){
      cout<<" ";
      }
}
