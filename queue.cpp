#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> Q, tempQ;
  int n;
  cin >> n;
  while (n--)
  {
    int val;
    cin >> val;
    Q.push(val);
  }
  /*
  print queue
  */
  tempQ = Q; // to not lose the origin stack
  while (!tempQ.empty())
  {
    cout << tempQ.front() << " "; //front() -> get the front of stack
    tempQ.pop();                  // pop() -> remove from back
  }
  cout << endl;

  /*
  size of queue
  */
  cout << Q.size() << endl;

  /*
  To swap between two Queue use function swap();
  Example: 
  Q     : [1,2,3,4,5]
  QTempi : [5,4,3,2,1]
  Q.swap(QTempi);
  while (!Q.empty())
  {
    cout << Q.top() << " ";
    Q.pop(); //remove from back
  }
  ouput : 
  Q     : [5,4,3,2,1]
  while (!QTempi.empty())
  {
    cout << QTempi.top() << " ";
    QTempi.pop();//Remove the top of Stack  use function pop();
  }
  ouput : 
  QTempi : [1,2,3,4,5]
 */
}