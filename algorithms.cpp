#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  cout <<"Finding 6 : " << binary_search(v.begin(), v.end(), 6) << endl;

  cout<<"lower bound : " << lower_bound(v.begin(), v.end(),6)-v.begin() << endl;
  cout<<"upper bound : " << upper_bound(v.begin(), v.end(),6)-v.begin() << endl;
  
  int a=3, b=5;
  cout<<"max : " <<max(a,b)<<endl;
  cout<<"min : " <<min(a,b)<<endl;
  swap(a, b);
  cout<<endl << "a : " << a << endl;

  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());
  cout << "string : " << abcd << endl;

  rotate(v.begin(), v.begin()+2,v.end());
  cout<<"after rotate : " << endl;
  for(int i: v) {
    cout << i << " "; 
  }

  sort(v.begin(), v.end());  // based on introsort(quicksort, heapsort, insertionSort)
  cout<<endl << "after sort : " << endl;
  for(int i: v) {
    cout << i << " "; 
  }

}