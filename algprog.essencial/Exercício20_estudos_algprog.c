
#include <stdio.h>
#include <string.h>

int main()
{
    char usuario[100], senha[100];
    
    printf ("\nInsira um nome de usuario\n");
    gets (usuario);
    
    printf ("Crie uma senha\n");
    gets (senha);

    while (!strcmp (usuario, senha))
    //string comparation e ! quer dizer não, diferente
    {
        printf("\n Erro!");
        printf("\n A Senha não pode ser igual ao usuario");

        printf ("\nInsira um nome de usuario\n");
        gets (usuario);
        printf("\n Por favor, insira uma nova senha\n");
        gets (senha);
    }
    
    printf("\nUsuario criado com sucesso!");
 
    return 0;
}
