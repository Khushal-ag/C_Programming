 #include<stdio.h>
int main(){
	char s[100],v[100],c[100],d[100],l[100];
	int vo=0,co=0,di=0,sp=0;
	printf("Enter String : ");
	scanf("%[^\n]",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			v[vo]=s[i];
			vo++;
	   }
		else if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90)){
			 			  c[co]=s[i];
						   co++;	
        }
        else if(s[i]>=48 && s[i]<=57)
  		{
  			d[di]=s[i];
  			di++;
  		}
        else{
        	l[sp]=s[i];
        	sp++;
		}
	}
	printf("Vowel string = %s\n",v);
	printf("Consonant string = %s\n",c);
	printf("Digit string = %s\n",d);
	printf("Total Special characters = %s\n",l);
}

