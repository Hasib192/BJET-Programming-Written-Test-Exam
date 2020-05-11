//Priority queue base problem. Not using array/list
/*Input:
101 2
102 1
103 2
104 1

Output:
102 104 101 103
*/

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
priority_queue<pi, vector<pi>, greater<pi> > pq;

int main()
{
    int kase ;
    cin >> kase ;

    while(kase--)
    {
        int x, y ;
        cin >> x >> y ;
        pq.push( { y , x } );
    }

    while(!pq.empty()){
        cout<<pq.top().second<<" ";
        pq.pop();
    }

    return 0;
}
