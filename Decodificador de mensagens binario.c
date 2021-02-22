#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main()
{


    char alphabet[29] = "QUIXKGEZF.VCPORNBLYA,S WHMTDJ";
    char message[700] = "1010100110101100101001101010110011010110010110110101111101010011000101000010001000001101101101100110010110110111011000100100000010010111001101110101100011010101101011001110110110010011001111101011001100101001101100110100101100110010011011101001110000001100111110101010011011001010011010101100110101100111000110100111000111001001100111111010001101011000110011111101000110011111101100110000011011001101101100001001111110100000100010110100110110110110111001110110100111101000010010100001011011100111101100110010011011001111100110110110110011001001110101101010011010110100111011001110001101010101100011011010111010100111011001100100110111010011101100110110101101100101101101100010011000101100111010101001";
    char decoded_message[140];
    int DecimalValues[140];




    int Q = 0;
    int U = 1;
    int I = 2;
    int X = 3;
    int K = 4;
    int G = 5;
    int E = 6;
    int Z = 7;
    int F = 8;
    int Ponto = 9;
    int V = 10;
    int C = 11;
    int P = 12;
    int O = 13;
    int R = 14;
    int N = 15;
    int B = 16;
    int L = 17;
    int Y = 18;
    int A = 19;
    int Virgula = 20;
    int S = 21;
    int Esp = 22;
    int W = 23;
    int H = 24;
    int M = 25;
    int T = 26;
    int D = 27;
    int J = 28;


    //Mensagem 2.
    //Declarado acima a chave, segue com a conversão de binário para decimal:


    int i;
    int decimal = 0;

	printf("Mensagem decodificada: ");

    for(i = 0; i<=4;i++){
        if(message[i] == '1'){

                decimal = 1 * pow(2,i);




            }


        }
        DecimalValues[0] = decimal;
        decimal = 0;


    for(i = 5; i<=9;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(9-i));








            }


        }
        DecimalValues[1] = decimal;
        decimal = 0;

    for(i = 10; i<=14;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(14-i));








            }


        }
        DecimalValues[2] = decimal;
        decimal = 0;

    for(i = 15; i<=19;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(19-i));








            }


        }
        DecimalValues[3] = decimal;
        decimal = 0;

    for(i = 20; i<=24;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(24-i));








            }


        }
        DecimalValues[4] = decimal;
        decimal = 0;

    for(i = 25; i<=29;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(29-i));








            }


        }
        DecimalValues[5] = decimal;
        decimal = 0;

    for(i = 30; i<=34;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(34-i));








            }


        }
        DecimalValues[6] = decimal;
        decimal = 0;

    for(i = 35; i<=39;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(39-i));








            }


        }
        DecimalValues[7] = decimal;
        decimal = 0;

    for(i = 40; i<=44;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(44-i));








            }


        }
        DecimalValues[8] = decimal;
        decimal = 0;

    for(i = 45; i<=49;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(49-i));








            }


        }
        DecimalValues[9] = decimal;
        decimal = 0;

    for(i = 50; i<=54;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(54-i));








            }


        }
        DecimalValues[10] = decimal;
        decimal = 0;

    for(i = 55; i<=59;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(59-i));








            }


        }
        DecimalValues[11] = decimal;
        decimal = 0;

    for(i = 60; i<=64;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(64-i));








            }


        }
        DecimalValues[12] = decimal;
        decimal = 0;

    for(i = 65; i<=69;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(69-i));








            }


        }
        DecimalValues[13] = decimal;
        decimal = 0;

    for(i = 70; i<=74;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(74-i));








            }


        }
        DecimalValues[14] = decimal;
        decimal = 0;

    for(i = 75; i<=79;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(79-i));








            }


        }
        DecimalValues[15] = decimal;
        decimal = 0;

    for(i = 80; i<=84;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(84-i));








            }


        }
        DecimalValues[16] = decimal;
        decimal = 0;

    for(i = 85; i<=89;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(89-i));








            }


        }
        DecimalValues[17] = decimal;
        decimal = 0;

    for(i = 90; i<=94;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(94-i));








            }


        }
        DecimalValues[18] = decimal;
        decimal = 0;

    for(i = 95; i<=99;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(99-i));








            }


        }
        DecimalValues[19] = decimal;
        decimal = 0;

    for(i = 100; i<=104;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(104-i));








            }


        }
        DecimalValues[20] = decimal;
        decimal = 0;

    for(i = 105; i<=109;i++){
        if(message[i] == '1'){

                decimal = 1 * pow(2,(109-i));




            }


        }
        DecimalValues[21] = decimal;
        decimal = 0;


    for(i = 110; i<=114;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(114-i));








            }


        }
        DecimalValues[22] = decimal;
        decimal = 0;

    for(i = 115; i<=119;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(119-i));








            }


        }
        DecimalValues[23] = decimal;
        decimal = 0;

    for(i = 120; i<=124;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(124-i));








            }


        }
        DecimalValues[24] = decimal;
        decimal = 0;

    for(i = 125; i<=129;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(129-i));








            }


        }
        DecimalValues[25] = decimal;
        decimal = 0;

    for(i = 130; i<=134;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(134-i));








            }


        }
        DecimalValues[26] = decimal;
        decimal = 0;

    for(i = 135; i<=139;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(139-i));








            }


        }
        DecimalValues[27] = decimal;
        decimal = 0;

    for(i = 140; i<=144;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(144-i));








            }


        }
        DecimalValues[28] = decimal;
        decimal = 0;

    for(i = 145; i<=149;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(149-i));








            }


        }
        DecimalValues[29] = decimal;
        decimal = 0;

    for(i = 150; i<=154;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(154-i));








            }


        }
        DecimalValues[30] = decimal;
        decimal = 0;

    for(i = 155; i<=159;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(159-i));








            }


        }
        DecimalValues[31] = decimal;
        decimal = 0;

    for(i = 160; i<=164;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(164-i));








            }


        }
        DecimalValues[32] = decimal;
        decimal = 0;

    for(i = 165; i<=169;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(169-i));








            }


        }
        DecimalValues[33] = decimal;
        decimal = 0;

    for(i = 170; i<=174;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(174-i));








            }


        }
        DecimalValues[34] = decimal;
        decimal = 0;

    for(i = 175; i<=179;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(179-i));








            }


        }
        DecimalValues[35] = decimal;
        decimal = 0;

    for(i = 180; i<=184;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(184-i));








            }


        }
        DecimalValues[36] = decimal;
        decimal = 0;

    for(i = 185; i<=189;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(189-i));








            }


        }
        DecimalValues[37] = decimal;
        decimal = 0;

    for(i = 190; i<=194;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(194-i));








            }


        }
        DecimalValues[38] = decimal;
        decimal = 0;

    for(i = 195; i<=199;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(199-i));








            }


        }
        DecimalValues[39] = decimal;
        decimal = 0;

    for(i = 200; i<=204;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(204-i));








            }


        }
        DecimalValues[40] = decimal;
        decimal = 0;

    for(i = 205; i<=209;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(209-i));








            }


        }
        DecimalValues[41] = decimal;
        decimal = 0;

    for(i = 210; i<=214;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(214-i));








            }


        }
        DecimalValues[42] = decimal;
        decimal = 0;

    for(i = 215; i<=219;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(219-i));








            }


        }
        DecimalValues[43] = decimal;
        decimal = 0;

    for(i = 220; i<=224;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(224-i));








            }


        }
        DecimalValues[44] = decimal;
        decimal = 0;

    for(i = 225; i<=229;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(229-i));








            }


        }
        DecimalValues[45] = decimal;
        decimal = 0;

    for(i = 230; i<=234;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(234-i));








            }


        }
        DecimalValues[46] = decimal;
        decimal = 0;

    for(i = 235; i<=239;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(239-i));








            }


        }
        DecimalValues[47] = decimal;
        decimal = 0;

    for(i = 240; i<=244;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(244-i));








            }


        }
        DecimalValues[48] = decimal;
        decimal = 0;

    for(i = 245; i<=249;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(249-i));








            }


        }
        DecimalValues[49] = decimal;
        decimal = 0;

    for(i = 250; i<=254;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(254-i));








            }


        }
        DecimalValues[50] = decimal;
        decimal = 0;

    for(i = 255; i<=259;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(259-i));








            }


        }
        DecimalValues[51] = decimal;
        decimal = 0;

    for(i = 260; i<=264;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(264-i));








            }


        }
        DecimalValues[52] = decimal;
        decimal = 0;

    for(i = 265; i<=269;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(269-i));








            }


        }
        DecimalValues[53] = decimal;
        decimal = 0;

    for(i = 270; i<=274;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(274-i));








            }


        }
        DecimalValues[54] = decimal;
        decimal = 0;

    for(i = 275; i<=279;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(279-i));








            }


        }
        DecimalValues[55] = decimal;
        decimal = 0;

    for(i = 280; i<=284;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(284-i));








            }


        }
        DecimalValues[56] = decimal;
        decimal = 0;

    for(i = 285; i<=289;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(289-i));








            }


        }
        DecimalValues[57] = decimal;
        decimal = 0;

    for(i = 290; i<=294;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(294-i));








            }


        }
        DecimalValues[58] = decimal;
        decimal = 0;

    for(i = 295; i<=299;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(299-i));








            }


        }
        DecimalValues[59] = decimal;
        decimal = 0;

    for(i = 300; i<=304;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(304-i));








            }


        }
        DecimalValues[60] = decimal;
        decimal = 0;

    for(i = 305; i<=309;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(309-i));








            }


        }
        DecimalValues[61] = decimal;
        decimal = 0;

    for(i = 310; i<=314;i++){
        if(message[i] == '1'){

                decimal = 1 * pow(2,(314-i));




            }


        }
        DecimalValues[62] = decimal;
        decimal = 0;


    for(i = 315; i<=319;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(319-i));








            }


        }
        DecimalValues[63] = decimal;
        decimal = 0;

    for(i = 320; i<=324;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(324-i));








            }


        }
        DecimalValues[64] = decimal;
        decimal = 0;

    for(i = 325; i<=329;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(329-i));








            }


        }
        DecimalValues[65] = decimal;
        decimal = 0;

    for(i = 330; i<=334;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(334-i));








            }


        }
        DecimalValues[66] = decimal;
        decimal = 0;

    for(i = 335; i<=339;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(339-i));








            }


        }
        DecimalValues[67] = decimal;
        decimal = 0;

    for(i = 340; i<=344;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(344-i));








            }


        }
        DecimalValues[68] = decimal;
        decimal = 0;

    for(i = 345; i<=349;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(349-i));








            }


        }
        DecimalValues[69] = decimal;
        decimal = 0;

    for(i = 350; i<=354;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(354-i));








            }


        }
        DecimalValues[70] = decimal;
        decimal = 0;

    for(i = 355; i<=359;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(359-i));








            }


        }
        DecimalValues[71] = decimal;
        decimal = 0;

    for(i = 360; i<=364;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(364-i));








            }


        }
        DecimalValues[72] = decimal;
        decimal = 0;

    for(i = 365; i<=369;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(369-i));








            }


        }
        DecimalValues[73] = decimal;
        decimal = 0;

    for(i = 370; i<=374;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(374-i));








            }


        }
        DecimalValues[74] = decimal;
        decimal = 0;

    for(i = 375; i<=379;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(379-i));








            }


        }
        DecimalValues[75] = decimal;
        decimal = 0;

    for(i = 380; i<=384;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(384-i));








            }


        }
        DecimalValues[76] = decimal;
        decimal = 0;

    for(i = 385; i<=389;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(389-i));








            }


        }
        DecimalValues[77] = decimal;
        decimal = 0;

    for(i = 390; i<=394;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(394-i));








            }


        }
        DecimalValues[78] = decimal;
        decimal = 0;

    for(i = 395; i<=399;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(399-i));








            }


        }
        DecimalValues[79] = decimal;
        decimal = 0;

    for(i = 400; i<=404;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(404-i));








            }


        }
        DecimalValues[80] = decimal;
        decimal = 0;

    for(i = 405; i<=409;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(409-i));








            }


        }
        DecimalValues[81] = decimal;
        decimal = 0;

    for(i = 410; i<=414;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(414-i));








            }


        }
        DecimalValues[82] = decimal;
        decimal = 0;

    for(i = 415; i<=419;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(419-i));








            }


        }
        DecimalValues[83] = decimal;
        decimal = 0;

    for(i = 420; i<=424;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(424-i));








            }


        }
        DecimalValues[84] = decimal;
        decimal = 0;

    for(i = 425; i<=429;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(429-i));








            }


        }
        DecimalValues[85] = decimal;
        decimal = 0;

    for(i = 430; i<=434;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(434-i));








            }


        }
        DecimalValues[86] = decimal;
        decimal = 0;

    for(i = 435; i<=439;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(439-i));








            }


        }
        DecimalValues[87] = decimal;
        decimal = 0;

    for(i = 440; i<=444;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(444-i));








            }


        }
        DecimalValues[88] = decimal;
        decimal = 0;

    for(i = 445; i<=449;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(449-i));








            }


        }
        DecimalValues[89] = decimal;
        decimal = 0;

    for(i = 450; i<=454;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(454-i));








            }


        }
        DecimalValues[90] = decimal;
        decimal = 0;

    for(i = 455; i<=459;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(459-i));








            }


        }
        DecimalValues[91] = decimal;
        decimal = 0;

    for(i = 460; i<= 464;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(464-i));








            }


        }
        DecimalValues[92] = decimal;
        decimal = 0;

    for(i = 465; i<=469;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(469-i));








            }


        }
        DecimalValues[93] = decimal;
        decimal = 0;

    for(i = 470; i<=474;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(474-i));








            }


        }
        DecimalValues[94] = decimal;
        decimal = 0;

    for(i = 475; i<=479;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(479-i));








            }


        }
        DecimalValues[95] = decimal;
        decimal = 0;

    for(i = 480; i<=484;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(484-i));








            }


        }
        DecimalValues[96] = decimal;
        decimal = 0;

    for(i = 485; i<=489;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(489-i));








            }


        }
        DecimalValues[97] = decimal;
        decimal = 0;

    for(i = 490; i<=494;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(494-i));








            }


        }
        DecimalValues[98] = decimal;
        decimal = 0;

    for(i = 495; i<=499;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(499-i));








            }


        }
        DecimalValues[99] = decimal;
        decimal = 0;

    for(i = 500; i<=504;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(504-i));








            }


        }
        DecimalValues[100] = decimal;
        decimal = 0;

    for(i = 505; i<=509;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(509-i));








            }


        }
        DecimalValues[101] = decimal;
        decimal = 0;

    for(i = 510; i<=514;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(514-i));








            }


        }
        DecimalValues[102] = decimal;
        decimal = 0;

    for(i = 515; i<=519;i++){
        if(message[i] == '1'){

                decimal = 1 * pow(2,(519-i));




            }


        }
        DecimalValues[103] = decimal;
        decimal = 0;


    for(i = 520; i<=524;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(524-i));








            }


        }
        DecimalValues[104] = decimal;
        decimal = 0;

    for(i = 525; i<=529;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(529-i));








            }


        }
        DecimalValues[105] = decimal;
        decimal = 0;

    for(i = 530; i<=534;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(534-i));








            }


        }
        DecimalValues[106] = decimal;
        decimal = 0;

    for(i = 535; i<=539;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(539-i));








            }


        }
        DecimalValues[107] = decimal;
        decimal = 0;

    for(i = 540; i<=544;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(544-i));








            }


        }
        DecimalValues[108] = decimal;
        decimal = 0;

    for(i = 545; i<=549;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(549-i));








            }


        }
        DecimalValues[109] = decimal;
        decimal = 0;

    for(i = 550; i<=554;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(554-i));








            }


        }
        DecimalValues[110] = decimal;
        decimal = 0;

    for(i = 555; i<=559;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(559-i));








            }


        }
        DecimalValues[111] = decimal;
        decimal = 0;

    for(i = 560; i<=564;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(564-i));








            }


        }
        DecimalValues[112] = decimal;
        decimal = 0;

    for(i = 565; i<=569;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(569-i));








            }


        }
        DecimalValues[113] = decimal;
        decimal = 0;

    for(i = 570; i<=574;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(574-i));








            }


        }
        DecimalValues[114] = decimal;
        decimal = 0;

    for(i = 575; i<=579;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(579-i));








            }


        }
        DecimalValues[115] = decimal;
        decimal = 0;

    for(i = 580; i<=584;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(584-i));








            }


        }
        DecimalValues[116] = decimal;
        decimal = 0;

    for(i = 585; i<=589;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(589-i));








            }


        }
        DecimalValues[117] = decimal;
        decimal = 0;

    for(i = 590; i<=594;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(594-i));








            }


        }
        DecimalValues[118] = decimal;
        decimal = 0;

    for(i = 595; i<=599;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(599-i));








            }


        }
        DecimalValues[119] = decimal;
        decimal = 0;

    for(i = 600; i<=604;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(604-i));








            }


        }
        DecimalValues[120] = decimal;
        decimal = 0;

    for(i = 605; i<=609;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(609-i));








            }


        }
        DecimalValues[121] = decimal;
        decimal = 0;

    for(i = 610; i<=614;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(614-i));








            }


        }
        DecimalValues[122] = decimal;
        decimal = 0;

    for(i = 615; i<=619;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(619-i));








            }


        }
        DecimalValues[123] = decimal;
        decimal = 0;

    for(i = 620; i<=624;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(624-i));








            }


        }
        DecimalValues[124] = decimal;
        decimal = 0;

    for(i = 625; i<=629;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(629-i));








            }


        }
        DecimalValues[125] = decimal;
        decimal = 0;

    for(i = 630; i<=634;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(634-i));








            }


        }
        DecimalValues[126] = decimal;
        decimal = 0;

    for(i = 635; i<=639;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(639-i));








            }


        }
        DecimalValues[127] = decimal;
        decimal = 0;

    for(i = 640; i<=644;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(644-i));








            }


        }
        DecimalValues[128] = decimal;
        decimal = 0;

    for(i = 645; i<=649;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(649-i));








            }


        }
        DecimalValues[129] = decimal;
        decimal = 0;

    for(i = 650; i<=654;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(654-i));








            }


        }
        DecimalValues[130] = decimal;
        decimal = 0;

    for(i = 655; i<=659;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(659-i));








            }


        }
        DecimalValues[131] = decimal;
        decimal = 0;

    for(i = 660; i<=664;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(664-i));








            }


        }
        DecimalValues[132] = decimal;
        decimal = 0;

    for(i = 665; i<=669;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(669-i));








            }


        }
        DecimalValues[133] = decimal;
        decimal = 0;

    for(i = 670; i<=674;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(674-i));








            }


        }
        DecimalValues[134] = decimal;
        decimal = 0;

    for(i = 675; i<=679;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(679-i));








            }


        }
        DecimalValues[135] = decimal;
        decimal = 0;

    for(i = 680; i<=684;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(684-i));








            }



        }
        DecimalValues[136] = decimal;
        decimal = 0;

    for(i = 685; i<=689;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(689-i));








            }



        }
        DecimalValues[137] = decimal;
        decimal = 0;

    for(i = 690; i<=694;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(694-i));








            }



        }
        DecimalValues[138] = decimal;
        decimal = 0;

    for(i = 695; i<=699;i++){
        if(message[i] == '1'){
                decimal = decimal + pow(2,(699-i));








            }



        }
        DecimalValues[139] = decimal;
        decimal = 0;






    //Finalizado o processo de conversão de binário para decimal;

    int j;
    for(j = 0;j<=140;j++){

        if(DecimalValues[j] == Q){
            printf("%c",alphabet[0]);


        }
        if(DecimalValues[j] == U){
            printf("%c",alphabet[1]);


        }
        if(DecimalValues[j] == I){
            printf("%c",alphabet[2]);


        }
        if(DecimalValues[j] == X){
            printf("%c",alphabet[3]);

        }
        if(DecimalValues[j] == K){
            printf("%c",alphabet[4]);


        }
        if(DecimalValues[j] == G){
            printf("%c",alphabet[5]);


        }
        if(DecimalValues[j] == E){
            printf("%c",alphabet[6]);


        }
        if(DecimalValues[j] == Z){
            printf("%c",alphabet[7]);


        }
        if(DecimalValues[j] == F){
            printf("%c",alphabet[8]);


        }
        if(DecimalValues[j] == Ponto){
            printf("%c",alphabet[9]);


        }
        if(DecimalValues[j] == V){
            printf("%c",alphabet[10]);


        }
        if(DecimalValues[j] == C){
            printf("%c",alphabet[11]);


        }
        if(DecimalValues[j] == P){
            printf("%c",alphabet[12]);


        }
        if(DecimalValues[j] == O){
            printf("%c",alphabet[13]);


        }
        if(DecimalValues[j] == R){
            printf("%c",alphabet[14]);


        }
        if(DecimalValues[j] == N){
            printf("%c",alphabet[15]);


        }
        if(DecimalValues[j] == B){
            printf("%c",alphabet[16]);


        }
        if(DecimalValues[j] == L){
            printf("%c",alphabet[17]);


        }
        if(DecimalValues[j] == Y){
            printf("%c",alphabet[18]);


        }
        if(DecimalValues[j] == A){
            printf("%c",alphabet[19]);


        }
        if(DecimalValues[j] == Virgula){
            printf("%c",alphabet[20]);


        }
        if(DecimalValues[j] == S){
            printf("%c",alphabet[21]);


        }
        if(DecimalValues[j] == Esp){
            printf("%c",alphabet[22]);


        }
        if(DecimalValues[j] == W){
            printf("%c",alphabet[23]);


        }
        if(DecimalValues[j] == H){
            printf("%c",alphabet[24]);


        }
        if(DecimalValues[j] == M){
            printf("%c",alphabet[25]);


        }
        if(DecimalValues[j] == T){
            printf("%c",alphabet[26]);


        }
        if(DecimalValues[j] == D){
            printf("%c",alphabet[27]);


        }
        if(DecimalValues[j] == J){
            printf("%c",alphabet[28]);


        }





    }

printf("\n \n");


return 0;
}
