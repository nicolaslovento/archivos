#include <stdio.h>
#include <stdlib.h>

int main()
{
    //estructura FILE para manejar archivos
    FILE *fp;//apunta al archivo//binarios (puedo guardar enteros,char estructura,CODIGO)o archivos de texto
    char buffer[100]="Esto es un texto dentro del fichero";
    char bufferIn[100];

    fp=fopen("D:\\clase01\\fichero.txt","w");//abre el archivo 1 parametro.NOMBRE DEL ARCHIVO.2 paramttro DECIR COMO LO VA A ABRIR.W=WRITE(ESCRITURA)
    //guarda la direccion en fp
    //SI EL ARCHIVO EXISTE LO SOBREESCRIBE SINO LO CREA
    //AHORA LO USO
    fprintf(fp,buffer);//printf(muestra cadena por consola) el fprintf Escribe texto en el archivo
    //1 parametro archivo 2paramertro el texto
    fprintf(fp,"%s","Esto es uan linea");

    fclose(fp);//cierro el archivo
    system("pause");
    system("cls");

    //AHORA LEEMOS EL ARCHIVO
    fp=fopen ("D:\\clase01\\fichero.txt","r");
    fgets(bufferIn,100,fp);//2 param tamaño de lo q va a leer //esto lee una sola linea
    puts(bufferIn);

    if(fp==NULL)
    {
        printf("archivo no encontrado!!!");
    }else
    {
        while(!feof(fp))
        //funcion Feof (lee hasta la ultima linea del archivo)
        {//la lectura es secuencial, hay un señalador en el archivo.
            fgets(bufferIn,100,fp);//leo una linea
            puts(bufferIn);
        }
    }

    return 0;
}
