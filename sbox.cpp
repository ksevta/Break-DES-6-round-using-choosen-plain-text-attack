#include <bits/stdc++.h>
using namespace std;

long int b_dec(long int n) /* Function to convert binary to decimal.*/

{
    long int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}


int main()
{
  int S[8][64]=
  {
    14, 4, 13, 1, 2, 15, 11, 8, 3 , 10, 6, 12, 5, 9, 0, 7,
    0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
    4, 1 , 14, 8, 13, 6, 2, 11, 15, 12, 9, 7,3, 10, 5, 0,
    15, 12, 8,2,4, 9, 1,7 , 5, 11, 3, 14, 10, 0, 6, 13 ,

    15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0,5, 10,
    3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
    0, 14, 7, 11, 10, 4, 13, 1, 5, 8,12, 6, 9, 3, 2, 15,
    13, 8, 10, 1, 3, 15, 4, 2,11,6, 7, 12, 0,5, 14, 9,

    10, 0, 9,14,6,3,15,5, 1, 13, 12, 7, 11, 4,2,8,
    13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
    13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12,5, 10, 14, 7,
    1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12,

    7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,
    13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
    10, 6, 9, 0, 12, 11, 7, 13, 15, 1 , 3, 14, 5, 2, 8, 4,
    3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14,

    2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9,
    14, 11,2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
    4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14,
    11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3,

    12, 1, 10, 15, 9, 2, 6,8, 0, 13, 3, 4, 14, 7, 5, 11,
    10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
    9, 14, 15, 5, 2,8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6,
    4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13,

    4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,
    13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
    1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2,
    6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12,

    13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12,7,
    1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
    7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8,
    2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11
    };
    long long int a_xor,b_xor,a1,a2,s_a1,s_a2,gamma,k[8][64];
    for (int i = 0; i < 8; ++i)
    {
      for(int j = 0 ; j < 64 ; ++j)
        k[i][j] = 0;
    }
    FILE *f_a_xor,*f_b_xor,*fo,*f_gamma,*fo_k;
    f_gamma = fopen("gamma.txt","r+");
    f_a_xor = fopen("alpha.txt","r+");
    f_b_xor = fopen("beta.txt","r+");
    fo = fopen("a1a2.txt","w+");
    fo_k = fopen("key.txt","w+");
    long int lol = 0;
    char temp1[64],temp2[64],temp3[64];
    //fscanf(f_a_xor,"%lld",temp2);
    //cout << temp2 << "\n";
    //fscanf(f_a_xor,"%s",temp3);
    //a_xor = b_dec(temp2);
    //long long int n=(long long int) strtol(temp3,(char **)NULL,2);
    //cout << temp3 << " " << n << "\n";
    while(lol <= 65430)
    {
      lol++;
      fscanf(f_b_xor,"%s",temp1);
      fscanf(f_a_xor,"%s",temp2);
      fscanf(f_gamma,"%s",temp3);
      //cout << temp3 << "\n";

      long long int t1=(long long int) strtol(temp1,(char **)NULL,2);
      long long int t2=(long long int) strtol(temp2,(char **)NULL,2);
      long long int t3=(long long int) strtol(temp3,(char **)NULL,2);

      b_xor = t1;
      a_xor = t2;
      gamma = t3;

      fprintf(fo, "%lld %lld\n",a_xor,b_xor);
     //b_xor = 0001 1110 0101 1011 0100 0000 0110 1100;
     //a_xor = 111100 001101 010101 011000 001100 000000 000110 100111;
      //100001 010100 000100 001000 001011 111110 100110 100010
      for(int j = 0 ; j < 8 ; j++)
      {
        long long int temp_a,temp_b,temp_g;
        temp_a = a_xor/(long long int)(powf(2,6*(7-j)));
        temp_b = b_xor/(long long int)(powf(2,4*(7-j)));
        temp_g = gamma/(long long int)(powf(2,6*(7-j)));
        //cout << temp_g << "\n";
        for (int i = 0; i < 64; ++i)
        {

          a2 = i^temp_a;
          a1 = i;
          s_a1 = S[j][(16*(2*(a1/32)+a1%2))+(a1/2)%16];
          s_a2 = S[j][(16*(2*(a2/32)+a2%2))+(a2/2)%16];

          //fprintf(fo, "%d", );
          //cout << " " << j << " " << temp_a << " " << temp_b << "\n";
          if((s_a2^s_a1) == temp_b)
          {
            //cout << s_a1 << " " << s_a2 << "\n";
            //cout << "a1 =" << a1 << " "  << "a2 = " << a2 << "\n";
            k[j][a1^temp_g] += 1;
            //cout << (a1^temp_g) << " ";
            fprintf(fo, "%lld %lld |||| ",a1,s_a1);
            fprintf(fo, "%lld %lld\n",a2,s_a2);
            //fprintf(fo, "%d\n",temp_b);
          }
        }
        //cout << "-------------------------\n" ;
        fprintf(fo, "^^^^^^^^^^^K[%d]^^^^^^^^^ \n",j+1);
        a_xor = a_xor%(long long int)(powf(2,6*(7-j)));
        b_xor = b_xor%(long long int)(powf(2,4*(7-j)));
        gamma = gamma%(long long int)(powf(2,6*(7-j)));
      }

    }
    for (int i = 0; i < 8; ++i)
    {
      for(int j = 0 ; j < 64 ; ++j)
        fprintf(fo_k, "%d = %lld\n",j,k[i][j]);
      fprintf(fo_k, "---------------------------------\n");
    }
    return 0;
}
