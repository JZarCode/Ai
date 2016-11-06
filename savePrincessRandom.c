#include <stdio.h>
#include <string.h>
#include <math.h>
void nextMove(int n, int r, int c, char grid[101][101]){
  //logic here
  int rPrincess, cPrincess;
  int rDif, cDif;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(grid[i][j] == 'p'){
	rPrincess = i;
	cPrincess = j;
      }
    }
  }
  
  rDif = r-rPrincess;
  cDif = c-cPrincess;

  if(rDif != 0){
    if(rDif < 0){
      printf("DOWN\n");
      return;
    } else {
      printf("UP\n");
      return;
    }
  }
  if(cDif != 0){
    if(cDif < 0){
      printf("RIGHT\n");
      return; 
    } else {
      printf("LEFT\n");
      return;
    }
  }
  

}
int main(void) {

  int n, r, c;

  scanf("%d", &n);
  scanf("%d", &r);
  scanf("%d", &c);

  char grid[101][101];
    
  for(int i=0; i<n; i++) {
    scanf("%s[^\n]%*c", grid[i]);
  }

  nextMove(n, r, c, grid);
  return 0;
}
