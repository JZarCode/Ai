#include<stdio.h>
void next_move(int posr, int posc, char board[5][5]) {
  int r,c;
    
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(board[i][j] == 'd'){
	r = posr - i;
	c = posc - j;
	if(r == 0 && c == 0){
	  printf("CLEAN\n");
	  return;
	}
	while(r != 0){
	  if(r > 0){
	    printf("UP\n");
	    return;
	  } else {
	    printf("DOWN\n");
	    return;
	  }    
	}
	while(c != 0){
	  if(c > 0){
	    printf("LEFT\n");
	    return;
	  } else {
	    printf("RIGHT\n");
	    return;
	  }    
	}
      }
    }
  }
    
}
int main(void) {
  int pos[2], i;
  char board[5][5], line[6];
  scanf("%d", &pos[0]);
  scanf("%d", &pos[1]);
  for(i=0; i<5; i++) {
    scanf("%s[^\\n]%*c", line);
    strncpy(board[i], line, 5);
  }
  next_move(pos[0], pos[1], board);
  return 0;
}
