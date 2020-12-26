/* Tomas Lillo Silva | [411] EDD | 2020
Links: https://repl.it/@XhrdTLS/Taller7Java#Main.java
GitHub: https://github.com/XhrdTLS/EDD-Taller7 */
import java.io.*;

public class Main {
    public static void main(String[] args) {
        Factura f1 = new Factura(10001, 20201212, "20258555-0", "Johan Shell");
        f1.ver();
        new Factura().addLinea(1, 10000, "Cargador 33W");
        f1.addLinea(2, 4500, "Adaptador 12V");
        f1.addLinea(5, 2000, "Tira LEDs 1M");
        f1.addLinea(1, 3000, "WiFi Controller");
        f1.addLinea(4, 200, "Resistencia  ");
        f1.addLinea(2, 500, "interruptor  ");
        f1.addLinea(1, 4000, "SP108E DC5V  ");
        
        Factura f2 = new Factura(10010, 20201214, "18554795-3", "Silvana Regine");
        f2.ver();
        f2.addLinea(1,160000,"Redmi Note 9");
        f2.addLinea(2,3000,"Cable USB-C");
        f2.addLinea(4,5000,"Carcasa Silic");
        f2.addLinea(1,3000,"Protector SCR");
        f2.addLinea(1,80000,"Audifonos TW");
        f2.ver_final();

        Factura f3 = new Factura(10011, 20201214, "11789654-2", "Mariano Rebollo");
        f3.ver();
        f3.addLinea(2,100000,"Monitor FHD+");
        f3.addLinea(1,35000,"Teclado Mec.");
        f3.addLinea(1,25000,"Mouse ScORP5");
        f3.addLinea(1,5000,"Mousepad x15");
        f3.addLinea(1,1000000,"PC i20 RTX8090");
        f3.ver_final();

        Factura f4 = new Factura(10100,20201215,"20456789-6","Leonor Valera");
        f4.ver();
        f4.addLinea(2,18000,"Ard. uno R3");
        f4.addLinea(3,3000,"HC-SR04 Sensor");
        f4.addLinea(5,3500,"MFRC-522 RFID");
        f4.ver_final();

        Factura f5 = new Factura(10101,20201215,"17452147-k","Alberto Mesa");
        f5.ver();
        f5.addLinea(1,1500,"MAX7219 IC");
        f5.addLinea(2,15000,"RGB WS2812 LED");
        f5.addLinea(2,20000,"RGB WS2811 LED");
        f5.ver_final();

        Factura f6 = new Factura(10110, 20201216, "27123321-8", "Soledad Martos");
        f6.ver();
        f6.addLinea(1,54000,"Soundcore DOT2");
        f6.addLinea(2,33000,"Soundcore Mot.B");
        f6.addLinea(1,10000,"ANKER Adapter");
        f6.ver_final();

        Factura f7 = new Factura(10111, 20201217, "15963852-7", "Santos Diallo");
        f7.ver();
        f7.addLinea(2,8000,"HDMI 4K 1M");
        f7.ver_final();

        Factura f8 = new Factura(11000, 20201218, "19456321-9", "Ona Cruz");
        f8.ver();
        f8.addLinea(1,160000,"Redmi Note 9");
        f8.ver_final();

        Factura f9 = new Factura(11001, 20201219, "13741654-0", "Robert Quevedo");
        f9.ver();
        f9.addLinea(1,45000,"Mi Band 5");
        f9.ver_final();

        Factura f10 = new Factura(11010, 20201220, "22843159-4", "Agustina Medrano");
        f10.ver();
        f10.addLinea(1,75000,"Chromecast 3");
        f10.ver_final();
    }
}
//final de Main