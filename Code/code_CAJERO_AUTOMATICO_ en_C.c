//ENTREGABLE FINAL 
//Realizar un cajero automatico que me pida:
//-Ingresar el usuario, la tarjeta y la clave
//-Depositar dinero
//-Retirar dinero
//-Consultar de saldo
//-Extraer adelanto en efectivo
//-Cambio de clave
//-Y Salir de la aplicacion.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void login();
void newlogin();
void dep_soles();
void dep_dolares();
void ret_soles();
void ret_dolares();
void consulta_saldo_soles();
void consulta_saldo_dolares();
void extraer_sueldo();
void cambio_clave();
void salir();
void menu(); 

int usuario=1278457;
int password=1234;
int N_pass;
char user[20]="Alex Alcalde M.";
int first;
float Saldo_inicial=1000;
float Saldo_dola=800;
float Sa=0,Ret_sol=0,Dep_sol=0;
int Opc;
float Sa_dol=0,Ret_dol=0,Dep_dol=0;
float N_sal_sol_dep=0,N_sal_dol_dep=0,N_sal_sol_ret=0,N_sal_dol_ret=0;
float sueldo_adelantado=2300;
int decision;

void login()
{
    int usern,passn;
    system("cls");
    system("color 02");
    printf("***************************************");
    printf("\n**** ACESSO AL CAJERO ****");
    printf("\nIngrese su usuario: ");
    scanf("%i", &usern);
    printf("*******************************");
    printf("\nIngrese su clave: ");
    scanf("%i", &passn);
    if (usern == usuario){
        if (password == passn)
        {   
            system("cls");
            menu();
        }else{
            for (int i = 0; i <= 2; i+=1)
            {
                printf("Clave incorrecta\n");
                printf("Intente nuevamente. Intento N# %i\n", i+1);
                system("pause");
                system("cls");
                system("color 02");
                printf("***************************************");
                printf("\n**** ACESSO AL CAJERO ****");
                printf("\nIngrese su usuario: ");
                scanf("%i", &usern);
                printf("*******************************");
                printf("\nIngrese su clave: ");
                scanf("%i", &passn);
                if (usern == usuario){
                        if (password == passn)
                        {   
                            system("cls");
                            menu();
                        }
        }
        }
        printf("Estimado(a).\nEl numero de intentos (3) Ha llegado a su limite.\nIntente mas tarde");
        }
    }else{
        for (int i = 0; i <= 2; i+=1)
            {
                printf("Usuario incorrecta\n");
                printf("Intente nuevamente. Intento N# %i\n", i+1);
                system("pause");
                system("cls");
                system("color 02");
                printf("***************************************");
                printf("\n**** ACESSO AL CAJERO ****");
                printf("\nIngrese su usuario: ");
                scanf("%i", &usern);
                printf("*******************************");
                printf("\nIngrese su clave: ");
                scanf("%i", &passn);
                if (usern == usuario){
                        if (password == passn)
                        {   
                            system("cls");
                            menu();
                        }
        }
        }
        printf("Estimado(a).\nEl numero de intentos (3) Ha llegado a su limite.\nIntente mas tarde");
        }
    }

void newlogin()
{
    int usern,passn;
    password=N_pass;
    system("cls");
    system("color 02");
    printf("***************************************");
    printf("\n**** ACCESO AL CAJERO ****");
    printf("\nIngrese su usuario: ");
    scanf("%d", &usern);
    printf("*******************************");
    printf("\nIngrese su clave: ");
    scanf("%d", &passn);
    if (usern == usuario){
        if (password == passn)
        {   
            system("cls");
            menu();
        }else{
            printf("Clave incorrecta");
            getch();
			system("cls");
			newlogin();
        }
        
    }else{
        printf("Usuario incorrecto");
        getch();
        system("cls");
        login();
    }
}

void dep_soles()
{
    system("cls");
    system("color 0A");
    printf("***********************************");
    printf("\nIngrese la cantidad a depositar en soles: ");
    scanf("%f", &Dep_sol);
    Sa = Saldo_inicial + Dep_sol;
    printf("***********************************");
    printf("\nCantidad Ingresada: S/ %f", Dep_sol);
    printf("\n***********************************");
    printf("\n++ Su saldo en su cuenta en soles aumento a: S/ %f",Sa);
    printf("\n***********************************");
    printf("\n¡OPERACION EXITOSA!\n");
    getch();
    system("pause");
    menu();
}

void dep_dolares()
{
    system("cls");
    system("color 0B");
    printf("***********************************");
    printf("\nIngrese la cantidad a depositar en dolares: ");
    scanf("%f", &Dep_dol);
    Sa = Saldo_dola + Dep_dol;
    printf("***********************************");
    printf("\nCantidad Ingresada: $ %f", Dep_dol);
    printf("\n***********************************");
    printf("\n++ Su saldo en su cuenta en dolares aumento a: $ %f",Sa);
    printf("\n***********************************");
    printf("\n¡OPERACION EXITOSA!\n");
    getch();
    system("pause");
    menu();
}

void ret_soles()
{
    system("cls");
    system("color 0C");
    printf("***************************");
    printf("\nCantidad a retirar en soles: ");
    scanf("%f", &Ret_sol);
    if (Ret_sol > 1000)
    {
        printf("******************************************************************");
        printf("\nLa cantidad ingresada supera su saldo actual que tiene en soles");
        printf("\n*************************************************");
        printf("\nPor Favor. Ingrese nuevamente la cantidad a retirar en S/: ");
        scanf("%f", &Ret_sol);
    }
    Sa = Saldo_inicial - Ret_sol;
    printf("***********************************");
    printf("\nCantidad retirada: S/ %f",Ret_sol);
    printf("\n***********************************");
    printf("\n++ Su saldo actualmente en soles es: S/ %5.2f", Sa);
    printf("\n***********************************");
    printf("\n¡OPERACION EXITOSA!\n");
    getch();
    system("pause");
}

void ret_dolares()
{
    system("cls");
    system("color 0A");
    printf("***************************");
    printf("\nCantidad a retirar en dolares: ");
    scanf("%f", &Ret_dol);
    if (Ret_dol > 800)
    {
        printf("******************************************************************");
        printf("\nLa cantidad ingresada supera su saldo actual que tiene en dolares");
        printf("\n*************************************************");
        printf("\nPor Favor. Ingrese nuevamente la cantidad a retirar en $: ");
        scanf("%f", &Ret_dol);
    }
    Sa_dol = Saldo_dola - Ret_dol;
    printf("***********************************");
    printf("\nCantidad retirada: $ %f",Ret_dol);
    printf("\n***********************************");
    printf("\n++ Su saldo actualmente en dolares es: $ %f", Sa_dol);
    printf("\n***********************************");
    printf("\n¡OPERACION EXITOSA!\n");
    getch();
    system("pause");
}

void consulta_saldo_soles()
{
    system("cls");
    printf("\n*****************************************************");
    printf("\nUsuario: %s", user);
    printf("\n*****************************************************");
    if (Dep_sol > 0)
    {
        printf("\n****************************************************");
        printf("\nSu saldo que a depositado en soles es: S/ %f",Dep_sol);
        N_sal_sol_dep = Saldo_inicial + Dep_sol;
        printf("\nSu saldo en cuenta disponible en soles era: S/ %f",N_sal_sol_dep);
        printf("\n****************************************************\n");
    }                
    if (Ret_sol > 0)
    {
        printf("\n****************************************************");
        printf("\nSu saldo que ha retirado en soles es: S/ %f",Ret_sol);
        N_sal_sol_ret=N_sal_sol_dep-Ret_sol;
        if (N_sal_sol_dep > 0)
        {
            printf("\nSu saldo en cuenta disponible actualmente en soles es: S/ %f",N_sal_sol_ret);
            printf("\n***********************************************************\n");
        }else
        Sa=Saldo_inicial-Ret_sol;
        printf("\nSu saldo en cuenta disponible actualmente en soles es: S/ %f",Sa);
        printf("\n****************************************************\n");
    }else if (Saldo_inicial == 1000)
    {
        printf("\nSu saldo en cuenta disponible en soles es: S/ %f",Saldo_inicial);
        printf("\n****************************************************");
        printf("\nNo ha retirado o depositado nada");
        printf("\n****************************************************\n");
    }
    getch();
    system("pause");
    menu();
}

void consulta_saldo_dolares()
{
    system("cls");
    printf("*****************************************************");
    printf("\nUsuario: %s",user);
    printf("\n*****************************************************");
    if (Dep_dol > 0)
    {
        printf("\n****************************************************");
        printf("\nSu saldo que a depositado en dolares es: $ %f",Dep_dol);
        N_sal_dol_dep=Saldo_dola + Dep_dol;
        printf("\nSu saldo en cuenta disponible en soles era: $ %f",N_sal_dol_dep);
        printf("\n****************************************************\n");
    }
                
    if (Ret_dol >0)
    {
        printf("\n****************************************************");
        printf("\nSu saldo que ha retirado en dolares es: $ %f",Ret_dol);
        N_sal_dol_ret=N_sal_dol_dep-Ret_dol;
        if (N_sal_dol_dep >0)
        {
            printf("\nSu saldo en cuenta disponible actualmente soles es: $ %f",N_sal_dol_ret);
            printf("\n****************************************************\n");
        }
        Sa_dol=Saldo_dola-Ret_dol;
        printf("\nSu saldo en cuenta disponible actualmente soles es: $ %f",Sa_dol);
        printf("\n****************************************************\n");
    }else if (Saldo_dola == 800)
    {
        printf("\nSu saldo en cuenta disponible en dolares es: $ %f",Saldo_dola);
        printf("\n****************************************************");
        printf("\nNo ha retirado o depositado nada");
        printf("\n****************************************************\n");
    }
    getch();
    system("pause");
    menu();
}

void extraer_sueldo()
{
    system("cls");
    printf("\n**********************************************************************************************************");
    printf("\n**Usted esta por extraer un adelanto de su sueldo que este caso nos corresponde a nosotros 'BANCO SICKER' **");
    printf("\n**********************************************************************************************************");
    printf("\n++ Su sueldo Mensual es de S/ %f", sueldo_adelantado);
    printf("\nUsted desea realizar la operacion:\n");
    printf("\n1. SI");
    printf("\n2. NO");
    scanf("%d", &decision);
    if (decision == 1)
    {
        printf("\n++ Retiro de sueldo adelantado con Exito ++");
        printf("\n** GRACIAS POR CONFIAR EN NUESTRO BANCO SICKER **");
    }else{
        printf("\n ** SIEMPRE ESTAREMOS AQUI PARA AYUDARLE GRACIAS **\n");
        getch();
        system("pause");
        menu();
    }
    getch();
    system("pause");
    menu();
}

void cambio_clave()
{
    system("cls");
    printf("*********************************");
    printf("\n **** CAMBIO DE CLAVE ++++");
    printf("\n*********************************");
    printf("\nIngrese su nueva clave: ");
    scanf("%i", &N_pass);
    password = N_pass;
    printf("\n*******************************");
    printf("\n ** CLAVE CAMBIADA EXITOSAMENTE **\n");
    printf("\n...Ingrese nuevamente.... \n");
    getch();
    system("pause");
    newlogin();
}

void salir()
{
    system("cls");
    system("color 0A");
    printf("\n\t+++++++ GRACIAS POR UTILIZAR NUESTRO CAJERO AUTOMATICO QUE TENGA UN BUEN DIA! +++++++\n");
    printf("\n\t+++++++++++++++++++++++++++++++++++++++ SICKER ++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n\t*************************** GRACIAS POR CONFIARNOS SU DINERO! ***************************\n");
    system("\npause");
    getch();
}

void menu()
{
    system("cls");
    printf("\n\t****BIENVENIDO AL SISTEMA SICKER****");
    printf("\n\t****************************************");
    printf("\n**BIENVENIDO A SU CAJERO AUT0MATICO SICKER**");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nEscoja una opcion: ");
    printf("\n1. DEPOSITO SOLES");
    printf("\n2. DEPOSITO DOLARES");
    printf("\n3. RETIRO SOLES");
    printf("\n4. RETIRO DOLARES");
    printf("\n5. COSULTAR SALDO EN SOLES");
    printf("\n6. CONSULTAR SALDO EN DOLARES");
    printf("\n7. EXTRAER ADELANTO DE SUELDO");
    printf("\n8. CAMBIO DE CLAVE");
    printf("\n0. SALIR");
    printf("\n*********************************");
    printf("\nEscoja una opcion: ");
    scanf("%d", &Opc);
    switch (Opc)
    {
    case 1:
        system("cls");
        dep_soles();
        break;
    case 2:
        system("cls");
        dep_dolares();
        break;
    case 3:
        system("cls");
        ret_soles();
        break;
    case 4:
        system("cls");
        ret_dolares();
        break;
    case 5:
        system("cls");
        consulta_saldo_soles();
        break;
    case 6:
        system("cls");
        consulta_saldo_dolares();
        break;
    case 7:
        system("cls");
        extraer_sueldo();
        break;
    case 8:
        system("cls");
        cambio_clave();
        break;
    case 0:
        system("cls");
        salir();
        break;
    default:
    printf("La Opcion Ingresada NO corresponde a nuestras opciones\nERROR 404\n");
    printf("Intente nuevamente");
    getch();
    menu();
        break;
    }
}
int main()
{
    login();
    getch();
}