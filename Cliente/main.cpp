
// Socket del cliente, pide el dato al server
#include <cstdio>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#define PORT 8080

int main(int argc, char const *argv[])
{
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *saludo = "Grafo recibido";
    char buffer[1024] = {0};
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    // Convierte las direcciones IP en binarios
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)
    {
        printf("\nDireccion invalida/ Direccion no soportada \n");
        return -1;
    }
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nFallo de conexion \n");
        return -1;
    }
    send(sock , saludo , strlen(saludo) , 0 );
    printf("Respuesta enviada\n");
    valread = read( sock , buffer, 1024);
    printf("%s\n",buffer );
    return 0;
}

