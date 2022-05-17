void main(){
  int n=0;
do{
    print(n);
    print(",");
    n++;
    n=n>5?0:n;
}while(n>0);
}