/*
   * ========================================
   * Filename : maze.c
   * 
   * Description : An application solves a maze
   *
   * Compiler : gcc
   *
   * Author : alx <phoenix0@autistici.org>
   * 
   * ========================================
*/

#include <stdio.h>

#define ROWS 7
#define COL 5

void print ( char m[ROWS][COL] ) {

   for ( int i = 0 ; i < ROWS ; i++ ) {

      for ( int j = 0 ; j < COL ; j++ ) {

	 printf("%c ",m[i][j]) ;

      }

      puts("");

   }

}

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
   char maze[ROWS][COL] = { { 'P' , 'P' , 'P' , 'P' , 'P'} ,
      		     { 'E' , ' ' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , ' ' , 'P' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , ' ' , 'P' },
		     { 'P' , 'P' , ' ' , 'P' , 'P' },
		     { 'P' , 'P' , 'G' , 'P' , 'P' }} ;
   x = 6 ;
   y = 2 ;

   
   while ( a != 'E' ) {

      l.destra = maze[x][y+1] ;
      l.sinistra = maze[x][y-1] ;
      l.sopra = maze[x-1][y] ;
      l.sotto = maze[x+1][y] ;

      if ( l.sopra == 'E' || l.destra == 'E' || l.sinistra == 'E' || l.sotto == 'E' ) {

	 maze[x][y] = '^' ;
	 a = 'E' ;
	 puts("THANK GOD! THE OUTPUT! :3");
	 break ;
      }

      else if ( l.destra == ' ' ) {
	 maze[x][y] = '^' ;
	 y++ ;
	 a = ' ' ;
      }
	 
      else if ( l.sopra == ' ' ) {
	 maze[x][y] = '^' ;
	 x-- ;
	 a = ' ' ;
      }

      else if ( l.sinistra == ' ' ) {
	 maze[x][y] = '^' ;
	 y-- ;
	 a = ' ' ;
      }

      else if ( l.sotto == ' ' ) {
	 maze[x][y] = '^' ;
	 x++ ;
	 a = ' ' ;
      }

       if ( l.destra == 'P' && l.sopra == 'P'  ) {

	  maze[x][y] = '^' ;
	  y-- ;
	  a = ' ' ;

      }


     }

   print( maze ) ;


   return 0 ;

}
