#include <bits/stdc++.h>
using namespace std;
time_t t;
int main()
{
  long long int rand_no,j=0;
  char a[64];
  FILE *fr;
  fr = fopen("random.txt","w+");
  while(j < 100000)
  {
    for (int i = 0; i < 64; i++)
    {
      rand_no = rand()%2;
      //cout << rand_no << "\n";
      rand_no += 48;
      a[i] = rand_no;
    }
    //for(int k = 0 ; k < 64 ; k++)
    for (int i = 0; i < 64; i++)
      fprintf(fr, "%c",a[i]);
    fprintf(fr, "\n");

     // cout << a[k] << " ";
    //cout << "\n";
    j++;
  }

}
