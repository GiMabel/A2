#include<iostream>
using namespace std;
int main ()
{
	int hf,mf,sf,hi,mi,si,ht,mt,st,s;
	cout<<"Ingrese el tiempo final (hf  mf  sf) : "; cin>>hf>>sf;
	cout<<"Ingrese el tiempo inicio(hi  mi  si) : "; cin>>hi>>mi>>si;
	if(sf>si){
 }else{ 
 mf=mf-1;
 sf=sf+60;

} 
  
  st=sf-si;
  if(mf>mi){
  	
 }else{ 
 hf=hf-1;
mf=mf+60;

}  

mt=mt-mi;
ht=ht-hi;
s=ht*3600+mt*60+st;

cout<<"Han transcurrido "<<ht<<" Horas :"<<mt<<" Minutos : "<<st<<" Segundo"<<endl;
cout<<" En total son :"<<s<< " Segundo"<<endl<<endl;
return 0;
} 