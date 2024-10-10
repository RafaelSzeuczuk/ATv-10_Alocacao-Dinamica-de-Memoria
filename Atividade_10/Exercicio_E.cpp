#include<iostream>
using namespace std;

typedef struct{
    string nome;
    int serie, nota;
}Aluno;

void insercao(Aluno *vet, int n){
    for(int k=0; k<n; k++){
        cout<<"Digite o nome do "<<k+1<<"° aluno: ";
        cin.get();
        getline(cin,vet->nome);
        cout<<"Digite a serie do "<<k+1<<"° aluno: ";
        cin>>vet->serie;
        cout<<"Digite a nota do "<<k+1<<"° aluno:";
        cin>>vet->nota;
        vet++;
    }
}

void media(Aluno *vet, int n){
    int soma=0;
    for(int k=0; k<n; k++)
        soma+=vet[k].nota;
    cout<<"Media aritmética das notas: "<<soma/n<<endl;
}

int main(){
    Aluno *v;
    int n;
    cout<<"Digite o numero de alunos: ";
    cin>>n;
    if(!(v=new(nothrow)Aluno [n])){
        cout<<"Falha na alocacao dinamica de memoria!!!"<<endl;
        return -1;
    }
    insercao(v,n);
    media(v,n);
    delete[] v;
    v=NULL;
    return 0;
}