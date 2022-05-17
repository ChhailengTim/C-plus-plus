n=0
start=1
for i=start;i<=start;i++:{
line="";
n+=i;
for(j=start;j<=n;j++){
line+="*";
}
for(k=0;k<i;k++){
line+="$";
}
print(line);
print("\n");
}