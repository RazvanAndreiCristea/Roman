# Roman
CERINTA:
Se citeste de la tastatura un numar natural n<4000. Scrieti un program care afiseaza
numarul n in scriere cu cifre romane.
Indicatie: 1=I; 5=V; 10=X; 50=L; 100=C; 500=D; 1000=M;
4=IV; 9=IX; 40=XL; 90=XC; 400=CD; 900=CM, iar pentru zero se va afisa pe ecran 'Nulla'.

Solutie: 
Se citeste numarul n si cat timp acesta este mai mare ca o valoare esalon (ex: 1000,100,50,10, etc.)
vom afisa litera corespunzatoare acelei valori si pe urma scadem acea valoare

Exemplu:                       Ecran:
input: 1024 ->                 output: nimic,
1024>1000 ->                   output: M,
1024-1000=24 ->                output: M,
24>10 ->                       output: MX,
24-10=14 ->                    output: MX,
14>10 ->                       output: MXX,
14-10=4 ->                     output: MXX,
4 ->                           output: MXXIV -numarul cautat.

Sper sa va fie de folos si spor la treaba!
