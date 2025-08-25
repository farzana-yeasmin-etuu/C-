#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(auto i:v)
        {
            cin>>v[i];
        }
        int count=0;
        int i=0;
     
     while (i <= n - k) { // টানা k দিন চেক করতে হবে
            bool can_hike = true;
            for (int j = 0; j < k; j++) {
                if (v[i + j] == 1) { // যদি কোনোদিন বৃষ্টি হয়, তাহলে হাইক করা যাবে না
                    can_hike = false;
                    break;
                }
            }

            if (can_hike) {
                count++;     // হাইক করেছি
                i = i + k + 1; // k দিন হাইক + ১ দিন বিশ্রাম
            } else {
                i++; // সামনে এগিয়ে যাচ্ছি
            }
        }

        cout << count << endl; // প্রতিটি টেস্ট কেসে হাইক সংখ্যা প্রিন্ট
    }
}