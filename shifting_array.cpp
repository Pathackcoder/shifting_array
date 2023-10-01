#include<iostream>
using namespace std;

main(){
    int a[50],x,i,j,n;

    cout<<"how much values do you wanna enter?:\n";
    cin>>x;
    cout<<"enter values:";
    for(i=1;i<=x;i++)
    {   
        cin>>a[i];

    }
    for(i=1;i<=x;i++){
        cout<<"place "<<i<<" value is "<<a[i]<<endl;
        
    }
    cout<<"\n\n\nenter a place which you wanna change:";
    cin>>j;
    cout<<"\n\nenter any value: ";
    cin>>n;
    for(i=x;i>=1;i--)
    {
        if(j==i){
            a[i+1]=a[i];
            a[i]=n;

        }
        else{
           if(j<i){
            a[i+1]=a[i];
           }
        }

    }
    for(i=1;i<=x+1;i++){
        cout<<"place "<<i<<" is "<<a[i]<<endl;

    }

    
}
