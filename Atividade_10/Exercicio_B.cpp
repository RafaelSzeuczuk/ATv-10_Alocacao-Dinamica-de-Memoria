#include<iostream>
using namespace std;

void insercao(int *vet, int n){
    for(int i=0;i<n;i++)
        *(vet+i)=i;
}

void imprime(int *vet, int n){
    for(int k=0;k<n;k++)
        cout<<*(vet+k)<<" ";
    cout<<endl;
}

int main(){
    int *v, n;
    cin>>n;
    if(!(v=new(nothrow)int[n])){
        cout<<"Falha na alocação dinâmica de memoria!!!"<<endl;
        return -1;
    }
    insercao(v,n);
    imprime(v,n);
    delete[] v;
    v=NULL;
    return 0;
}