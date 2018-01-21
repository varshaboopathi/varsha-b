include <stdio.h>
int main()
{
   char ch;
   unsigned int long linecount1, wordcount1, charcount1;
   int u;
   linecount1=0;
   wordcount1=0;
   charcount1=0;
  while((ch=getc(stdin))!=EOF){
       if (ch !='\n') {++charcount1;}
       if (ch==' ' || ch=='\n') {++wordcount1;}
       if (ch=='\n') {++linecount1;}
}
   if(charcount1>0)
   {
      ++wordcount1;
      ++linecount1;
   }

   printf( "%lu %lu %lu\n", charcount1, wordcount1, linecount1 );
    return 0;

}
