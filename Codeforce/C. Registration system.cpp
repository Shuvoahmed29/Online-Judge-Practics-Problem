/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,c=0,p=2;
    cin>>n;
    std::vector<string> vec;
    std::vector<string> vec1;
    string temp,A;
    for(i=0; i<n; i++)
    {
        std::cin >> temp;
        vec.push_back(temp);
        vec1.push_back(temp);
        if(i==0)
        {
            cout<<"OK"<<endl;
            continue;
        }
        else
        {
            for(j=i; j>=0; j--)
            {
                if(vec[i]==vec1[j])
                    c++;
            }
            if(c==1)
            {
                cout<<"OK"<<endl;
                c=0;
            }
            else
            {
                if(A==vec[i])
                {
                    cout<<vec[i]<<p<<endl;
                    p++;
                    c=0;
                    A=vec[i];
                }
                else
                {
                    cout<<vec[i]<<"1"<<endl;
                    A=vec[i];
                    c=0;
                }
            }
        }
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    map<string, int> data;
    string s;
    while (n--)
    {
        cin >> s;
        if (data.count(s) == 0)
        {
            cout << "OK" << endl;
            data[s] = 1;
        }
        else
        {
            cout << s << data[s] << endl;
            data[s]++;
        }
    }
    return 0;
}
