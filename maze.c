/*
   * ========================================
   * Filename : maze.c
   * 
   * Description : An application solving a maze
   *
   * Compiler : gcc
   *
   * Author : alx <phoenix0@autistici.org>
   * 
   * ========================================
*/

#include <stdio.h>

typedef struct {

   char destra ;
   char sinistra ;
   char sopra ;
   char sotto ;

} intorno  ;

int main ( ) {

   intorno l ;
   char a , start ;
   int x  , y ;
   char lab[7][5] = { { 'P' , 'P' , 'P' , 'P' , 'P'} ,
      		     { 'E' , ' ' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , ' ' , 'P' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , 'P' , 'P' },
		     { 'P' , 'P' , 'G' , 'P' , 'P' }} ;
   x = 6 ;
   y = 2 ;

   
   while ( a != 'E' ) {

      l.destra = lab[x][y+1] ;
      l.sinistra = lab[x][y-1] ;
      l.sopra = lab[x-1][y] ;
      l.sotto = lab[x+1][y] ;

      if ( l.sopra == 'E' || l.destra == 'E' || l.sinistra == 'E' || l.sotto == 'E' ) {

	 a = 'E' ;
	 puts("THANK GOD! THE OUTPUT! :3");
	 break ;
      }

      else if ( l.destra == ' ' ) {
	 y++ ;
	 a = ' ' ;
      }
	 
      else if ( l.sopra == ' ' ) {
	 x-- ;
	 a = ' ' ;
      }

      else if ( l.sinistra == ' ' ) {
	 y-- ;
	 a = ' ' ;
      }

      else if ( l.sotto == ' ' ) {
	 x++ ;
	 a = ' ' ;
      }

       if ( l.destra == 'P' && l.sopra == 'P'  ) {

	  lab[x][y] = 'P' ;
	  y-- ;
	  a = ' ' ;

      }


     }


   return 0 ;

}
