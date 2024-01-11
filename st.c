/*
 * TODO: what do the null bytes in printf do? Somehow, the SRSCAN format is messed up,
 * but if I replace the null bytes with "X", it's somehow better?!?!?
 * TODO: fix invalid inputs leading to endless loop
 * TODO: at the end, run dos2unix
 */

/* HINT: Somehow, the file command recognizes this source file as binary data.
 *       However, you can still grep it by using the -a parameter for forcing text mode.
 */

/* Based on the 2008 C# port by Michael Birken: https://meatfighter.com/startrek1971/ */
#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* don't forget -lm */

/*srand(0);*/

double A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;
double _A[9][9];
double _B[3];
double _C[10][3];
double _D[10];
double _G[9][9];
double _K[4][4];
double _N[4];
double _P[4];
double _Q[3];
double _S[5];
double _T[3];
double _V[7];
double _X[3];
double _Z[9][9];

void _3690();
void _4120();
void _5380();
void _5610();
void _5820();
void _9000();
void _9200();
void _9400();
void _9700();

double getRand() {
    return (double)(rand())/(double)(RAND_MAX);
}

double Abs(double a) {
    return a > 0 ? a : -a;
}

double Max(double a, double b) {
    return a > b ? a : b;
}

double Min(double a, double b) {
    return a < b ? a : b;
}

double FND(double D) {
    return sqrt(pow((_K[(int)I][1] - _S[1]), 2) + pow((_K[(int)I][2] - _S[2]), 2));
}

void Fill(double *array, double value, size_t length) {
    size_t i;
    for (i = 0; i < length; i++) {
        array[i] = value;
    }
}

#define ARRAYLEN(arr) (sizeof(arr) / sizeof(arr[0]))

#define MULTIFILL(matrix, value, rows, cols) { \
    size_t i, j; \
    for (i = 0; i < rows; i++) { \
        for (j = 0; j < cols; j++) { \
            matrix[i][j] = value; \
        } \
    } \
} \

void FlushInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void Input(double *a) {
    int result = scanf("%lf", a);
    FlushInputBuffer();
    if (result < 1) {
        *a = -1;
    }
}

void InputMulti(double *a, double *b, double *c, double *d) {
    scanf("%lf,%lf,%lf,%lf", a, b, c, d);
    FlushInputBuffer();
}

void _3690() {
_3690: printf("*** KLINGON AT SECTOR");
_3691: _V[4] = _K[(int)I][1];
_3692: _V[5] = _K[(int)I][2];
_3693: _9000();
_3694: printf("DESTROYED ***\n");
_3710: _P[1] = _P[1] - 1;
_3720: _P[3] = _P[3] - 1;
_3740: _A[(int)(_K[(int)I][1] + .5)][(int)(_K[(int)I][2] + .5)] = 0;
_3770: _G[(int)_Q[1]][(int)_Q[2]] = _P[1] * 100 + _B[1] * 10 + _S[3];
_3780: return;
}

int _3790() {
_3790: if (C != 3) goto _3820;
_3800: printf("STAR BASE SHIELDS PROTECT THE ENTERPRISE\n");
_3810: return 0;
_3820: if (_P[1] <= 0) goto _3910;
_3830: for(I = 1; I <= 3; I += 1) {
_3840:   if (_K[(int)I][3] <= 0) goto _3900;
_3850:   H = (_K[(int)I][3] / FND(0)) * (2 * getRand());
_3860:   S = S - H;
_3870:   Z = H;
_3871:   _9400();
_3872:   printf(" UNIT HIT ON ENTERPRISE FROM SECTOR");
_3873:   _V[4] = _K[(int)I][1];
_3874:   _V[5] = _K[(int)I][2];
_3875:   _9000();
_3876:   printf("\n   (");
_3877:   Z = Max(0, S);
_3878:   _9400();
_3879:   printf(" LEFT)\n");
_3890:   if (S < 0) return 1;
_3900: ;}
_3910: return 0;
}

void _4120() {
_4120: for(I = _S[1] - 1; I <= _S[1] + 1; I += 1) {
_4130:   for(J = _S[2] - 1; J <= _S[2] + 1; J += 1) {
_4140:     if (I < 1 || I > 8 || J < 1 || J > 8) goto _4200;
_4160:     if (_A[(int)(I + .5)][(int)(J + .5)] == 3) goto _4240;
_4200:   ;}
_4210: ;}
_4220: D = 0;
_4230: goto _4310;
_4240: D = 1;
_4249: /* docked */
_4250: C = 3;
_4260: E = 3000;
_4270: P = 10;
_4280: printf("SHIELDS DROPPED FOR DOCKING PURPOSES\n");
_4290: S = 0;
_4300: goto _4380;
_4310: if (_P[1] > 0) goto _4350;
_4320: if (E < K * .1) goto _4370;
_4329: /* green */
_4330: C = 0;
_4340: goto _4380;
_4349: /* red */
_4350: C = 2;
_4360: goto _4380;
_4369: /* yellow */
_4370: C = 1;
_4380: if (_D[2] >= 0) goto _4430;
_4390: printf("\n");
_4400: printf("*** SHORT RANGE SENSORS ARE OUT ***\n");
_4410: printf("\n");
_4420: goto _4530;
_4430: printf("-=--=--=--=--=--=--=--=-\n");
_4432: _V[3] = 0;
_4440: _9200();
_4445: printf("\n");
_4450: _9200();
_4455: printf(" STARDATE  %.0lf\n", T);
_4460: _9200();
_4461: printf(" CONDITION ");
_4462: if (C == 1) goto _4467;
_4463: if (C == 2) goto _4469;
_4464: if (C == 3) goto _4471;
_4465: printf("GREEN\n");
_4466: goto _4472;
_4467: printf("YELLOW\n");
_4468: goto _4472;
_4469: printf("RED\n");
_4470: goto _4472;
_4471: printf("DOCKED\n");
_4472: _9200();
_4473: printf(" QUADRANT ");
_4474: _V[4] = _Q[1];
_4475: _V[5] = _Q[2];
_4476: _9000();
_4477: printf("\n");
_4480: _9200();
_4481: printf(" SECTOR   ");
_4482: _V[4] = _S[1];
_4483: _V[5] = _S[2];
_4484: _9000();
_4485: printf("\n");
_4490: _9200();
_4495: printf(" ENERGY    %.0lf\n", (int)E);
_4500: _9200();
_4505: printf(" SHIELDS   %.0lf\n", (int)S);
_4510: _9200();
_4515: printf(" PHOTON TORPEDOES %.0lf\n", P);
_4520: printf("-=--=--=--=--=--=--=--=-\n");
_4530: return;
}

void _5380() {
_5378: /* find-empty-location sub, strings removed */
_5380: F = (int)(getRand() * 8 + 1);
_5390: G = (int)(getRand() * 8 + 1);
_5400: if (_A[(int)F][(int)G] != 0) goto _5380;
_5410: return;
}

void _5610() {
_5610: /* ****  PRINTS DEVICE NAME FROM ARRAY ***** */
_5615: /* recoded to remove strings */
_5620: if (F == 1) goto _5635;
_5623: if (F == 2) goto _5640;
_5624: if (F == 3) goto _5645;
_5625: if (F == 4) goto _5650;
_5626: if (F == 5) goto _5655;
_5627: if (F == 6) goto _5660;
_5628: if (F == 7) goto _5665;
_5630: printf("COMPUTER    ");
_5632: return;
_5635: printf("WARP ENGINES");
_5637: return;
_5640: printf("S.R. SENSORS");
_5642: return;
_5645: printf("L.R. SENSORS");
_5647: return;
_5650: printf("PHASER CNTRL");
_5652: return;
_5655: printf("PHOTON TUBES");
_5657: return;
_5660: printf("DAMAGE CNTRL");
_5662: return;
_5665: printf("SHIELD CNTRL");
_5667: return;
}

void _5820() {
_5823: printf("\n");
_5824: printf("\n");
_5825: printf("     INSTRUCTIONS:\n");
_5826: printf("\n");
_5830: printf("<*> = ENTERPRISE\n");
_5840: printf("+++ = KLINGON\n");
_5850: printf(">!< = STARBASE\n");
_5860: printf(" *  = STAR\n");
_5865: printf("\n");
_5870: printf("COMMAND 0 = WARP ENGINE CONTROL\n");
_5880: printf("  'COURSE IS IN A CIRCULAR NUMERICAL         4    3    2\n");
_5890: printf("  VECTOR ARRANGEMENT AS SHOWN.                `.  :  .'\n");
_5900: printf("  INTERGER AND REAL VALUES MAY BE               `.:.'\n");
_5910: printf("  USED.  THEREFORE COURSE 1.5 IS             5---<*>---1\n");
_5920: printf("  HALF WAY BETWEEN 1 AND 2.                     .':`.\n");
_5930: printf("                                              .'  :  `.\n");
_5940: printf("  A VECTOR OF 9 IS UNDEFINED, BUT            6    7    8\n");
_5950: printf("  VALUES MAY APPROACH 9.\n");
_5960: printf("                                               COURSE\n");
_5970: printf("  ONE 'WARP FACTOR' IS THE SIZE OF\n");
_5980: printf("  ONE QUADRANT.  THEREFORE TO GET FROM\n");
_5990: printf("  QUADRANT 5,6 TO 5,5 YOU WOULD USE COURSE 3, WARP\n");
_6000: printf("  FACTOR 1. COORDINATES ARE SPECIFIED USING X,Y NOTATION\n");
_6002: printf("  WITH X 1-8 FROM LEFT-RIGHT AND Y 1-8 FROM TOP-BOTTOM.\n");
_6004: if (A != 2) goto _6009;
_6005: printf("\n");
_6006: printf( "ENTER A NUMBER TO CONTINUE...  ");
_6007: Input(&I);
_6008: printf("\n");
_6009: printf("\n");
_6010: printf("COMMAND 1 = SHORT RANGE SENSOR SCAN\n");
_6020: printf("  PRINTS THE QUADRANT YOU ARE CURRENTLY IN, INCLUDING\n");
_6030: printf("  STARS, KLINGONS, STARBASES, AND THE ENTERPRISE; ALONG\n");
_6040: printf("  WITH OTHER PERTINATE INFORMATION.\n");
_6045: printf("\n");
_6050: printf("COMMAND 2 = LONG RANGE SENSOR SCAN\n");
_6060: printf("  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE\n");
_6070: printf("  OF THE ENTERPRISE IN THE MIDDLE OF THE SCAN.  THE SCAN\n");
_6080: printf("  IS CODED IN THE FORM XXX, WHERE THE UNITS DIGIT IS THE\n");
_6090: printf("  NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF STAR-\n");
_6100: printf("  BASES, THE HUNDREDS DIGIT IS THE NUMBER OF KLINGONS.\n");
_6105: printf("\n");
_6110: printf("COMMAND 3 = PHASER CONTROL\n");
_6120: printf("  ALLOWS YOU TO DESTROY THE KLINGONS BY HITTING HIM WITH\n");
_6130: printf("  SUITABLY LARGE NUMBERS OF ENERGY UNITS TO DEPLETE HIS \n");
_6140: printf("  SHIELD POWER.  KEEP IN MIND THAT WHEN YOU SHOOT AT\n");
_6150: printf("  HIM, HE GONNA DO IT TO YOU TOO.\n");
_6151: if (A != 2) goto _6159;
_6152: for(I = 1; I <= 5; I += 1) {
_6153:   printf("\n");
_6154: ;}
_6155: printf( "ENTER A NUMBER TO CONTINUE...  ");
_6156: Input(&I);
_6157: printf("\n");
_6159: printf("\n");
_6160: printf("COMMAND 4 = PHOTON TORPEDO CONTROL\n");
_6170: printf("  COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL\n");
_6180: printf("  IF YOU HIT THE KLINGON, HE IS DESTROYED AND CANNOT FIRE\n");
_6190: printf("  BACK AT YOU.  IF YOU MISS, HE WILL SHOOT HIS PHASERS AT\n");
_6200: printf("  YOU.\n");
_6210: printf("   NOTE: THE LIBRARY COMPUTER (COMMAND 7) HAS AN OPTION\n");
_6220: printf("   TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2).\n");
_6225: printf("\n");
_6230: printf("COMMAND 5 = SHIELD CONTROL\n");
_6240: printf("  DEFINES NUMBER OF ENERGY UNITS TO ASSIGN TO SHIELDS\n");
_6250: printf("  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.\n");
_6255: printf("\n");
_6260: printf("COMMAND 6 = DAMAGE CONTROL REPORT\n");
_6270: printf("  GIVES STATE OF REPAIRS OF ALL DEVICES.");
_6275: printf("  A STATE OF REPAIR\n");
_6280: printf("  LESS THAN ZERO SHOWS THAT THAT DEVICE IS TEMPORARALY\n");
_6290: printf("  DAMAGED.\n");
_6291: if (A != 2) goto _6299;
_6292: for(I = 1; I <= 6; I += 1) {
_6293:   printf("\n");
_6294: ;}
_6295: printf( "ENTER A NUMBER TO CONTINUE...  ");
_6296: Input(&I);
_6297: printf("\n");
_6299: printf("\n");
_6300: printf( "COMMAND 7 = LIBRARY COMPUTER\n");
_6310: printf( "  THE LIBRARY COMPUTER CONTAINS THREE OPTIONS:\n");
_6320: printf( "    OPTION 0 = CUMULATIVE GALACTIC RECORD\n");
_6330: printf( "     SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS\n");
_6340: printf( "     LONG RANGE SENSOR SCANS\n");
_6350: printf( "    OPTION 1 = STATUS REPORT\n");
_6360: printf( "     SHOWS NUMBER OF KLINGONS, STARDATES AND STARBASES\n");
_6370: printf( "     LEFT.\n");
_6380: printf( "    OPTION 2 = PHOTON TORPEDO DATA\n");
_6390: printf( "     GIVES TRAJECTORY AND DISTANCE BETWEEN THE ENTERPRISE\n");
_6400: printf( "     AND ALL KLINGONS IN YOUR QUADRANT\n");
_6401: if (A != 2) goto _6408;
_6402: for(I = 1; I <= 9; I += 1) {
_6403:   printf("\n");
_6404: ;}
_6408: printf("\n");
_6410: return;
}

void _9000() {
_8995: /* sub to help convert PRINT USING, displays " x,y " */
_8996: /* coordinates (V[4],V[5]) */
_9000: printf(" ");
_9010: L = (int)(_V[4] + .5);
_9020: _9700();
_9030: printf(",");
_9040: L = (int)(_V[5] + .5);
_9050: _9700();
_9060: printf(" ");
_9070: return;
}

void _9200() {
_9195: /* print display line from A[x,y] */
_9196: /* y coord spec'd by V[3], incremented */
_9200: _V[3] = _V[3] + 1;
_9210: for(I = 1; I <= 8; I += 1) {
_9220:   A = _A[(int)I][(int)_V[3]];
_9230:   if (A == 1) goto _9240;
_9232:   if (A == 2) goto _9242;
_9233:   if (A == 3) goto _9244;
_9234:   if (A == 4) goto _9246;
_9235:   printf("   ");
_9236:   goto _9250;
_9240:   printf("<*>");
_9241:   goto _9250;
_9242:   printf("+++");
_9243:   goto _9250;
_9244:   printf(">!<");
_9245:   goto _9250;
_9246:   printf(" * ");
_9250: ;}
_9260: return;
}

void _9400() {
_9395: /* Integer print subroutine */
_9396: /* up to 4 digits -9999 to 9999, no spaces */
_9397: /* Number to print in Z, L used for digit */
_9400: if (Z >= 0) goto _9420;
_9410: printf("-");
_9420: Z = Abs(Z);
_9430: Z = (int)Z;
_9440: if (Z < 10) goto _9560;
_9450: if (Z < 100) goto _9530;
_9460: if (Z < 1000) goto _9500;
_9470: L = (int)(Z / 1000);
_9480: Z = Z - L * 1000;
_9490: _9700();
_9500: L = (int)(Z / 100);
_9510: Z = Z - L * 100;
_9520: _9700();
_9530: L = (int)(Z / 10);
_9540: Z = Z - L * 10;
_9550: _9700();
_9560: L = Z;
_9570: _9700();
_9580: return;
}

void _9700() {
_9695: /* Digit print subroutine, digit in L */
_9700: if (L == 1) goto _9810;
_9710: if (L == 2) goto _9830;
_9720: if (L == 3) goto _9850;
_9730: if (L == 4) goto _9870;
_9740: if (L == 5) goto _9890;
_9750: if (L == 6) goto _9910;
_9760: if (L == 7) goto _9930;
_9770: if (L == 8) goto _9950;
_9780: if (L == 9) goto _9970;
_9790: printf("0");
_9800: return;
_9810: printf("1");
_9820: return;
_9830: printf("2");
_9840: return;
_9850: printf("3");
_9860: return;
_9870: printf("4");
_9880: return;
_9890: printf("5");
_9900: return;
_9910: printf("6");
_9920: return;
_9930: printf("7");
_9940: return;
_9950: printf("8");
_9960: return;
_9970: printf("9");
_9980: return;
}

int main() {
_100: /* ************************************************************** */
_110: /* *** */
_120: /* ***     STAR TREK: BY MIKE MAYFIELD, CENTERLINE ENGINEERING */
_130: /* *** */
_140: /* ***        TOTAL INTERACTION GAME - ORIG. 20 OCT 1972 */
_150: /* *** */
_160: /* ************************************************************** */
_170: for(I = 1; I <= 20; I += 1) {
_172:   printf("\n");
_174: ;}
_180: printf("                          STAR TREK \n");
_182: printf("\n");
_183: printf("\n");
_184: printf("\n");
_190: printf("ENTER 1 OR 2 FOR INSTRUCTIONS (ENTER 2 TO PAGE) ");
_200: Input(&A);
_205: if (A != 1 && A != 2) goto _210;
_207: _5820();
_208: /* randomize query to mix it up */
_210: printf("\n");
_211: printf("ENTER SEED NUMBER ");
_212: Input(&A);
_213: A = (int)(Abs(A));
_215: printf("INITIALIZING...\n");
_220: for(I = 0; I <= A; I += 1) {
_222:   J = getRand();
_225: ;}
_230: /* *****  PROGRAM STARTS HERE ***** */
_240: printf("\n");
_290: T = (int)(getRand() * 20 + 20) * 100;
_291: _T[1] = T;
_300: _T[2] = 30;
_310: D = 0;
_320: E = 3000;
_321: K = E;
_330: P = 10;
_331: M = P;
_340: _S[4] = 200;
_350: Q = 0;
_351: S = 0;
_370: _Q[1] = (int)(getRand() * 8) + 1;
_380: _Q[2] = (int)(getRand() * 8) + 1;
_390: _S[1] = (int)(getRand() * 8) + 1;
_400: _S[2] = (int)(getRand() * 8) + 1;
_410: /* C array numbers in X,Y notation/display */
_420: /* dir 1 = X+1,Y    right */
_421: _C[1][1] = 1;
_422: _C[1][2] = 0;
_423: /* dir 2 = X+1,Y-1  right and up */
_424: _C[2][1] = 1;
_425: _C[2][2] = -1;
_426: /* dir 3 = X, Y-1   up */
_427: _C[3][1] = 0;
_428: _C[3][2] = -1;
_429: /* dir 4 = X-1,Y-1  left and up */
_430: _C[4][1] = -1;
_431: _C[4][2] = -1;
_432: /* dir 5 = X-1,Y    left */
_433: _C[5][1] = -1;
_434: _C[5][2] = 0;
_435: /* dir 6 = X-1,Y+1  left and down */
_436: _C[6][1] = -1;
_437: _C[6][2] = 1;
_438: /* dir 7 = X,Y+1    down */
_439: _C[7][1] = 0;
_440: _C[7][2] = 1;
_441: /* dir 8 = X+1,Y+1  right and down */
_442: _C[8][1] = 1;
_443: _C[8][2] = 1;
_444: /* dir 9 = same as dir 1 */
_445: _C[9][1] = 1;
_446: _C[9][2] = 0;
_450: Fill(_D, 0, ARRAYLEN(_D));
_490: _B[2] = 0;
_491: _P[3] = 0;
_500: for(I = 1; I <= 8; I += 1) {
_510:   for(J = 1; J <= 8; J += 1) {
_520:     F = getRand();
_530:     if (F > .98) goto _580;
_540:     if (F > .95) goto _610;
_550:     if (F > .8) goto _640;
_560:     _P[1] = 0;
_570:     goto _660;
_580:     _P[1] = 3;
_590:     _P[3] = _P[3] + 3;
_600:     goto _660;
_610:     _P[1] = 2;
_620:     _P[3] = _P[3] + 2;
_630:     goto _660;
_640:     _P[1] = 1;
_650:     _P[3] = _P[3] + 1;
_660:     F = getRand();
_670:     if (F > .96) goto _700;
_680:     _B[1] = 0;
_690:     goto _720;
_700:     _B[1] = 1;
_710:     _B[2] = _B[2] + 1;
_720:     _S[3] = (int)(getRand() * 8 + 1);
_730:     _G[(int)I][(int)J] = _P[1] * 100 + _B[1] * 10 + _S[3];
_740:     _Z[(int)I][(int)J] = 0;
_750:   ;}
_760: ;}
_770: _P[2] = _P[3];
_775: if (_B[2] <= 0 || _P[3] <= 0) goto _490;
_780: printf("YOU MUST DESTROY ");
_781: Z = _P[3];
_782: _9400();
_783: printf(" KINGONS IN ");
_784: Z = _T[2];
_785: _9400();
_786: printf(" STARDATES WITH ");
_788: Z = _B[2];
_789: _9400();
_790: printf(" STARBASE");
_791: if (_B[2] == 1) goto _793;
_792: printf("S");
_793: printf("\n");
_800: printf("\n");
_810: _P[1] = 0;
_811: _B[1] = 0;
_812: _S[3] = 0;
_820: _Q[1] = Min(8, Max(1, _Q[1]));
      _Q[2] = Min(8, Max(1, _Q[2]));
      _S[1] = Min(8, Max(1, _S[1]));
      _S[2] = Min(8, Max(1, _S[2]));
_830: X = _G[(int)_Q[1]][(int)_Q[2]] * 1.00000E-02;
_840: _P[1] = (int)X;
_850: _B[1] = (int)((X - _P[1]) * 10);
_860: _S[3] = _G[(int)_Q[1]][(int)_Q[2]] - (int)(_G[(int)_Q[1]][(int)_Q[2]] * .1) * 10;
_870: if (_P[1] == 0) goto _910;
_880: if (S > 200) goto _910;
_890: printf("COMBAT AREA      CONDITION RED\n");
_900: printf("   SHIELDS DANGEROUSLY LOW\n");
_910: MULTIFILL(_K, 0, 4, 4);
_920: for (I = 1; I <= 3; I += 1) {
_930:   _K[(int)I][3] = 0;
_940: ;}
_942: /* A[x,y]: */
_943: /* 0="   " */
_944: /* 1="<*>" */
_945: /* 2="+++" */
_946: /* 3=">!<" */
_947: /* 4=" * " */
_950: MULTIFILL(_A, 0, 9, 9);
_1000: _A[(int)(_S[1] + .5)][(int)(_S[2] + .5)] = 1;
_1020: for(I = 1; I <= (int)_P[1]; I += 1) {
_1030:   _5380();
_1040:   _A[(int)F][(int)G] = 2;
_1080:   _K[(int)I][1] = F;
_1090:   _K[(int)I][2] = G;
_1100:   _K[(int)I][3] = _S[4];
_1110: ;}
_1120: for(I = 1; I <= (int)_B[1]; I += 1) {
_1130:   _5380();
_1140:   _A[(int)F][(int)G] = 3;
_1180: ;}
_1190: for(I = 1; I <= (int)_S[3]; I += 1) {
_1200:   _5380();
_1210:   _A[(int)F][(int)G] = 4;
_1250: ;}
_1260: _4120();
_1270: printf("COMMAND ");
_1280: Input(&A);
_1290: if (A == 0) goto _1410;
_1291: if (A == 1) goto _1260;
_1292: if (A == 2) goto _2330;
_1293: if (A == 3) goto _2530;
_1294: if (A == 4) goto _2800;
_1295: if (A == 5) goto _3460;
_1296: if (A == 6) goto _3560;
_1297: if (A == 7) goto _4630;
       if (A == 9) exit(0);
_1300: printf("\n");
_1310: printf("   0 = SET COURSE\n");
_1320: printf("   1 = SHORT RANGE SENSOR SCAN\n");
_1330: printf("   2 = LONG RANGE SENSOR SCAN\n");
_1340: printf("   3 = FIRE PHASERS\n");
_1350: printf("   4 = FIRE PHOTON TORPEDOES\n");
_1360: printf("   5 = SHIELD CONTROL\n");
_1370: printf("   6 = DAMAGE CONTROL REPORT\n");
_1380: printf("   7 = CALL ON LIBRARY COMPUTER\n");
_1390: printf("\n");
_1400: goto _1270;
_1410: printf("COURSE (1-9) ");
_1420: Input(&B);
_1430: if (B == 0) goto _1270;
_1440: if (B < 1 || B >= 9) goto _1410;
_1450: printf("WARP FACTOR (0-8) ");
_1460: Input(&W);
_1470: if (W < 0 || W > 8) goto _1410;
_1480: if (_D[1] >= 0 || W <= .2) goto _1510;
_1490: printf("WARP ENGINES ARE DAMAGED, MAXIMUM SPEED = WARP .2\n");
_1500: goto _1410;
_1510: if (_P[1] <= 0) goto _1560;
_1520: if (_3790()) goto _4000;
_1530: if (_P[1] <= 0) goto _1560;
_1540: if (S < 0) goto _4000;
_1550: goto _1610;
_1560: if (E > 0) goto _1610;
_1570: if (S < 1) goto _3920;
_1580: printf("YOU HAVE ");
_1581: Z = E;
_1582: _9400();
_1583: printf(" UNITS OF ENERGY\n");
_1590: printf("SUGGEST YOU GET SOME FROM YOUR SHIELDS WHICH HAVE %.0lf\n", S);
_1592: printf("UNITS LEFT\n");
_1600: goto _1270;
_1610: for(I = 1; I <= 8; I += 1) {
_1620:   if (_D[(int)I] >= 0) goto _1640;
_1630:   _D[(int)I] = _D[(int)I] + 1;
_1640: ;}
_1650: if (getRand() > .2) goto _1810;
_1660: F = (int)(getRand() * 8 + 1);
_1670: if (getRand() >= .5) goto _1750;
_1680: _D[(int)F] = _D[(int)F] - (int)(getRand() * 5 + 1);
_1690: printf("\n");
_1700: printf("DAMAGE CONTROL REPORT: ");
_1710: _5610();
_1720: printf(" DAMAGED\n");
_1730: printf("\n");
_1740: goto _1810;
_1750: _D[(int)F] = _D[(int)F] + (int)(getRand() * 5 + 1);
_1760: printf("\n");
_1770: printf("DAMAGE CONTROL REPORT: ");
_1780: _5610();
_1790: printf(" STATE OF REPAIR IMPROVED\n");
_1800: printf("\n");
_1810: N = (int)(W * 8);
_1830: _A[(int)(_S[1] + .5)][(int)(_S[2] + .5)] = 0;
_1870: X = _S[1];
_1880: Y = _S[2];
_1885: R = (int)B;
_1890: _X[1] = _C[(int)R][1] + (_C[(int)(R+1)][1] - _C[(int)R][1]) * (B - R);
_1900: _X[2] = _C[(int)R][2] + (_C[(int)(R+1)][2] - _C[(int)R][2]) * (B - R);
_1910: for(I = 1; I <= N; I += 1) {
_1920: _S[1] = _S[1] + _X[1];
_1930: _S[2] = _S[2] + _X[2];
_1940: if (_S[1] < .5 || _S[1] >= 8.5 || _S[2] < .5 || _S[2] >= 8.5) goto _2170;
_1960: if (_A[(int)(_S[1] + .5)][(int)(_S[2] + .5)] == 0) goto _2070;
_2031: printf("WARP ENGINES SHUTDOWN AT SECTOR");
_2032: _V[4] = _S[1];
_2033: _V[5] = _S[2];
_2034: _9000();
_2035: printf("DUE TO BAD NAVIGATION\n");
_2040: _S[1] = _S[1] - _X[1];
_2050: _S[2] = _S[2] - _X[2];
_2060: goto _2083;
_2070: ;}
_2083: _S[1] = (int)(_S[1] + .5);
_2086: _S[2] = (int)(_S[2] + .5);
_2090: _A[(int)_S[1]][ (int)_S[2]] = 1;
_2120: E = E - N + 5;
_2130: if (W < 1) goto _2150;
_2140: T = T + 1;
_2150: if (T > _T[1] + _T[2]) goto _3970;
_2160: goto _1260;
_2170: X = _Q[1] * 8 + X + _X[1] * N;
_2180: Y = _Q[2] * 8 + Y + _X[2] * N;
_2190: _Q[1] = (int)(X / 8);
_2200: _Q[2] = (int)(Y / 8);
_2210: _S[1] = (int)(X - _Q[1] * 8 + .5);
_2220: _S[2] = (int)(Y - _Q[2] * 8 + .5);
_2230: if (_S[1] != 0) goto _2260;
_2240: _Q[1] = _Q[1] - 1;
_2250: _S[1] = 8;
_2260: if (_S[2] != 0) goto _2290;
_2270: _Q[2] = _Q[2] - 1;
_2280: _S[2] = 8;
_2290: T = T + 1;
_2300: E = E - N + 5;
_2310: if (T > _T[1] + _T[2]) goto _3970;
_2320: goto _810;
_2330: if (_D[3] >= 0) goto _2370;
_2340: printf("LONG RANGE SENSORS ARE INOPERABLE\n");
_2360: goto _1270;
_2370: printf("LONG RANGE SENSOR SCAN FOR QUADRANT");
_2371: _V[4] = _Q[1];
_2372: _V[5] = _Q[2];
_2373: _9000();
_2374: printf("\n");
_2375: /* X,Y display */
_2380: printf("-------------------\n");
_2390: for(J = _Q[2] - 1; J <= _Q[2] + 1; J += 1) {
_2400:   Fill(_N, 0, ARRAYLEN(_N));
_2410:   for(I = _Q[1] - 1; I <= _Q[1] + 1; I += 1) {
_2420:     if (I < 1 || I > 8 || J < 1 || J > 8) goto _2460;
_2430:     _N[(int)(I - _Q[1] + 2)] = _G[(int)I][(int)J];
_2440:     if (_D[7] < 0) goto _2460;
_2450:     _Z[(int)I][(int)J] = _G[(int)I][(int)J];
_2460:   ;}
_2470:   printf("| %03.0lf | %03.0lf | %03.0lf |\n", (int)_N[1], (int)_N[2], (int)_N[3]);
_2480:   printf("-------------------\n");
_2490: ;}
_2500: goto _1270;
_2530: if (_P[1] <= 0) goto _3670;
_2540: if (_D[4] >= 0) goto _2570;
_2550: printf("PHASER CONTROL IS DISABLED\n");
_2560: goto _1270;
_2570: if (_D[7] >= 0) goto _2590;
_2580: printf(" COMPUTER FAILURE HAMPERS ACCURACY\n");
_2590: printf("PHASERS LOCKED ON TARGET.  ENERGY AVAILABLE = %.0lf\n", E);
_2600: printf("NUMBER OF UNITS TO FIRE ");
_2610: Input(&X);
_2620: if (X <= 0) goto _1270;
_2630: if (E - X < 0) goto _2570;
_2640: E = E - X;
_2650: if (_3790()) goto _4000;
_2660: if (_D[7] >= 0) goto _2680;
_2670: X = X * getRand();
_2680: for(I = 1; I <= 3; I += 1) {
_2690: if (_K[(int)I][3] <= 0) goto _2770;
_2700: H = (X / _P[1] / FND(0)) * (2 * getRand());
_2710: _K[(int)I][3] = _K[(int)I][3] - H;
_2720: Z = H;
_2721: _9400();
_2722: printf(" UNIT HIT ON KLINGON AT SECTOR");
_2723: _V[4] = _K[(int)I][1];
_2724: _V[5] = _K[(int)I][2];
_2725: _9000();
_2726: printf("\n   (");
_2727: Z = Max(0, _K[(int)I][3]);
_2728: _9400();
_2729: printf(" LEFT)\n");
_2740: if (_K[(int)I][3] > 0) goto _2770;
_2750: _3690();
_2760: if (_P[3] <= 0) goto _4040;
_2770: ;}
_2780: if (E < 0) goto _4000;
_2790: goto _1270;
_2800: if (_D[5] >= 0) goto _2830;
_2810: printf("PHOTON TUBES ARE NOT OPERATIONAL\n");
_2820: goto _1270;
_2830: if (P > 0) goto _2860;
_2840: printf("ALL PHOTON TORPEDOES EXPENDED\n");
_2850: goto _1270;
_2860: printf("TORPEDO COURSE (1-9) ");
_2870: Input(&B);
_2880: if (B == 0) goto _1270;
_2890: if (B < 1 || B >= 9) goto _2860;
_2895: R = (int)B;
_2900: _X[1] = _C[(int)R][1] + (_C[(int)(R+1)][1] - _C[(int)R][1]) * (B - R);
_2910: _X[2] = _C[(int)R][2] + (_C[(int)(R+1)][2] - _C[(int)R][2]) * (B - R);
_2920: X = _S[1];
_2930: Y = _S[2];
_2940: P = P - 1;
_2950: printf("TORPEDO TRACK:\n");
_2960: X = X + _X[1];
_2970: Y = Y + _X[2];
_2980: if (X < .5 || X >= 8.5 || Y < .5 || Y >= 8.5) goto _3420;
_2990: _V[4] = X;
_2991: _V[5] = Y;
_2992: _9000();
_2993: printf("\n");
_3020: if (_A[(int)(X + .5)][(int)(Y + .5)] != 0) goto _3080;
_3060: goto _2960;
_3080: if (_A[(int)(X + .5)][(int)(Y + .5)] != 2) goto _3230;
_3120: printf("*** KLINGON DESTROYED ***\n");
_3130: _P[1] = _P[1] - 1;
_3140: _P[3] = _P[3] - 1;
_3150: if (_P[3] <= 0) goto _4040;
_3160: for(I = 1; I <= 3; I += 1) {
_3170:   if ((int)(X + .5) != _K[(int)I][1]) goto _3190;
_3180:   if ((int)(Y + .5) == _K[(int)I][2]) goto _3200;
_3190: ;} I = 3;
_3200: _K[(int)I][3] = 0;
_3210: goto _3370;
_3230: if (_A[(int)(X + .5)][(int)(Y + .5)] != 4) goto _3290;
_3270: printf("YOU CAN'T DESTROY STARS SILLY\n");
_3280: goto _3420;
_3290: if (_A[(int)(X + .5)][(int)(Y + .5)] != 3) goto _2960;
_3340: printf("*** STAR BASE DESTROYED ***  .......CONGRATULATIONS\n");
_3350: _B[1] = _B[1] - 1;
_3370: _V[1] = (int)(X + .5);
_3380: _V[2] = (int)(Y + .5);
_3390: _A[(int)_V[1]][ (int)_V[2]] = 0;
_3400: _G[(int)_Q[1]][ (int)_Q[2]] = _P[1] * 100 + _B[1] * 10 + _S[3];
_3410: goto _3430;
_3420: printf("TORPEDO MISSED\n");
_3430: if (_3790()) goto _4000;
_3440: if (E < 0) goto _4000;
_3450: goto _1270;
_3460: if (_D[7] >= 0) goto _3490;
_3470: printf("SHIELD CONTROL IS NON-OPERATIONAL\n");
_3480: goto _1270;
_3490: printf("ENERGY AVAILABLE = %.0lf\n", (E + S));
_3492: printf("NUMBER OF UNITS TO SHIELDS ");
_3500: Input(&X);
_3510: if (X <= 0) goto _1270;
_3520: if (E + S - X < 0) goto _3490;
_3530: E = E + S - X;
_3540: S = X;
_3550: goto _1270;
_3560: if (_D[6] >= 0) goto _3590;
_3570: printf("DAMAGE CONTROL REPORT IS NOT AVAILABLE\n");
_3580: goto _1270;
_3590: printf("\n");
_3600: printf("DEVICE        STATE OF REPAIR\n");
_3610: for(F = 1; F <= 8; F++) {
_3620:   _5610();
_3630:   printf("  %.0lf\n", _D[(int)F]);
_3640: ;}
_3650: printf("\n");
_3660: goto _1270;
_3670: printf("SHORT RANGE SENSORS REPORT NO KLINGONS IN THIS QUANDRANT\n");
_3680: goto _1270;
_3920: printf("THE ENTERPRISE IS DEAD IN SPACE. IF YOU SURVIVE ALL");
_3922: printf(" IMPENDING\n");
_3930: printf("ATTACK YOU WILL BE DEMOTED TO THE RANK OF PRIVATE\n");
_3940: if (_P[1] <= 0) goto _4020;
_3950: if (_3790()) goto _4000;
_3960: goto _3940;
_3970: printf("\n");
_3980: printf("IT IS STARDATE %.0lf\n", T);
_3990: goto _4020;
_4000: printf("\n");
_4010: printf("THE ENTERPRISE HAS BEEN DESTROYED. THE FEDERATION WILL");
_4012: printf(" BE CONQUERED\n");
_4020: printf("THERE ARE STILL ");
_4021: Z = _P[3];
_4022: _9400();
_4023: printf(" KLINGON BATTLE CRUISERS\n");
_4030: goto _230;
_4040: printf("\n");
_4050: printf("THE LAST KLIGON BATTLE CRUISER IN THE GALAXY HAS BEEN");
_4052: printf(" DESTROYED\n");
_4060: printf("THE FEDERATION HAS BEEN SAVED !!!\n");
_4070: printf("\n");
_4080: printf("YOUR EFFICIENCY RATING = %.0lf\n", ((_P[2] / (T - _T[1])) * 1000));
_4110: goto _230;
_4620: /* computer... */
_4630: if (_D[8] >= 0) goto _4660;
_4640: printf("COMPUTER DISABLED\n");
_4650: goto _1270;
_4660: printf("COMPUTER ACTIVE AND AWAITING COMMAND ");
_4670: Input(&A);
_4673: _V[6] = 0;
_4680: if (A == 0) goto _4740;
_4681: if (A == 1) goto _4830;
_4682: if (A == 2) goto _4890;
_4690: printf("\n");
_4692: printf("FUNCTIONS AVAILABLE FROM COMPUTER\n");
_4700: printf("   0 = CUMULATIVE GALATIC RECORD\n");
_4710: printf("   1 = STATUS REPORT\n");
_4720: printf("   2 = PHOTON TORPEDO DATA\n");
_4730: goto _4660;
_4740: printf("COMPUTER RECORD OF GALAXY FOR QUADRANT");
_4741: _V[4] = _Q[1];
_4742: _V[5] = _Q[2];
_4743: _9000();
_4744: printf("\n");
_4770: printf("-------------------------------------------------\n");
_4780: for(I = 1; I <= 8; I += 1) {
_4790:   printf("| %03.0lf | %03.0lf | %03.0lf | %03.0lf | %03.0lf | %03.0lf | %03.0lf | %03.0lf |\n",
                 (int)_Z[1][(int)I], (int)_Z[2][(int)I], (int)_Z[3][(int)I], (int)_Z[4][(int)I],
                 (int)_Z[5][(int)I], (int)_Z[6][(int)I], (int)_Z[7][(int)I], (int)_Z[8][(int)I]);
_4800: printf("-------------------------------------------------\n");
_4810: ;}
_4820: goto _1270;
_4830: printf("\n");
_4832: printf("   STATUS REPORT\n");
_4834: printf("\n");
_4840: printf("NUMBER OF KLINGONS LEFT  = %.0lf\n", _P[3]);
_4850: printf("NUMBER OF STARDATES LEFT = %.0lf\n", (_T[1] + _T[2]) - T);
_4860: printf("NUMBER OF STARBASES LEFT = %.0lf\n", _B[2]);
_4870: goto _3560;
_4890: Q = 0; I = 1;
_4900: if (I > 3) goto _5270;
_4910:   if (_K[(int)I][3] <= 0) goto _5260;
_4920:   A = _S[1];
_4930:   B = _S[2];
_4940:   X = _K[(int)I][1];
_4950:   W = _K[(int)I][2];
_4960:   goto _5010;
_4970:   printf("YOU ARE AT QUADRANT");
_4971:   _V[4] = _Q[1];
_4972:   _V[5] = _Q[2];
_4973:   _9000();
_4974:   printf("SECTOR");
_4975:   _V[4] = _S[1];
_4976:   _V[5] = _S[2];
_4977:   _9000();
_4978:   printf("\n");
_4990:   printf("SHIP'S & TARGET'S COORDINATES ARE ");
_5000:   InputMulti(&A, &B, &X, &W);
_5010:   X = (int)(X - A);
_5020:   A = (int)(B - W);
_5030:   if (X < 0) goto _5130;
_5040:   if (A < 0) goto _5190;
_5050:   if (X > 0) goto _5070;
_5060:   if (A == 0) goto _5150;
_5070:   B = 1;
_5080:   if (Abs(A) <= Abs(X)) goto _5110;
_5090:   printf("DIRECTION = %.2lf\n", B+(((Abs(A)-Abs(X))+Abs(A))/Abs(A)));
_5100:   goto _5240;
_5110:   printf("DIRECTION = %.2lf\n", B+(Abs(A)/Abs(X)));
_5120:   goto _5240;
_5130:   if (A > 0) goto _5170;
_5140:   if (X == 0) goto _5190;
_5150:   B = 5;
_5160:   goto _5080;
_5170:   B = 3;
_5180:   goto _5200;
_5190:   B = 7;
_5200:   if (Abs(A) >= Abs(X)) goto _5230;
_5210:   printf("DIRECTION = %.2lf\n", B+(((Abs(X)-Abs(A))+Abs(X))/Abs(X)));
_5220:   goto _5240;
_5230:   printf("DIRECTION = %.2lf\n", B+(Abs(X)/Abs(A)));
_5240:   printf("DISTANCE  = %.2lf\n", sqrt(X*X+A*A));
_5242:   if (_V[6] != 1) goto _5253;
_5243:   L = Abs(X);
_5244:   if (L > Abs(A)) goto _5246;
_5245:   L = Abs(A);
_5246:   printf("\n   (");
_5247:   _9700();
_5248:   printf(" WARP UNIT");
_5249:   if (L == 1) goto _5251;
_5250:   printf("S");
_5251:   printf(")");
_5253:   printf("\n");
_5255:   if (Q == 1) goto _5320;
_5260: I += 1; goto _4900;
_5270: Q = 0;
_5280: printf("ENTER 1 TO USE THE CALCULATOR ");
_5290: Input(&(_V[6]));
_5300: if (_V[6] == 1) goto _4970;
_5320: goto _1270;
}
