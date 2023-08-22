# arduino-analog-okuma-ve-seri-haberlesme
--------------------------------------------
arduino-analog-okuma-ve-seri-haberlesme.ino -not yönlendirme 

- #define potpin A0 

//define(tanımlama),PotPin (Pin numaralı id)'yi erkek erkek jumper kablosuyla birlikte tanımladığımız pin'e enerji alış-veriş işlemini sağlarız 

- void setup 

//tanımlanamayan işlemi tanımlaması için kurarız. 

- Serial.begin(9600);
Serial.println("Pot Değer Okuma"); 

//Seri.başlangıç(akış/voltaj) değerini belirtip,
//Seri.Yazma(") işlemiyle birlikte pot değeri belirtilir.




-void loop 

//tanımlanamayan işlem tanımlanmış olduğuna göre döngüye alırız 

#addloop('tekrar/döngüsel işlem) 


-deger = analogRead(potpin);
  
-float gerilim = (5.00/1024.00)*deger;
- Serial.println(gerilim);
- Serial.println(deger);
-delay(260); 

#addloop('float = akan veri bilgisiyle işlem ekrana yazılıyor) 

//diğer işlemler yukarıdaki işlemin yazılması durumudu
