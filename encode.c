// 算法
char* encode(char prim[]) {
  int i,n,len;
  char code[100];
  char temp_char,trans_char;
  int temp_num,trans_num;
  len = strlen(prim);

  for(i = 0;i < len;i++) {
      temp_char = prim[i];                   //Consider about the corresponding number of character
      if (temp_char <= 'z' && temp_char >= 'a')
          temp_num = temp_char - 'a' + 1;
      else if (temp_char <= 'Z' && temp_char >= 'A')
          temp_num = temp_char - 'A' + 27;
      else {
      		trans_char = temp_char;
          temp_num = 52;
      }

      trans_num = temp_num*3 % 52;

      if (trans_num > 26 && trans_num <= 52)         //Transform number to character
          trans_char = 'A' + trans_num - 27;
      else if (trans_num > 0 && trans_num <= 26)
          trans_char = 'a' + trans_num - 1;

      code[i] = trans_char;
  }
  code[len] = '\0';
  return code;
}
