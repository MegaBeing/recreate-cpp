#include<bits/stdc++.h>
using namespace std;

class AbstractBase{
  private:
   virtual vector<pair<int,int>> extractor(string &snippit) = 0;
  public:
   virtual string implementor(string &snippit) = 0;
};
