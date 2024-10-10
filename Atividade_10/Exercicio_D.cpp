#include<iostream>
using namespace std;

void leitura(int *vet, int n){
    for(int i=0; i<n; i++){
        cout<<"Digite a nota do "<<i+1<<"° aluno: ";
        cin>>*(vet+i);
    }
}

void media(int *vet, int n){
    int soma=0;
    for(int i=0; i<n; i++)
        soma+=*(vet+i);
    cout<<"Media aritmética das notas: "<<soma/n<<endl;
}

int main(){
    int *v, n;
    cout<<"Digite o numero de alunos: ";
    cin>>n;
    if(!(v=new(nothrow)int [n])){
        cout<<"Falha na alocacao dinamica de memoria!!!"<<endl;
        return -1;
    }
    leitura(v,n);
    media(v,n);
    delete[] v;
    v=NULL;
    return 0;
}
