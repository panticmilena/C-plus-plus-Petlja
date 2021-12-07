#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int niz[n];
    int a[10];

    for(int m=0;m<10;m++){
      a[m]=m+1;
    }

    for(int i=0;i<n;i++){
       cin>>niz[i];
    }
    for(int j=0;j<10;j++){
      int zbir=0;
      for(int k=0;k<n;k++){
        if(a[j]==niz[k]) zbir+=1;
      }
      cout << "Broj "<<a[j]<<" se pojavljuje "<<zbir<<" puta."<<endl;
    }
   
    return 0;
}
