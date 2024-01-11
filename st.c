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
       printf("*** KLINGON AT SECTOR");
       _V[4] = _K[(int)I][1];
       _V[5] = _K[(int)I][2];
       _9000();
       printf("DESTROYED ***\n");
       _P[1] = _P[1] - 1;
       _P[3] = _P[3] - 1;
       _A[(int)(_K[(int)I][1] + .5)][(int)(_K[(int)I][2] + .5)] = 0;
       _G[(int)_Q[1]][(int)_Q[2]] = _P[1] * 100 + _B[1] * 10 + _S[3];
       return;
}

int _3790() {
       if (C != 3) goto _3820;
       printf("STAR BASE SHIELDS PROTECT THE ENTERPRISE\n");
       return 0;
_3820: if (_P[1] <= 0) goto _3910;
       for(I = 1; I <= 3; I += 1) {
         if (_K[(int)I][3] <= 0) goto _3900;
         H = (_K[(int)I][3] / FND(0)) * (2 * getRand());
         S = S - H;
         Z = H;
         _9400();
         printf(" UNIT HIT ON ENTERPRISE FROM SECTOR");
         _V[4] = _K[(int)I][1];
         _V[5] = _K[(int)I][2];
         _9000();
         printf("\n   (");
         Z = Max(0, S);
         _9400();
         printf(" LEFT)\n");
         if (S < 0) return 1;
_3900: ;}
_3910: return 0;
}

void _4120() {
       for(I = _S[1] - 1; I <= _S[1] + 1; I += 1) {
         for(J = _S[2] - 1; J <= _S[2] + 1; J += 1) {
           if (I < 1 || I > 8 || J < 1 || J > 8) goto _4200;
           if (_A[(int)(I + .5)][(int)(J + .5)] == 3) goto _4240;
_4200:   ;}
       ;}
       D = 0;
       goto _4310;
_4240: D = 1;
       /* docked */
       C = 3;
       E = 3000;
       P = 10;
       printf("SHIELDS DROPPED FOR DOCKING PURPOSES\n");
       S = 0;
       goto _4380;
_4310: if (_P[1] > 0) goto _4350;
       if (E < K * .1) goto _4370;
       /* green */
       C = 0;
       goto _4380;
       /* red */
_4350: C = 2;
       goto _4380;
       /* yellow */
_4370: C = 1;
_4380: if (_D[2] >= 0) goto _4430;
       printf("\n");
       printf("*** SHORT RANGE SENSORS ARE OUT ***\n");
       printf("\n");
       goto _4530;
_4430: printf("-=--=--=--=--=--=--=--=-\n");
       _V[3] = 0;
       _9200();
       printf("\n");
       _9200();
       printf(" STARDATE  %.0f\n", T);
       _9200();
       printf(" CONDITION ");
       if (C == 1) goto _4467;
       if (C == 2) goto _4469;
       if (C == 3) goto _4471;
       printf("GREEN\n");
       goto _4472;
_4467: printf("YELLOW\n");
       goto _4472;
_4469: printf("RED\n");
       goto _4472;
_4471: printf("DOCKED\n");
_4472: _9200();
       printf(" QUADRANT ");
       _V[4] = _Q[1];
       _V[5] = _Q[2];
       _9000();
       printf("\n");
       _9200();
       printf(" SECTOR   ");
       _V[4] = _S[1];
       _V[5] = _S[2];
       _9000();
       printf("\n");
       _9200();
       printf(" ENERGY    %d\n", (int)E);
       _9200();
       printf(" SHIELDS   %d\n", (int)S);
       _9200();
       printf(" PHOTON TORPEDOES %.0f\n", P);
       printf("-=--=--=--=--=--=--=--=-\n");
_4530: return;
}

void _5380() {
       /* find-empty-location sub, strings removed */
_5380: F = (int)(getRand() * 8 + 1);
       G = (int)(getRand() * 8 + 1);
       if (_A[(int)F][(int)G] != 0) goto _5380;
       return;
}

void _5610() {
       /* ****  PRINTS DEVICE NAME FROM ARRAY ***** */
       /* recoded to remove strings */
       if (F == 1) goto _5635;
       if (F == 2) goto _5640;
       if (F == 3) goto _5645;
       if (F == 4) goto _5650;
       if (F == 5) goto _5655;
       if (F == 6) goto _5660;
       if (F == 7) goto _5665;
       printf("COMPUTER    ");
       return;
_5635: printf("WARP ENGINES");
       return;
_5640: printf("S.R. SENSORS");
       return;
_5645: printf("L.R. SENSORS");
       return;
_5650: printf("PHASER CNTRL");
       return;
_5655: printf("PHOTON TUBES");
       return;
_5660: printf("DAMAGE CNTRL");
       return;
_5665: printf("SHIELD CNTRL");
       return;
}

void _5820() {
       printf("\n");
       printf("\n");
       printf("     INSTRUCTIONS:\n");
       printf("\n");
       printf("<*> = ENTERPRISE\n");
       printf("+++ = KLINGON\n");
       printf(">!< = STARBASE\n");
       printf(" *  = STAR\n");
       printf("\n");
       printf("COMMAND 0 = WARP ENGINE CONTROL\n");
       printf("  'COURSE IS IN A CIRCULAR NUMERICAL         4    3    2\n");
       printf("  VECTOR ARRANGEMENT AS SHOWN.                `.  :  .'\n");
       printf("  INTERGER AND REAL VALUES MAY BE               `.:.'\n");
       printf("  USED.  THEREFORE COURSE 1.5 IS             5---<*>---1\n");
       printf("  HALF WAY BETWEEN 1 AND 2.                     .':`.\n");
       printf("                                              .'  :  `.\n");
       printf("  A VECTOR OF 9 IS UNDEFINED, BUT            6    7    8\n");
       printf("  VALUES MAY APPROACH 9.\n");
       printf("                                               COURSE\n");
       printf("  ONE 'WARP FACTOR' IS THE SIZE OF\n");
       printf("  ONE QUADRANT.  THEREFORE TO GET FROM\n");
       printf("  QUADRANT 5,6 TO 5,5 YOU WOULD USE COURSE 3, WARP\n");
       printf("  FACTOR 1. COORDINATES ARE SPECIFIED USING X,Y NOTATION\n");
       printf("  WITH X 1-8 FROM LEFT-RIGHT AND Y 1-8 FROM TOP-BOTTOM.\n");
       if (A != 2) goto _6009;
       printf("\n");
       printf( "ENTER A NUMBER TO CONTINUE...  ");
       Input(&I);
       printf("\n");
_6009: printf("\n");
       printf("COMMAND 1 = SHORT RANGE SENSOR SCAN\n");
       printf("  PRINTS THE QUADRANT YOU ARE CURRENTLY IN, INCLUDING\n");
       printf("  STARS, KLINGONS, STARBASES, AND THE ENTERPRISE; ALONG\n");
       printf("  WITH OTHER PERTINATE INFORMATION.\n");
       printf("\n");
       printf("COMMAND 2 = LONG RANGE SENSOR SCAN\n");
       printf("  SHOWS CONDITIONS IN SPACE FOR ONE QUADRANT ON EACH SIDE\n");
       printf("  OF THE ENTERPRISE IN THE MIDDLE OF THE SCAN.  THE SCAN\n");
       printf("  IS CODED IN THE FORM XXX, WHERE THE UNITS DIGIT IS THE\n");
       printf("  NUMBER OF STARS, THE TENS DIGIT IS THE NUMBER OF STAR-\n");
       printf("  BASES, THE HUNDREDS DIGIT IS THE NUMBER OF KLINGONS.\n");
       printf("\n");
       printf("COMMAND 3 = PHASER CONTROL\n");
       printf("  ALLOWS YOU TO DESTROY THE KLINGONS BY HITTING HIM WITH\n");
       printf("  SUITABLY LARGE NUMBERS OF ENERGY UNITS TO DEPLETE HIS \n");
       printf("  SHIELD POWER.  KEEP IN MIND THAT WHEN YOU SHOOT AT\n");
       printf("  HIM, HE GONNA DO IT TO YOU TOO.\n");
       if (A != 2) goto _6159;
       for(I = 1; I <= 5; I += 1) {
         printf("\n");
       ;}
       printf( "ENTER A NUMBER TO CONTINUE...  ");
       Input(&I);
       printf("\n");
_6159: printf("\n");
       printf("COMMAND 4 = PHOTON TORPEDO CONTROL\n");
       printf("  COURSE IS THE SAME AS USED IN WARP ENGINE CONTROL\n");
       printf("  IF YOU HIT THE KLINGON, HE IS DESTROYED AND CANNOT FIRE\n");
       printf("  BACK AT YOU.  IF YOU MISS, HE WILL SHOOT HIS PHASERS AT\n");
       printf("  YOU.\n");
       printf("   NOTE: THE LIBRARY COMPUTER (COMMAND 7) HAS AN OPTION\n");
       printf("   TO COMPUTE TORPEDO TRAJECTORY FOR YOU (OPTION 2).\n");
       printf("\n");
       printf("COMMAND 5 = SHIELD CONTROL\n");
       printf("  DEFINES NUMBER OF ENERGY UNITS TO ASSIGN TO SHIELDS\n");
       printf("  ENERGY IS TAKEN FROM TOTAL SHIP'S ENERGY.\n");
       printf("\n");
       printf("COMMAND 6 = DAMAGE CONTROL REPORT\n");
       printf("  GIVES STATE OF REPAIRS OF ALL DEVICES.");
       printf("  A STATE OF REPAIR\n");
       printf("  LESS THAN ZERO SHOWS THAT THAT DEVICE IS TEMPORARALY\n");
       printf("  DAMAGED.\n");
       if (A != 2) goto _6299;
       for(I = 1; I <= 6; I += 1) {
         printf("\n");
       ;}
       printf( "ENTER A NUMBER TO CONTINUE...  ");
       Input(&I);
       printf("\n");
_6299: printf("\n");
       printf( "COMMAND 7 = LIBRARY COMPUTER\n");
       printf( "  THE LIBRARY COMPUTER CONTAINS THREE OPTIONS:\n");
       printf( "    OPTION 0 = CUMULATIVE GALACTIC RECORD\n");
       printf( "     SHOWS COMPUTER MEMORY OF THE RESULTS OF ALL PREVIOUS\n");
       printf( "     LONG RANGE SENSOR SCANS\n");
       printf( "    OPTION 1 = STATUS REPORT\n");
       printf( "     SHOWS NUMBER OF KLINGONS, STARDATES AND STARBASES\n");
       printf( "     LEFT.\n");
       printf( "    OPTION 2 = PHOTON TORPEDO DATA\n");
       printf( "     GIVES TRAJECTORY AND DISTANCE BETWEEN THE ENTERPRISE\n");
       printf( "     AND ALL KLINGONS IN YOUR QUADRANT\n");
       if (A != 2) goto _6408;
       for(I = 1; I <= 9; I += 1) {
         printf("\n");
       ;}
_6408: printf("\n");
       return;
}

void _9000() {
       /* sub to help convert PRINT USING, displays " x,y " */
       /* coordinates (V[4],V[5]) */
       printf(" ");
       L = (int)(_V[4] + .5);
       _9700();
       printf(",");
       L = (int)(_V[5] + .5);
       _9700();
       printf(" ");
       return;
}

void _9200() {
       /* print display line from A[x,y] */
       /* y coord spec'd by V[3], incremented */
       _V[3] = _V[3] + 1;
       for(I = 1; I <= 8; I += 1) {
         A = _A[(int)I][(int)_V[3]];
         if (A == 1) goto _9240;
         if (A == 2) goto _9242;
         if (A == 3) goto _9244;
         if (A == 4) goto _9246;
         printf("   ");
         goto _9250;
_9240:   printf("<*>");
         goto _9250;
_9242:   printf("+++");
         goto _9250;
_9244:   printf(">!<");
         goto _9250;
_9246:   printf(" * ");
_9250: ;}
       return;
}

void _9400() {
       /* Integer print subroutine */
       /* up to 4 digits -9999 to 9999, no spaces */
       /* Number to print in Z, L used for digit */
       if (Z >= 0) goto _9420;
       printf("-");
_9420: Z = Abs(Z);
       Z = (int)Z;
       if (Z < 10) goto _9560;
       if (Z < 100) goto _9530;
       if (Z < 1000) goto _9500;
       L = (int)(Z / 1000);
       Z = Z - L * 1000;
       _9700();
_9500: L = (int)(Z / 100);
       Z = Z - L * 100;
       _9700();
_9530: L = (int)(Z / 10);
       Z = Z - L * 10;
       _9700();
_9560: L = Z;
       _9700();
       return;
}

void _9700() {
       /* Digit print subroutine, digit in L */
       if (L == 1) goto _9810;
       if (L == 2) goto _9830;
       if (L == 3) goto _9850;
       if (L == 4) goto _9870;
       if (L == 5) goto _9890;
       if (L == 6) goto _9910;
       if (L == 7) goto _9930;
       if (L == 8) goto _9950;
       if (L == 9) goto _9970;
       printf("0");
       return;
_9810: printf("1");
       return;
_9830: printf("2");
       return;
_9850: printf("3");
       return;
_9870: printf("4");
       return;
_9890: printf("5");
       return;
_9910: printf("6");
       return;
_9930: printf("7");
       return;
_9950: printf("8");
       return;
_9970: printf("9");
       return;
}

int main() {
      /* ************************************************************** */
      /* *** */
      /* ***     STAR TREK: BY MIKE MAYFIELD, CENTERLINE ENGINEERING */
      /* *** */
      /* ***        TOTAL INTERACTION GAME - ORIG. 20 OCT 1972 */
      /* *** */
      /* ************************************************************** */
      for(I = 1; I <= 20; I += 1) {
        printf("\n");
      ;}
      printf("                          STAR TREK \n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("ENTER 1 OR 2 FOR INSTRUCTIONS (ENTER 2 TO PAGE) ");
      Input(&A);
      if (A != 1 && A != 2) goto _210;
      _5820();
      /* randomize query to mix it up */
_210: printf("\n");
      printf("ENTER SEED NUMBER ");
      Input(&A);
      A = (int)(Abs(A));
      printf("INITIALIZING...\n");
      for(I = 0; I <= A; I += 1) {
        J = getRand();
      ;}
_230: /* *****  PROGRAM STARTS HERE ***** */
      printf("\n");
      T = (int)(getRand() * 20 + 20) * 100;
      _T[1] = T;
      _T[2] = 30;
      D = 0;
      E = 3000;
      K = E;
      P = 10;
      M = P;
      _S[4] = 200;
      Q = 0;
      S = 0;
      _Q[1] = (int)(getRand() * 8) + 1;
      _Q[2] = (int)(getRand() * 8) + 1;
      _S[1] = (int)(getRand() * 8) + 1;
      _S[2] = (int)(getRand() * 8) + 1;
      /* C array numbers in X,Y notation/display */
      /* dir 1 = X+1,Y    right */
      _C[1][1] = 1;
      _C[1][2] = 0;
      /* dir 2 = X+1,Y-1  right and up */
      _C[2][1] = 1;
      _C[2][2] = -1;
      /* dir 3 = X, Y-1   up */
      _C[3][1] = 0;
      _C[3][2] = -1;
      /* dir 4 = X-1,Y-1  left and up */
      _C[4][1] = -1;
      _C[4][2] = -1;
      /* dir 5 = X-1,Y    left */
      _C[5][1] = -1;
      _C[5][2] = 0;
      /* dir 6 = X-1,Y+1  left and down */
      _C[6][1] = -1;
      _C[6][2] = 1;
      /* dir 7 = X,Y+1    down */
      _C[7][1] = 0;
      _C[7][2] = 1;
      /* dir 8 = X+1,Y+1  right and down */
      _C[8][1] = 1;
      _C[8][2] = 1;
      /* dir 9 = same as dir 1 */
      _C[9][1] = 1;
      _C[9][2] = 0;
      Fill(_D, 0, ARRAYLEN(_D));
_490: _B[2] = 0;
      _P[3] = 0;
      for(I = 1; I <= 8; I += 1) {
        for(J = 1; J <= 8; J += 1) {
          F = getRand();
          if (F > .98) goto _580;
          if (F > .95) goto _610;
          if (F > .8) goto _640;
          _P[1] = 0;
          goto _660;
_580:     _P[1] = 3;
          _P[3] = _P[3] + 3;
          goto _660;
_610:     _P[1] = 2;
          _P[3] = _P[3] + 2;
          goto _660;
_640:     _P[1] = 1;
          _P[3] = _P[3] + 1;
_660:     F = getRand();
          if (F > .96) goto _700;
          _B[1] = 0;
          goto _720;
_700:     _B[1] = 1;
          _B[2] = _B[2] + 1;
_720:     _S[3] = (int)(getRand() * 8 + 1);
          _G[(int)I][(int)J] = _P[1] * 100 + _B[1] * 10 + _S[3];
          _Z[(int)I][(int)J] = 0;
        ;}
      ;}
      _P[2] = _P[3];
      if (_B[2] <= 0 || _P[3] <= 0) goto _490;
      printf("YOU MUST DESTROY ");
      Z = _P[3];
      _9400();
      printf(" KINGONS IN ");
      Z = _T[2];
      _9400();
      printf(" STARDATES WITH ");
      Z = _B[2];
      _9400();
      printf(" STARBASE");
      if (_B[2] == 1) goto _793;
      printf("S");
_793: printf("\n");
      printf("\n");
_810: _P[1] = 0;
      _B[1] = 0;
      _S[3] = 0;
      _Q[1] = Min(8, Max(1, _Q[1]));
      _Q[2] = Min(8, Max(1, _Q[2]));
      _S[1] = Min(8, Max(1, _S[1]));
      _S[2] = Min(8, Max(1, _S[2]));
      X = _G[(int)_Q[1]][(int)_Q[2]] * 1.00000E-02;
      _P[1] = (int)X;
      _B[1] = (int)((X - _P[1]) * 10);
      _S[3] = _G[(int)_Q[1]][(int)_Q[2]] - (int)(_G[(int)_Q[1]][(int)_Q[2]] * .1) * 10;
      if (_P[1] == 0) goto _910;
      if (S > 200) goto _910;
      printf("COMBAT AREA      CONDITION RED\n");
      printf("   SHIELDS DANGEROUSLY LOW\n");
_910: MULTIFILL(_K, 0, 4, 4);
      for (I = 1; I <= 3; I += 1) {
        _K[(int)I][3] = 0;
      ;}
      /* A[x,y]: */
      /* 0="   " */
      /* 1="<*>" */
      /* 2="+++" */
      /* 3=">!<" */
      /* 4=" * " */
      MULTIFILL(_A, 0, 9, 9);
       _A[(int)(_S[1] + .5)][(int)(_S[2] + .5)] = 1;
       for(I = 1; I <= (int)_P[1]; I += 1) {
         _5380();
         _A[(int)F][(int)G] = 2;
         _K[(int)I][1] = F;
         _K[(int)I][2] = G;
         _K[(int)I][3] = _S[4];
       ;}
       for(I = 1; I <= (int)_B[1]; I += 1) {
         _5380();
         _A[(int)F][(int)G] = 3;
       ;}
       for(I = 1; I <= (int)_S[3]; I += 1) {
         _5380();
         _A[(int)F][(int)G] = 4;
       ;}
_1260: _4120();
_1270: printf("COMMAND ");
       Input(&A);
       if (A == 0) goto _1410;
       if (A == 1) goto _1260;
       if (A == 2) goto _2330;
       if (A == 3) goto _2530;
       if (A == 4) goto _2800;
       if (A == 5) goto _3460;
       if (A == 6) goto _3560;
       if (A == 7) goto _4630;
       if (A == 9) exit(0);
       printf("\n");
       printf("   0 = SET COURSE\n");
       printf("   1 = SHORT RANGE SENSOR SCAN\n");
       printf("   2 = LONG RANGE SENSOR SCAN\n");
       printf("   3 = FIRE PHASERS\n");
       printf("   4 = FIRE PHOTON TORPEDOES\n");
       printf("   5 = SHIELD CONTROL\n");
       printf("   6 = DAMAGE CONTROL REPORT\n");
       printf("   7 = CALL ON LIBRARY COMPUTER\n");
       printf("\n");
       goto _1270;
_1410: printf("COURSE (1-9) ");
       Input(&B);
       if (B == 0) goto _1270;
       if (B < 1 || B >= 9) goto _1410;
       printf("WARP FACTOR (0-8) ");
       Input(&W);
       if (W < 0 || W > 8) goto _1410;
       if (_D[1] >= 0 || W <= .2) goto _1510;
       printf("WARP ENGINES ARE DAMAGED, MAXIMUM SPEED = WARP .2\n");
       goto _1410;
_1510: if (_P[1] <= 0) goto _1560;
       if (_3790()) goto _4000;
       if (_P[1] <= 0) goto _1560;
       if (S < 0) goto _4000;
       goto _1610;
_1560: if (E > 0) goto _1610;
       if (S < 1) goto _3920;
       printf("YOU HAVE ");
       Z = E;
       _9400();
       printf(" UNITS OF ENERGY\n");
       printf("SUGGEST YOU GET SOME FROM YOUR SHIELDS WHICH HAVE %.0f\n", S);
       printf("UNITS LEFT\n");
       goto _1270;
_1610: for(I = 1; I <= 8; I += 1) {
         if (_D[(int)I] >= 0) goto _1640;
         _D[(int)I] = _D[(int)I] + 1;
_1640: ;}
       if (getRand() > .2) goto _1810;
       F = (int)(getRand() * 8 + 1);
       if (getRand() >= .5) goto _1750;
       _D[(int)F] = _D[(int)F] - (int)(getRand() * 5 + 1);
       printf("\n");
       printf("DAMAGE CONTROL REPORT: ");
       _5610();
       printf(" DAMAGED\n");
       printf("\n");
       goto _1810;
_1750: _D[(int)F] = _D[(int)F] + (int)(getRand() * 5 + 1);
       printf("\n");
       printf("DAMAGE CONTROL REPORT: ");
       _5610();
       printf(" STATE OF REPAIR IMPROVED\n");
       printf("\n");
_1810: N = (int)(W * 8);
       _A[(int)(_S[1] + .5)][(int)(_S[2] + .5)] = 0;
       X = _S[1];
       Y = _S[2];
       R = (int)B;
       _X[1] = _C[(int)R][1] + (_C[(int)(R+1)][1] - _C[(int)R][1]) * (B - R);
       _X[2] = _C[(int)R][2] + (_C[(int)(R+1)][2] - _C[(int)R][2]) * (B - R);
       for(I = 1; I <= N; I += 1) {
       _S[1] = _S[1] + _X[1];
       _S[2] = _S[2] + _X[2];
       if (_S[1] < .5 || _S[1] >= 8.5 || _S[2] < .5 || _S[2] >= 8.5) goto _2170;
       if (_A[(int)(_S[1] + .5)][(int)(_S[2] + .5)] == 0) goto _2070;
       printf("WARP ENGINES SHUTDOWN AT SECTOR");
       _V[4] = _S[1];
       _V[5] = _S[2];
       _9000();
       printf("DUE TO BAD NAVIGATION\n");
       _S[1] = _S[1] - _X[1];
       _S[2] = _S[2] - _X[2];
       goto _2083;
_2070: ;}
_2083: _S[1] = (int)(_S[1] + .5);
       _S[2] = (int)(_S[2] + .5);
       _A[(int)_S[1]][ (int)_S[2]] = 1;
       E = E - N + 5;
       if (W < 1) goto _2150;
       T = T + 1;
_2150: if (T > _T[1] + _T[2]) goto _3970;
       goto _1260;
_2170: X = _Q[1] * 8 + X + _X[1] * N;
       Y = _Q[2] * 8 + Y + _X[2] * N;
       _Q[1] = (int)(X / 8);
       _Q[2] = (int)(Y / 8);
       _S[1] = (int)(X - _Q[1] * 8 + .5);
       _S[2] = (int)(Y - _Q[2] * 8 + .5);
       if (_S[1] != 0) goto _2260;
       _Q[1] = _Q[1] - 1;
       _S[1] = 8;
_2260: if (_S[2] != 0) goto _2290;
       _Q[2] = _Q[2] - 1;
       _S[2] = 8;
_2290: T = T + 1;
       E = E - N + 5;
       if (T > _T[1] + _T[2]) goto _3970;
       goto _810;
_2330: if (_D[3] >= 0) goto _2370;
       printf("LONG RANGE SENSORS ARE INOPERABLE\n");
       goto _1270;
_2370: printf("LONG RANGE SENSOR SCAN FOR QUADRANT");
       _V[4] = _Q[1];
       _V[5] = _Q[2];
       _9000();
       printf("\n");
       /* X,Y display */
       printf("-------------------\n");
       for(J = _Q[2] - 1; J <= _Q[2] + 1; J += 1) {
         Fill(_N, 0, ARRAYLEN(_N));
         for(I = _Q[1] - 1; I <= _Q[1] + 1; I += 1) {
           if (I < 1 || I > 8 || J < 1 || J > 8) goto _2460;
           _N[(int)(I - _Q[1] + 2)] = _G[(int)I][(int)J];
           if (_D[7] < 0) goto _2460;
           _Z[(int)I][(int)J] = _G[(int)I][(int)J];
_2460:   ;}
         printf("| %03d | %03d | %03d |\n", (int)_N[1], (int)_N[2], (int)_N[3]);
         printf("-------------------\n");
       ;}
       goto _1270;
_2530: if (_P[1] <= 0) goto _3670;
       if (_D[4] >= 0) goto _2570;
       printf("PHASER CONTROL IS DISABLED\n");
       goto _1270;
_2570: if (_D[7] >= 0) goto _2590;
       printf(" COMPUTER FAILURE HAMPERS ACCURACY\n");
_2590: printf("PHASERS LOCKED ON TARGET.  ENERGY AVAILABLE = %.0f\n", E);
       printf("NUMBER OF UNITS TO FIRE ");
       Input(&X);
       if (X <= 0) goto _1270;
       if (E - X < 0) goto _2570;
       E = E - X;
       if (_3790()) goto _4000;
       if (_D[7] >= 0) goto _2680;
       X = X * getRand();
_2680: for(I = 1; I <= 3; I += 1) {
       if (_K[(int)I][3] <= 0) goto _2770;
       H = (X / _P[1] / FND(0)) * (2 * getRand());
       _K[(int)I][3] = _K[(int)I][3] - H;
       Z = H;
       _9400();
       printf(" UNIT HIT ON KLINGON AT SECTOR");
       _V[4] = _K[(int)I][1];
       _V[5] = _K[(int)I][2];
       _9000();
       printf("\n   (");
       Z = Max(0, _K[(int)I][3]);
       _9400();
       printf(" LEFT)\n");
       if (_K[(int)I][3] > 0) goto _2770;
       _3690();
       if (_P[3] <= 0) goto _4040;
_2770: ;}
       if (E < 0) goto _4000;
       goto _1270;
_2800: if (_D[5] >= 0) goto _2830;
       printf("PHOTON TUBES ARE NOT OPERATIONAL\n");
       goto _1270;
_2830: if (P > 0) goto _2860;
       printf("ALL PHOTON TORPEDOES EXPENDED\n");
       goto _1270;
_2860: printf("TORPEDO COURSE (1-9) ");
       Input(&B);
       if (B == 0) goto _1270;
       if (B < 1 || B >= 9) goto _2860;
       R = (int)B;
       _X[1] = _C[(int)R][1] + (_C[(int)(R+1)][1] - _C[(int)R][1]) * (B - R);
       _X[2] = _C[(int)R][2] + (_C[(int)(R+1)][2] - _C[(int)R][2]) * (B - R);
       X = _S[1];
       Y = _S[2];
       P = P - 1;
       printf("TORPEDO TRACK:\n");
_2960: X = X + _X[1];
       Y = Y + _X[2];
       if (X < .5 || X >= 8.5 || Y < .5 || Y >= 8.5) goto _3420;
       _V[4] = X;
       _V[5] = Y;
       _9000();
       printf("\n");
       if (_A[(int)(X + .5)][(int)(Y + .5)] != 0) goto _3080;
       goto _2960;
_3080: if (_A[(int)(X + .5)][(int)(Y + .5)] != 2) goto _3230;
       printf("*** KLINGON DESTROYED ***\n");
       _P[1] = _P[1] - 1;
       _P[3] = _P[3] - 1;
       if (_P[3] <= 0) goto _4040;
       for(I = 1; I <= 3; I += 1) {
         if ((int)(X + .5) != _K[(int)I][1]) goto _3190;
         if ((int)(Y + .5) == _K[(int)I][2]) goto _3200;
_3190: ;} I = 3;
_3200: _K[(int)I][3] = 0;
       goto _3370;
_3230: if (_A[(int)(X + .5)][(int)(Y + .5)] != 4) goto _3290;
       printf("YOU CAN'T DESTROY STARS SILLY\n");
       goto _3420;
_3290: if (_A[(int)(X + .5)][(int)(Y + .5)] != 3) goto _2960;
       printf("*** STAR BASE DESTROYED ***  .......CONGRATULATIONS\n");
       _B[1] = _B[1] - 1;
_3370: _V[1] = (int)(X + .5);
       _V[2] = (int)(Y + .5);
       _A[(int)_V[1]][ (int)_V[2]] = 0;
       _G[(int)_Q[1]][ (int)_Q[2]] = _P[1] * 100 + _B[1] * 10 + _S[3];
       goto _3430;
_3420: printf("TORPEDO MISSED\n");
_3430: if (_3790()) goto _4000;
       if (E < 0) goto _4000;
       goto _1270;
_3460: if (_D[7] >= 0) goto _3490;
       printf("SHIELD CONTROL IS NON-OPERATIONAL\n");
       goto _1270;
_3490: printf("ENERGY AVAILABLE = %.0f\n", (E + S));
       printf("NUMBER OF UNITS TO SHIELDS ");
       Input(&X);
       if (X <= 0) goto _1270;
       if (E + S - X < 0) goto _3490;
       E = E + S - X;
       S = X;
       goto _1270;
_3560: if (_D[6] >= 0) goto _3590;
       printf("DAMAGE CONTROL REPORT IS NOT AVAILABLE\n");
       goto _1270;
_3590: printf("\n");
       printf("DEVICE        STATE OF REPAIR\n");
       for(F = 1; F <= 8; F++) {
         _5610();
         printf("  %.0f\n", _D[(int)F]);
       ;}
       printf("\n");
       goto _1270;
_3670: printf("SHORT RANGE SENSORS REPORT NO KLINGONS IN THIS QUANDRANT\n");
       goto _1270;
_3920: printf("THE ENTERPRISE IS DEAD IN SPACE. IF YOU SURVIVE ALL");
       printf(" IMPENDING\n");
       printf("ATTACK YOU WILL BE DEMOTED TO THE RANK OF PRIVATE\n");
_3940: if (_P[1] <= 0) goto _4020;
       if (_3790()) goto _4000;
       goto _3940;
_3970: printf("\n");
       printf("IT IS STARDATE %.0f\n", T);
       goto _4020;
_4000: printf("\n");
       printf("THE ENTERPRISE HAS BEEN DESTROYED. THE FEDERATION WILL");
       printf(" BE CONQUERED\n");
_4020: printf("THERE ARE STILL ");
       Z = _P[3];
       _9400();
       printf(" KLINGON BATTLE CRUISERS\n");
       goto _230;
_4040: printf("\n");
       printf("THE LAST KLIGON BATTLE CRUISER IN THE GALAXY HAS BEEN");
       printf(" DESTROYED\n");
       printf("THE FEDERATION HAS BEEN SAVED !!!\n");
       printf("\n");
       printf("YOUR EFFICIENCY RATING = %.0f\n", ((_P[2] / (T - _T[1])) * 1000));
       goto _230;
       /* computer... */
_4630: if (_D[8] >= 0) goto _4660;
       printf("COMPUTER DISABLED\n");
       goto _1270;
_4660: printf("COMPUTER ACTIVE AND AWAITING COMMAND ");
       Input(&A);
       _V[6] = 0;
       if (A == 0) goto _4740;
       if (A == 1) goto _4830;
       if (A == 2) goto _4890;
       printf("\n");
       printf("FUNCTIONS AVAILABLE FROM COMPUTER\n");
       printf("   0 = CUMULATIVE GALATIC RECORD\n");
       printf("   1 = STATUS REPORT\n");
       printf("   2 = PHOTON TORPEDO DATA\n");
       goto _4660;
_4740: printf("COMPUTER RECORD OF GALAXY FOR QUADRANT");
       _V[4] = _Q[1];
       _V[5] = _Q[2];
       _9000();
       printf("\n");
       printf("-------------------------------------------------\n");
       for(I = 1; I <= 8; I += 1) {
         printf("| %03d | %03d | %03d | %03d | %03d | %03d | %03d | %03d |\n",
                 (int)_Z[1][(int)I], (int)_Z[2][(int)I], (int)_Z[3][(int)I], (int)_Z[4][(int)I],
                 (int)_Z[5][(int)I], (int)_Z[6][(int)I], (int)_Z[7][(int)I], (int)_Z[8][(int)I]);
       printf("-------------------------------------------------\n");
       ;}
       goto _1270;
_4830: printf("\n");
       printf("   STATUS REPORT\n");
       printf("\n");
       printf("NUMBER OF KLINGONS LEFT  = %.0f\n", _P[3]);
       printf("NUMBER OF STARDATES LEFT = %.0f\n", (_T[1] + _T[2]) - T);
       printf("NUMBER OF STARBASES LEFT = %.0f\n", _B[2]);
       goto _3560;
_4890: Q = 0; I = 1;
_4900: if (I > 3) goto _5270;
         if (_K[(int)I][3] <= 0) goto _5260;
         A = _S[1];
         B = _S[2];
         X = _K[(int)I][1];
         W = _K[(int)I][2];
         goto _5010;
_4970:   printf("YOU ARE AT QUADRANT");
         _V[4] = _Q[1];
         _V[5] = _Q[2];
         _9000();
         printf("SECTOR");
         _V[4] = _S[1];
         _V[5] = _S[2];
         _9000();
         printf("\n");
         printf("SHIP'S & TARGET'S COORDINATES ARE ");
         InputMulti(&A, &B, &X, &W);
_5010:   X = (int)(X - A);
         A = (int)(B - W);
         if (X < 0) goto _5130;
         if (A < 0) goto _5190;
         if (X > 0) goto _5070;
         if (A == 0) goto _5150;
_5070:   B = 1;
_5080:   if (Abs(A) <= Abs(X)) goto _5110;
         printf("DIRECTION = %.2f\n", B+(((Abs(A)-Abs(X))+Abs(A))/Abs(A)));
         goto _5240;
_5110:   printf("DIRECTION = %.2f\n", B+(Abs(A)/Abs(X)));
         goto _5240;
_5130:   if (A > 0) goto _5170;
         if (X == 0) goto _5190;
_5150:   B = 5;
         goto _5080;
_5170:   B = 3;
         goto _5200;
_5190:   B = 7;
_5200:   if (Abs(A) >= Abs(X)) goto _5230;
         printf("DIRECTION = %.2f\n", B+(((Abs(X)-Abs(A))+Abs(X))/Abs(X)));
         goto _5240;
_5230:   printf("DIRECTION = %.2f\n", B+(Abs(X)/Abs(A)));
_5240:   printf("DISTANCE  = %.2f\n", sqrt(X*X+A*A));
         if (_V[6] != 1) goto _5253;
         L = Abs(X);
         if (L > Abs(A)) goto _5246;
         L = Abs(A);
_5246:   printf("\n   (");
         _9700();
         printf(" WARP UNIT");
         if (L == 1) goto _5251;
         printf("S");
_5251:   printf(")");
_5253:   printf("\n");
         if (Q == 1) goto _5320;
_5260: I += 1; goto _4900;
_5270: Q = 0;
       printf("ENTER 1 TO USE THE CALCULATOR ");
       Input(&(_V[6]));
       if (_V[6] == 1) goto _4970;
_5320: goto _1270;
}
