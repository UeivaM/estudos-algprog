#include <stdio.h>
#include <string.h>

int main()
{
    char usuario, senha;
    
    printf ("\nInsira um nome de usuario\n");
    scanf ("%s", &usuario);
    
    printf ("Crie uma senha\n");
    scanf ("%s", &senha);
    

    if (usuario == senha)
    //string comparation e ! quer dizer não, diferente
    {
        printf("\n Erro!");
        printf("\n A Senha não pode ser igual ao usuario");

        printf ("\nInsira um nome de usuario\n");
        scanf ("%s", &usuario);
        printf("\n Por favor, insira uma nova senha\n");
        scanf ("%s", &senha);
    }
    
    printf("\nUsuario criado com sucesso!");
 
    return 0;
}
