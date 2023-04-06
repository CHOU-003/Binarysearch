
int Nganxep[MAX_SIZE];
int top = -1;
 
void push(int gt) {
   if(top >= MAX_SIZE - 1) {
      printf("Qua ngan xep: \n");
   } else {
      top++;
      Nganxep[top] = gt;
   }
}
 
int pop() {
   if(top < 0) {
      printf("Qúa kích thước ngăn\n");
      return -1;
   } else {
      int gt = Nganxep[top];
      top--;
      return gt;
   }
}
 
int peek() {
   if(top < 0) {
      printf("Không có gia tri trong ngan\n");
      return -1;
   } else {
      return Nganxep[top];
   }
}
 
void XuatNgan() {
   if(top < 0) {
      printf("Ngăn xep rông\n");
   } else {
      printf("Ngan xep lai la:\n");
      for(int i = top; i >= 0; i--)
         printf("%d\n",Nganxep[i]);
   }
}