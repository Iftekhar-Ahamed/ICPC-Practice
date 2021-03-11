#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define lld long long int
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define _for(i, j, k, in) for (int i = j; i < k; i += in)
#define _rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define _foritaretor(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
const double pi = acos(-1.0);
map<int,int>data;
bool isLeapYear(int year)
{
  if (year % 400 == 0)
    return true;
  else if (year % 100 == 0)
    return false;
  else if (year % 4 == 0)
    return true;
  else
    return false;
}
void cumulative(){
  int i,total=0;
  _for(i,1850,3001,1){
    if(isLeapYear(i))total++;
    data[i]=total;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  //read;write;
  cumulative();
  int t,d,m,s,e,i=1;
  cin>>t;
  while (t--)
  {
    cin>>d>>m>>s>>e;
    cout<<"Case "<<i++<<": ";
    if(d==29&&m==2){
      cout<<data[e]-data[s]<<endl;
    }else{
      cout<<e-s<<endl;
    }
  }
  return 0;
}
