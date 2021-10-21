//https://www.codechef.com/problems/CLEANUP

#include <iostream>
using namespace std;



int main(int argc, char** argv) {

int T;
int N;
int M;
int sem;

cin >> T;

while(T){

cin >> N;
cin >> M;

int jobs[M];
int dif=N-M;
int vett[dif];

for(int i=0; i<M; i++){
cin >> jobs[i];
}

int x=0;
for(int i=1; i<N+1; i++){
bool trovato=false;
int k=0;
while(k<M && trovato==false){
if(jobs[k]==i){
trovato=true;
}else k++;
}
if(trovato==false){
vett[x]=i;
x++;
}
}



int dim1=0;
int dim2=0;
if((dif%2)==0){
dim1=dif/2;
dim2=dif/2;
}else{
dim1=((dif-1)/2)+1;
dim2=((dif-1)/2);
}

int chef[dim1];
int assist[dim2];
int z=0;
int o=0;
for(int i=0; i<dif; i++){
if((i%2)==0){
chef[z]=vett[i];
z++;
}else{
assist[o]=vett[i];
o++;
}
}

for(int i=0; i<dim1; i++){
cout <<chef[i]<<" ";
}
cout << endl;
for(int i=0; i<dim2; i++){
cout << assist[i]<<" ";
}
cout << endl;



T--;
}

return 0;
}
