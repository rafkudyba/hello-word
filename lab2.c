#include <LCD.h>


void czekaj(void)
{
    int i;
	
    for(i=0; i<20000; i++){
        ;}
}



void main(void){
    init();
    lcdcmd(0x01);
    while(1){
        unsigned char cyf=readkb();
        if(cyf!='\0'){
            chartype(cyf);
        }
        
        czekaj();
    }
}