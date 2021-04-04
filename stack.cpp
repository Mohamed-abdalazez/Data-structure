#include <bits/stdc++.h>
using namespace std;



int main()
{
  //Initialize Stack stack<data type> name of stack;
  stack<int> St, StTemp; //eg: St[1,2,3,4,5], StTemp[5,4,3,2,1]

  int n;
  cout << "Enter the size of stack" << endl;
  cin >> n;
  // push;
  while (n--)
  {
    int value;
    cin >> value;
    St.push(value);
  }
  /*
  to get size of stack use function size();
  cout  << St.size() << endl;
 */

  /*
  To get top of the stack use function top();
   cout << St.top() << endl;
   eg: [1,2,3,4,5]
   output : 5
  */

  /*
   print Stack -> using function empty() && pop() && top();
   to not lose the origin stack, use a temp stack : origin stack -> temp stack(reversed) -> origin stack;
  while (!St.empty())
  {
    cout << St.top() << " ";
    St.pop();//Remove the top of Stack  use function pop();
  }
  cout << endl;
  */

  /*
  To swap between two stacks use function swap();
  Example: 
  St     : [1,2,3,4,5]
  StTemp : [5,4,3,2,1]

  St.swap(StTemp);

  while (!St.empty())
  {
    cout << St.top() << " ";
    St.pop();//Remove the top of Stack  use function pop();
  }
  ouput : 
  St     : [5,4,3,2,1]

  while (!StTemp.empty())
  {
    cout << StTemp.top() << " ";
    StTemp.pop();//Remove the top of Stack  use function pop();
  }
  ouput : 
  StTemp : [1,2,3,4,5]
 */
}
 
