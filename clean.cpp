#include <bits/stdc++.h>
using namespace std;
int main()
{
  char ch[100],temp[100];
  FILE *fi,*fo;
  fi = fopen("output_fl.txt","r+");
  fo = fopen("sevta_fl.txt","w+");
  long int i = 0;
  while(i < 199990)
  {
    int flag = 0;
    strcpy(ch,temp);
    fscanf(fi,"%s",ch);
    if(strlen(ch) == 16)
    {
      //cout << ch << "\n";
        fprintf(fo, "%s\n",ch);
        //cout << "yo" ;
        i++;
    }
  }
}
