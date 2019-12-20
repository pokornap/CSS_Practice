#include <stdio.h>



void HTMLboilerPlate(FILE *fp) {

    fputs("<!DOCTYPE html>",fp);

}

void main () {

    FILE *fp;
    char buff[255];
    
    fp = fopen("canvas.html", "w+");
   
    HTMLboilerPlate(fp);


    fclose(fp);

}