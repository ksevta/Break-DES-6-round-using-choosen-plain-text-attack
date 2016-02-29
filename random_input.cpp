#include <bits/stdc++.h>
using namespace std;


int main()
{
  FILE *fi,*fo;
  fi = fopen("random.txt","r+");
  fo = fopen("input_random.txt","w+");
  long long int i = 0;
  long long int k;
  char temp1[64];
  long long int temp2[64];
  long long int t1,t2;
  char  s1[17],s2[17];
  int  s[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0};
  //cout << ">>>>>>>>>>" << s << "\n" ;

  while(i < 100000)
  {
    //for(int j = 0 ; j < 64 ; j++)
    fscanf(fi,"%s",temp1);
    for(int j = 0 ; j < 64 ; j++)
    {
      t1 = temp1[j]-48;
      t2 = s[j];
      //cout << "t2 = =" << t2  << " " << s[j] << " " << temp1[j]<< "\n";
      temp2[j] =(t1^t2);

    }
    //cout << temp1 << "\n" ;
    int l;
    for(l = 0 ; l < 16 ; l++)
    {
      int h1,h2;
      h1 = (temp1[l*4]-48)*8+(temp1[l*4+1]-48)*4+(temp1[l*4+2]-48)*2+(temp1[l*4+3]-48);
      h2 = temp2[l*4]*8+temp2[l*4+1]*4+temp2[l*4+2]*2+temp2[l*4+3];
      h1 += 102;
      h2 += 102;
      s1[l] = h1;
      s2[l] = h2;
    }
    s1[l] = '\0';
    s2[l] = '\0';
    i++;
    fprintf(fo, "%s\n",s1);
    fprintf(fo, "%s\n",s2);
    //k temp
  }
}
