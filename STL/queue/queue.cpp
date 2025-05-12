#include<bits/stdc++.h>
using namespace std;

int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,a;
    scanf("%d",&t);
    queue<int> q;
   while(t--)
    {  
        
        scanf("%d",&n);

        if(n==1)
        {  
           
            scanf("%d",&a);
            q.push(a);
        }
        if(n==2)
        {
            if(!q.empty())
            {
                q.pop();
            }
        }
        if(n==3)
        {  if(!q.empty()) {
           printf("%d",q.front());
        printf("\n"); }
            else { printf("Empty!") ;
                printf("\n");
            }
        }
    }
}
