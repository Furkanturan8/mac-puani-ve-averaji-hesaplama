#include <stdio.h>
#include <stdlib.h>

int main()
{

    int galibiyet=0,maglubiyet=0,beraberlik=0;
    int devamkontrolu=1;
    int atilangol=0,yenilengol=0;
    int s=1;
    int topatilangol=0;
    int topyenilengol=0;
    int averaj;

    while (devamkontrolu==1)
	{
	    printf("%d.maciniz...\n",s);
	    s=s+1;
	    printf("\nTakiminin attigi gol sayisi:");
	    	scanf("%d",&atilangol);
	    printf("Takiminin yedigi gol sayisi:");
	    	scanf("%d",&yenilengol);
	
	    topatilangol+=atilangol;
	    topyenilengol+=yenilengol;
	
	    if(atilangol==yenilengol)
	        beraberlik++;
	    
	    else if(atilangol>yenilengol)
	        galibiyet++;
	    
	    else if(yenilengol>atilangol)
	        maglubiyet++;
	    

	    printf("\nDevam etmek istiyor musunuz?(evet=1)(hayir icin farkli bir tusa basiniz)\n");
	    scanf("%d",&devamkontrolu);
	}
    averaj=topatilangol-topyenilengol;
    printf("\nGalibiyet:%d   Maglubiyet:%d   Beraberlik:%d",galibiyet,maglubiyet,beraberlik);
    printf("\nToplam puaniniz:%d\n",(galibiyet*3)+beraberlik);
    printf("Averajiniz:%d\n",averaj);

    return 0;
}
