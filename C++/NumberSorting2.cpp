/**/
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[i]=a[i];
    }

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(b[i]>b[j]) {
                int swap=b[i];
                b[i]=b[j];
                b[j]=swap;
            }
        }
    }
    int k;
    for(int i=1;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[j]==b[i]) {
                k=j;break;
            }
        }
        int swap=a[i];
        a[i]=a[k];
        a[k]=swap;
    }

    for(int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
}