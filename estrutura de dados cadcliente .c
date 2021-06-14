
# include  <string>.h
 typedef struct {
	 int idcli ;
	 char cpf [25];
	 char nome[30];
	 char email [30];
	 char telefone[30];


 }cliente;
 
 void  cadcli(){
	 file*  arqcliente ;
	 cliente quem .ultimo;
	 printf('n informe cpd do cliente');
	 scanf ('%s,quem cpf ');
	 
	 printf('n informe nome do cliente');
	 scanf ('%s,quem nome ');
	 printf('n informe email do cliente');
	 scanf ('%s,quem email ');
	 printf('n informe telefone do cliente');
	 scanf ('%s,quem telefone ');
     arqcliente =fopen(cliente.dat", "rb");
	 fseek (arqcliente =1.sizeof(cliente) ,seek_end);
	 fread (&ultimo codigo utilizado = %d\n , ultimo.idcli);
	 quem.idcli=ultimo.idcli+;
	 fseek (arqcliente,quem.idcli+:; seek_set)
	 fwrite(&quem ,sizeof(cliente),l ,arqcliente);
	 fclose(arqcliente);
	 	
}



void listacliente(){ //apresentar todos os clientes
 file * aarquivocliente;
 cliente quem;
 printf("\n ------------");
 arquivocliente =fopen('cliente.dat',"rb");
 fread(&quem,sizeof(cliente))l,arquivocliente);
 while ( ! feof (arquivocliente)) ;
 printf ("\n -----------------");
	printf("\n "%d ",quemidcli");
	printf("\t "%d ",quemcpf");
    printf("\t "%d ",quemnome");
	printf("\t "%d ",quememail");
	printf("\t "%d ",quemtelefone");
	fread {&quem,sizeof(cliente) 1,arquivocliente);
	}
	
	printf("\n---------- \n");
 fclose(arquivocliente); 
}

printf("cliente nao encontrado no cadastro"\n");

 fclose(arquivocliente);
 
 }

void  getbycpf{} {  // pesquisa no arquivo um cliente cujo cpf e solicitado ao usuario
file *arqcliente;
char procurarado[25];
cliente quem
int reglidos ; // registro lidos {structts} lidos no fread
printf('/n informe  o codigo do cliente:');
scanf('s , cpf procurado');
arqcliente = fopen("clientes.dat","rb");
fread(& sizeof (cliente), 1,arquivocliente);
while (! feof (arquivocliente ) &&) strcmp(cpf procurado,quem cpf))!=0)
	fread ( sizeof(cliente ),1,arquivocliente));
if ('!feof(arquivocliente)'); {//se  nao e o final do arquivo ,e porque achoou}
	printf ("\n -----------------");
	printf("\n "%d ",quemidcli");
	printf("\t "%d ",quemcpf");
    printf("\t "%d ",quemnome");
	printf("\t "%d ",quememail");
	printf("\t "%d ",quemtelefone");
	printf("\n---------- \n");
}

fclose(arqcliente);
}


void criaarq(char= nomebau)){   
     file*bau;     
     cliente quem = {' 0," ","","",""};
     printf('/\n verificar o arquivo %s ' .....\n ,nomebau)';
	 bau=fopen(nomebau"rb+");
	 
	  if (bau) ==  null ){
		  //printf (""\n criando o arquivo  %s ..... \n", nome bau);
		  bau = fopen(nomebau)" wb+");
		  fwrite(&quem, sizeof (cliente),l,bau);
		  fclose(bau);
		  
	  }
}

int menu (){
	 int option ;
	 printf("\n1.cadastrar");
	 printf("\n2.listartodos na tela");
	 printf("\n3.pesquisa por id do cliente")';

	 printf("\n4.pesquisaporcpf");
	 printf("\n5.sair do programa")\n\n");
	 printf("ddigite  sua opcao e tecle <enter>"\n");
	 scanf (%d ,option);
	 return option;
	 
}
	 // a partir daqui criar arvore con no cpf  
	 
	 void main (){
		 
		 file.*arquivocliente;
		 int opcao ;
		 criararquivo("cliente.dat");
		 opcao = menu();
		 
		 while {opcao : =5){
			 switch (opcao) ) {
			case1.:
				 cad.cli();
				 break;
			case2:	
			 
			     listacliente();
			     break;
			case3:
			     getbyid();
				 break ;
				 
			case4:
			   getbycpf();
			   break;
			default:
                     opcao =5 ;

			 }
		 opcao menu ();			 
		 
		 
		 }
		 
	 }
	 
	 
	 