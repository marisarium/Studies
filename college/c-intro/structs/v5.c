#include <stdio.h>
#include <stdlib.h>

struct funcionario{
	int n_func, data, RG,CPF, fone, n_depart;
	char nome[30], est_civil[30], endereco[50];
};

int main(){
	int i, busca=0, cont=0;
	struct funcionario func[20];
		
	printf("--Programa Fichas de Funcionarios--\n");
	printf("\nInsira os dados nas fichas dos funcionarios abaixo: \n");	
	
	for(i=0;i<20;i++){
		printf("\nFuncionario %d\n", i+1);
		
		printf("Num do Funcionario: ");
		scanf("%d", &func[i].n_func);
		printf("Nome: ");
		scanf("%s", func[i].nome);
		printf("Data de Nascimento: ");
		scanf("%d", &func[i].data);
		printf("Estado Civil: ");
		scanf("%s", func[i].est_civil);
		printf("Endereco: ");
		scanf("%s", func[i].endereco);
		printf("RG: ");
		scanf("%d", &func[i].RG);
		printf("CPF: ");
		scanf("%d", &func[i].CPF);
		printf("Fone: ");
		scanf("%d", &func[i].fone);
		printf("Num do Departamento: ");
		scanf("%d", &func[i].n_depart);
	}
	
	printf("\n--Busca de Funcionario--\n");
	printf("Informe o numero do funcionario: \n");
	printf("\n. . .\n");
	scanf("%d", &busca);
	
	while(busca != -1){
		for(i=0;i<20;i++){	
			if(busca == func[i].n_func){
				//apresenta valores	
				printf("\nNum do Funcionario: %d\n", func[i].n_func);
				printf("Nome: %s\n", func[i].nome);
				printf("Data de Nascimento: %d\n", func[i].data);
				printf("Estado Civil: %s\n", func[i].est_civil);
				printf("Endereco: %s\n", func[i].endereco);
				printf("RG: %d\n", func[i].RG);
				printf("CPF: %d\n", func[i].CPF);//CPF ta saindo com um -45352354(numeros estranhos e negativos)
				printf("Fone: %d\n", func[i].fone);
				printf("Num do Departamento: %d\n", func[i].n_depart);
				cont++;
			}
			if(i==19 && cont == 0)
				printf("Funcionario Inexistente");
		}		
		printf("Digite o numero da nova busca, se deseja realizar outra: \n");
		printf("Se nao, digite '-1'...\n");
		scanf("%d", &busca);
	}
	
	printf("\nObrigado por usar o programa!");
	return 0;
}
