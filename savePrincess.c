#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101]){
  //logic here
  char corner[4];
    
  corner[0] = grid[0][0];//tl
  corner[1] = grid[0][n-1];//tr
  corner[2] = grid[n-1][0];//bl
  corner[3] = grid[n-1][n-1];//br
     
  for(int i=0; i < n/2; i++){
    if(corner[0] == 'p' || corner[2] == 'p'){
      printf("LEFT\n");
    } else {
      printf("RIGHT\n");
    }
    if(corner[2] == 'p' || corner[3] == 'p'){
      printf("DOWN\n");
    } else {
      printf("UP\n");
    }          
  }
  

}
int main(void) {

  int m;
  scanf("%d", &m);
  char grid[101][101]={};
  char line[101];

  for(int i=0; i<m; i++) {
    scanf("%s", line);
    strcpy(grid[i], line);
  }
  displayPathtoPrincess(m,grid);
  return 0;
}
