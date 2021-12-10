#include "pxt.h"

/**
* FIbonacci
*/
//% color=#1E90FF weight=116 icon="\uf00a"
//% groups="['Fibonacci','Servo','LEDs','LDR','others']"
namespace fibo {
    /**
    * Calcula Fibonacci del número dado
    */
    //% group="Fibonacci"
    //% blockId=fibonumber
    //% block="Mostrar Fibonacci de $n"
    void fibonaccii(int n){
        if(n<=1)
        uBit.display.scroll(n,150);
        else{
            int f0 = 0;
            int f1 = 1;
            int fn = 0;
            for(int i = 0; i < n;i++){
                fn = f1 + f0;
                f0 = f1;
                f1 = fn;
            }
            uBit.display.scroll(fn,150);
        }
    }
    /**
    * Mover servo
    */
    //% group="Servo"
    //% blockId=movservo
    //% block="Mueve el servo a $x posición conectado a pin P0"
    void sservo(int x){
        int y = uBit.io.P0.setServoValue(x);
    }
    /**
    * Prender LED
    */
    //% group="LEDs"
    //% blockId=encled
    //% block="Encender LED para pin P0"
    void eled(){
        int y = uBit.io.P0.setDigitalValue(1);
    }
    /**
    * Apagar LED
    */
    //% group="LEDs"
    //% blockId=apaled
    //% block="Apagar LED para pin P0"
    void aled(){
        int y = uBit.io.P0.setDigitalValue(0);
    }
    /**
    * Valor de LDR
    */
    //% group="LDR"
    //% blockId=ldrvalue
    //% block="Devuelve valor de LDR utilizando pin P0"
    int ldr(){
        int y = uBit.io.P0.getAnalogValue();
        return y;
    }
}