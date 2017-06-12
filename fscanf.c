/* fscanf example */
#include <stdio.h>

int main ()
{
  char str [80];
  float f;
  // int f;
  FILE * pFile;

  pFile = fopen ("myfile.txt","w+");
  fprintf (pFile, "%f %s", 3.1416, "PI");//把内容输入到myfile里面
  rewind (pFile);//光标移到最前面
  fscanf (pFile, "%f", &f);//把文件内容读出来(根据光标所在)
  fscanf (pFile, "%s", str);
  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;
}