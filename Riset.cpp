#include<conio.h>
#include<stdio.h>
#include"windows.h"

int main(){
int c[20][20],	//Nilai Biaya
i,j, 			//Nilai baris dan kolom
min, m, n, b, d, c2, c1, p, q;
int minta[20],kps[20],rf[20],cf[20],sum=0;

	
	printf("\n Masukan Banyaknya Baris: ");
		scanf("%d",&m);
	
	printf("\n Masukan Banyaknya Kolom: ");
		scanf("%d",&n);

printf("\n Masukan Biaya Transportasi: \n");        //Matrix

for(i=0;i<m;i++)
    {
    	for(j=0; j<n; j++)
    {
        printf("Masukan Biaya Matriks [%d][%d]: ",(i+1),(j+1));
    	scanf("%d",&c[i][j]);
        }
    }

	printf("\n Masukan Permintaan Distributor : \n");
    for(i=0; i<n; i++){				//Looping sebanyak kolom yang diinput
    
	printf("Masukan Permintaan [%d] : ",(i+1));
    scanf("%d",&minta[i]);
}

	printf("\n Masukan Kapasitas Yang Tersedia di Pabrik : \n");
    	for(i=0; i<m; i++){ 		//Looping sebanyak baris yang di input
    
	printf("Masukan Kapasitas [%d] : ",(i+1));
   		scanf("%d",&kps[i]);		//Memasukan nilai kapasitas ke dalam array
}
		
		printf("\n Matrix:\n");
                  
				  for(i=0; i<m; i++){
                    	for(j=0; j<n; j++)
                    	
						printf(" %d | ",c[i][j]);
                        printf("%d  ",kps[i]);
                        printf("\n");
                }
        
		for(j=0; j<n; j++)
        printf("%d  ",minta[j]);
        
		for(i=0; i<m; i++)
            rf[i]=0;
        
		for(i=0; i<n; i++)
            cf[i]=0;
        
		b=m;
        d=n;
            while(b>0 && d>0)
                  { min=1000;
        
		
		for(i=0; i<m; i++)
        { if(rf[i]!=1)
    		
			{ for(j=0; j<n; j++)
        
		{ if(cf[j]!=1)
            
			{ if(min>c[i][j])
            
			{ min=c[i][j];
            
			p=i;
            q=j;
			
			}
    	}
	}
}
}
        if(kps[p]<minta[q])
        c1=kps[p];
        
		else
        
		c1=minta[q];
            
			for(i=0; i<m; i++)
            
			{ if(rf[i]!=1)
            	{ for(j=0; j<n; j++)
            
			{ if(cf[j]!=1)
            	{ if(min==c[i][j])
            
		{ if(kps[i]<minta[j])
        c2=kps[i];
        
		else
        
		c2=minta[j];
        if(c2>c1)
            
			{ c1=c2;
            
			p=i;
        	q=j;
			
				}
    		}
		}
	}

	}
}
        
		//printf("\n  %d %d %d ",min,p,q);
        
		if(kps[p]<minta[q])
            { sum+=c[p][q]*kps[p];
            minta[q]-=kps[p];
            rf[p]=1;
            b--;
        }
    
	else
    if(kps[p]>minta[q])
    { sum=sum+c[p][q]*minta[q];
    kps[p]-=minta[q];
    cf[q]=1;
    d--;
}
    
	else
    if(kps[p]==minta[q])
    { sum=sum+c[p][q]*kps[p];
        rf[p]=1;
        cf[q]=1;
        b--;
        d--;
}

    //printf("\n %d",sum);
}
    printf("\n\n\n  Biaya Transportasi Minimumnya adalah   %d\n\n",sum);
    getch();
}
