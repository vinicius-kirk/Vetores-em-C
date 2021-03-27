/*****************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
	
	
    
    struct Produto{
        char nomePro[50];
        int cod_produto;
        float valor;
    };

    
    struct Departamento{
        char nomeDep[100];
        int Cod_Dep;
        struct Produto ProduoDep[3];
    };

    

       struct Loja{
        char nomeLoja[100];
        char Endereco[100];
        int Telefone_Fixo;

        struct Departamento LojaDep[3];
        struct Produto ProDep[3];

    };

    struct Loja Loja[2];


    

    for(int v1=0;v1 < 2;v1++){

        printf("Digite o nome da %d loja:\n ",v1+1);
        scanf(" %s", Loja[v1].nomeLoja);

        printf("Digite o Endereco da %d loja:\n ",v1+1);
        scanf(" %s", Loja[v1].Endereco);

        printf("Digite o Telefone da %d loja: *não digite letras*\n ",v1+1);
        scanf(" %d", &Loja[v1].Telefone_Fixo);

        printf("************************************************************\n");
        
            for(int v2 = 0; v2 < 3; v2++){
            printf("Digite o nome do %d departamento:\n ",v2+1);
            scanf(" %s",Loja[v1].LojaDep[v2].nomeDep);

            printf("Digite o código do %d departamento: *não digite letras*\n",v2+1);
            scanf(" %d",&Loja[v1].LojaDep[v2].Cod_Dep);
            
            printf("************************************************************\n");


            for(int v3 = 0; v3 < 3;v3++){
            printf("Digite o nome do %d produto do %d departamento\n",v3+1,v2+1);
            scanf(" %s",Loja[v1].ProDep[v3].nomePro);

            printf("Digite o código do %d produto do %d departamento: *não digite letras*\n",v3+1,v2+1);
            scanf(" %d",&Loja[v1].ProDep[v3].cod_produto);

            printf("Digite o valor do %d produto do %d departamento: *não digite letras*\n",v3+1,v2+1);
            scanf(" %f",&Loja[v1].ProDep[v3].valor);

             printf("************************************************************\n");
            }
        }
    }



    for(int v1=0;v1<2;v1++){

         printf("o nome da %d loja digitada foi: %s\n",v1+1, Loja[v1].nomeLoja);
         printf("o endereco da %d loja digitada foi: %s\n",v1+1, Loja[v1].Endereco);
         printf("o telefone da %d loja digitada foi: %d\n",v1+1, Loja[v1].Telefone_Fixo);

        for(int v2=0;v2<3;v2++){
            printf("O nome do %d departamento inserido foi: %s\n",v2+1, Loja[v1].LojaDep[v2].nomeDep);
            printf("O código do %d departamento inserido foi: %d\n",v2+1, Loja[v1].LojaDep[v2].Cod_Dep);


            for(int v3 = 0; v3 < 3;v3++){


                printf("O nome do %d Produto é: %s \n",v3+1,Loja[v1].ProDep[v3].nomePro);
                printf("O código do %d Produto é: %d \n",v3+1,Loja[v1].ProDep[v3].cod_produto);
                printf("O valor do %d Produto é: %f \n",v3+1,Loja[v1].ProDep[v3].valor);

            }

        }
    }

    return 0;

}





