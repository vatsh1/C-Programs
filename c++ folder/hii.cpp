
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ct;
int a[10],b[10];
vector<int> co;
int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

/* This function sorts the input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;

        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        //Merge the two parts
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

/* This funt merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left,
          int mid, int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray
(if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    //Copy back the merged elements to original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int interchangeable(int p[])
{
    //cout<<"5\n";
    int x,y,z;
    x=p[0];y=p[1];z=p[2];
    if((a[x]==b[y])|| (a[x]==b[z]))
     {
        // cout<<"6\n";
//         interchange(p);
         return x;
     }
     else if((a[y]==b[x])||(a[y]==b[z]))
  {
      //cout<<"7\n";
      return y;
   //   interchange(p);
  }

     else if((a[z]==b[x])||(a[z]==b[y]))
    {
        //cout<<"8\n";
        return z;
      // interchange(p);
    }
      else
      {
          //cout<<"9\n";
          return -1;
      }

}

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
          int n,k;
        cin>>n>>k;
        int c[n];
       // cout<<"1\n";
       // vector<pair<int,int>> v;
     //   vector< pair <int,int> > v;
    //  int ind[9];//
      int maximum=-1;
        ct=0;
        //int a[n],b[i];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            c[i]=a[i];
            if(a[i]>maximum)
                maximum=a[i];
        }
        int inver;
        inver = mergeSort(c, n);
        if(inver%2!=0)
            cout<<"-1\n";
        else
        {

        sort(b,b+n);
        //cout<<"maximum "<<maximum<<"\n";
        int ind[maximum+1]={-1};
        for(int i=0;i<n;i++)
        {
           // cout<<a[i]<<" "<<b[i]<<"\n";
         //   v.push_back(make_pair(b[i],i));
         ind[b[i]]=i;
        }
        //cout<<"printing index\n";
        /*for(int i=0;i<maximum+1;++i)
            cout<<ind[i]<<" ";
            cout<<"\n";*/
        int c[3],e=0,j;
        int f;
        //count inversions
        for(int i=0;i<n;)
        {
            //cout<<"2\n";
            //cout<<"i "<<i<<"\n";
            if(b[i]==a[i])
             ++i;
             else
             {
                 //cout<<"3\n";
                 c[0]=i;
                 e=0;
                 ++e;
                 j=i+1;
                 while(e<3)
                 {
                    // cout<<"4\n";
                    if(b[j]!=a[j])
                    {
                        c[e]=j;
                        ++j;
                      //  ++k;
                        ++e;
                    }
                    else
                    {
                        ++j;
                    }

                 }
                 //cout<<"printing c "<<c[0]<<" "<<c[1]<<" "<<c[2]<<"\n";
                 f=interchangeable(c);
                  int x,y,z;
                      int m,temp;
                 if(f==-1)
                 {
                     c[2]=ind[a[c[0]]];
                     //cout<<"c[2] changed as not interchnage "<<c[2]<<"\n";
                     if(x<y && x<z)
                    {
                        //cout<<"mini 1\n";
                        m=x;
                    }
                 else if(y<x && y<z)
                  {
                     // cout<<"mini 2\n";
                     m=y;
                  }
                else
              {
                  //cout<<"mini 3\n";
                    m=z;
                }

                 }
                 else
                 {
                     //cout<<"else\n";
                     x=c[0];y=c[1];z=c[2];
                     if(a[x]<a[y] && a[x]<a[z])
                    {
                        //cout<<"mini 1\n";
                        m=x;
                    }
                 else if(a[y]<a[x] && a[y]<a[z])
                  {
                     //cout<<"mini 2\n";
                     m=y;
                  }
                else
              {
                  //cout<<"mini 3\n";
                    m=z;
                }


                     //cout<<"enyeres\n";

                 }
                   //  interchange(c);
                   //cout<<"hjvjyvjv\n";

                      x=c[0];y=c[1];z=c[2];
                   //   m=mini(x,y,z);
                        //         cout<<"aaaa\n";
                     co.push_back(c[0]);
                     co.push_back(c[1]);
                     co.push_back(c[2]);
                     //cout<<"print ind1\n";
                     //cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<"\n";
                     temp=a[c[2]];
                     a[c[2]]=a[c[1]];
                     a[c[1]]=a[c[0]];
                     a[c[0]]=temp;

                     //cout<<"\n";
                     //cout<<"bbb\n";
                     if(m==c[0])
                        m=c[1];
                     else if(m==c[1])
                        m=c[2];
                     else
                        m=c[0];
                     if(a[m]==b[m])
                      {
                       //   cout<<"123\n";
                              // ++ct;
//
                       }
                    else
                   {
                    //   cout<<"234\n";
                        co.push_back(c[0]);co.push_back(c[1]);co.push_back(c[2]);
                        temp=a[c[2]];
                        a[c[2]]=a[c[1]];
                        a[c[1]]=a[c[0 ]];
                        a[c[0]]=temp;
                        /*for(int nm=0;nm<n;nm++)
                            cout<<a[nm]<<" ";
                        cout<<"\n";*/
                        if(m==c[0])
                        m=c[1];
                     else if(m==c[1])
                        m=c[2];
                     else
                        m=c[0];
                     //   ++ct;
                    }
                 //   cout<<"345\n";



             }
          /*   for(int i=0;i<n;++i)
                        cout<<a[i]<<" ";
                        cout<<"\n";*/
             ct=(co.size())/3;
             if(ct>k)
             {
                 cout<<"-1\n";
                 break;
             }
        }
        if(ct<=k)
        {

        cout<<ct<<"\n";
        for(int i=0;i<co.size();++i)
        {
            //cout<<"11\n";
            cout<<co[i];
            cout<<" ";
            ++i;
            cout<<co[i]<<" ";
            ++i;
            cout<<co[i]<<"\n";
        }
        }

    }
    }
    return 0;
}















































/*#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n,i,a;
    cin>>n>>a;
    int c = n+a;
    cout<<c;


    

    return 0;
}
*/


/*
Junior = {'SI 206':4, 'SI 310':4, 'BL 300':3, 'TO 313':3, 'BCOM 350':1, 'MO 300':3}
credits = 0
for key in Junior:
    credits = credits + Junior[key]




str1 = "peter piper picked a peck of pickled peppers"
freq = {}
for c in str1:
    if c not in freq:
        freq[c] = 0
    freq[c] = freq[c] + 1




s1 = "hello"
counts = {}
for c in s1:
    if c not in counts:
        counts[c] = 0
    counts[c] = counts[c] + 1




str1 = "I wish I wish with all my heart to fly with dragons in a land apart"
k = str1.split()
freq_words = {}
for c in k:
    if c not in freq_words:
        freq_words[c] = 0
    freq_words[c] = freq_words[c] + 1
print(freq_words)



sent = "Singing in the rain and playing in the rain are two entirely different situations but both can be good"
k = sent.split()
wrd_d = {}
for c in k:
    if c not in wrd_d:
        wrd_d[c] = 0
    wrd_d[c] = wrd_d[c] + 1




sally = "sally sells sea shells by the sea shore"
characters = {}
for c in sally:
    if c not in characters:
        characters[c] = 0
    characters[c] = characters[c] + 1
keys = list(characters.keys())
best_char = keys[0]
for i in keys:
    if characters[i]>characters[best_char]:
        best_char = i




sally = "sally sells sea shells by the sea shore and by the road"
characters = {}
for c in sally:
    if c not in characters:
        characters[c] = 0
    characters[c] = characters[c] + 1
keys = list(characters.keys())
worst_char = keys[0]
for i in keys:
    if characters[i]<characters[worst_char]:
        worst_char = i





//lat question ans


p = "Summer is a great time to go outside. You have to be careful of the sun though because of the heat."
k = p.lower()
print(k)
low_d = {}
for c in k:
    if c not in low_d:
        low_d[c] = 0
    low_d[c] = low_d[c] + 1


*/