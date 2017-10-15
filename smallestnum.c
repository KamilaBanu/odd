 #include<stdio.h>
int main(){
  int a[50],s,i,big,small;
  printf("Enter the size of the array");
  scanf("%d",&s);
  printf("Enter %d elements in to the array",s);
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);
  big=a[0];
  for(i=1;i<s;i++){
      if(big<a[i])
           big=a[i];
  }
  printf("Largest element: %d",big); 
  small=a[0];
  for(i=1;i<s;i++){
      if(small>a[i])
           small=a[i];
  }
  printf("Smallest element: %d",small);
  return 0;
}
