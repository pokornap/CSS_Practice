#include <stdio.h>


void HTMLBodyStart(FILE *fp) {
    fputs( "<body>\n"  ,fp);
}

void HTMLBodyEnd(FILE *fp) {
    fputs( "</body>\n"  ,fp);
}

void HTMLboilerPlate(FILE *fp) {

    fputs("<!DOCTYPE html>\n",fp);
    fputs("<html>\n", fp);
    fputs("<head>\n", fp);

    fputs("<title>Canvas</title>\n", fp);

    fputs("</head>\n", fp);
}

void main () {

    FILE *fp;
    char buff[255];
    
    fp = fopen("canvas.html", "w+");
   
    HTMLboilerPlate(fp);
    HTMLBodyStart(fp);

    

    HTMLBodyEnd(fp);

    fclose(fp);
}