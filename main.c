#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    system("COLOR 1B");
    int a;
    printf("Welcome to the swimming simulator!Press 1 to play");
    scanf("%i",&a);
    system("cls");
    if(a!=1){
        system("COLOR 4C");
        printf("See you later!");
        return 0;
    }
    char ime[20],prezime[30];
    printf("Enter your:\nName:");
    scanf("%s",&ime);
    printf("Surname:");
    scanf("%s",&prezime);
    printf("Welcome %s %s!How old do you want to be when you start your career:",ime,prezime);
    int godine;
    scanf("%i",&godine);
    int ub=rand()%4+1;
    int gr=rand()%2+0;
    int tal=rand()%3+0;
    float ub1=ub,tal1=tal;
    printf("Your pool has %i stars!Press anything to play!",ub);
    char zklj;
    scanf("%c",&zklj);
    system("cls");
    int b,c=2019,d=1,e=1,brtakm[2],j1,gi=1,x,d1[10],d2[10],d3[10],d4[10],z,j=0,je,p=0,p1=0,wr=0,ol,q;
    int br[3]={0,0,0};
    int bro[3]={0,0,0};
    float rez,nrez=63,j2=0,sr=-4,u=0,t=0,k=7,r[4],wrez=20.91,ss,nor=22.30;
    float m[4]={59,60,61,60};
    float oly[4]={21.30,21.22,21.13,60};
    do{
    if(e>4){
        d+=1;
        e=1;
    }
    if(d>12){
        d=1;
        c+=1;
        godine+=1;
    }
    int i=0,j=0;
        printf("Year: %i(age:%i)  Month: %i  Week: %i\n",c,godine,d,e);
        if(d==1 && e==1){
            printf("Press 1 if you want to buy new racing suit!\n");
            scanf("%i",&ss);
            if(ss!=1)
                ss=0;
                if(c%4==0 && nrez<=nor){
                    printf("This is an olympic year and you can go to the Olympics!Press 1 if you want to go:");
                    scanf("%i",&ol);
                if(ol==1){
                    printf("You will swim on the Olympic games this year in 12 month 4 week!\n");
                }
                }
                else
                    ol=0;
            printf("How many competitions do you want to have this year:");
            scanf("%i",&brtakm[0]);
            printf("How many of them should be extremly important:");
            scanf("%i",&brtakm[1]);
        }
        if(brtakm[1]>brtakm[0])
            brtakm[1]=brtakm[0];
           if(d!=1 || e!=1)
            i=2;
        for(;i<2;++i){
            if(brtakm[0]==0){
             brtakm[1]=0;
             break;
            }
           for(i=0;i<brtakm[0];++i){
           printf("%i. competiton month:",i+1);
           scanf("%i",&d1[i]);
           printf("week:");
           scanf("%i",&d2[i]);
           if(ol==1 && d1[i]==12 && d2[i]==4){
            printf("That week is reserved for Olympic games!Try again:\n");
            --i;
           }
           }
           if(brtakm[1]==0)
            break;
           for(i=0;i<brtakm[1];++i){
           int v[brtakm[1]];
           printf("Which competitions will be important:");
           scanf("%i",&v[i]);
           d3[i]=d1[v[i]-1];
           d4[i]=d2[v[i]-1];
           }
            }
        printf("Competitions are in:\n");
        for(i=0;i<brtakm[0];++i){
            printf("%i month %i week\n",d1[i],d2[i]);
        }
        printf("Important ones are in:\n");
        for(i=0;i<brtakm[1];++i){
            printf("%i month %i week\n",d3[i],d4[i]);
        }
        printf("How hard will you train this week(from 1 to 5):");
        scanf("%i",&j1);
        int f=0;
        j2+=j1;
        if(j1==1){
            t+=5;
            u/=1.8;
            sr/=1.5;
            j2/=1.03;
        }
        if(j1==3){
            u/=1.3;
            sr/=1.2;
        }
        if(j1==2){
            u/=1.6;
            sr/=1.4;
            t+=2;
        }
        if(j1==5){
            sr+=1;
            u+=2;
            t/=1.03;
            f+=1;
        }
        if(j1==4){
            sr+=0.5;
            u+=1;
            f+=0.5;
        }
        float godine1=18;
        for(i=0;i<brtakm[0];++i){
        if(d==d1[i] && e==d2[i]){
           printf("Its competition time!\n");
           z=godine;
           if(godine<=godine1)
            godine1=godine;
            if(godine>=23){
            for(;z>=23;--z){
            godine1-=0.5;
           }
            }
           rez=nrez-(j2/14)-(godine1/6)-(t/10)-(ub1/8)-(tal1/8)-(gi/10)+(sr/8)+(u/4)-(ss/10);
           if(rez<=45)
            rez+=0.5;
            if(rez<=40)
            rez+=0.8;
           if(rez<=35)
            rez+=1;
           if(rez<=30)
            rez+=1.3;
           if(rez<=27)
            rez+=1.5;
           if(rez<=25)
            rez+=1.8;
           if(rez<=23)
            rez+=2;
           if(rez<=22)
            rez+=2.3;
           if(rez<=21)
            rez+=2.5;
           if(rez<=20)
            rez+=2.7;
            if(f<=15)
                rez+=0.5;
            if(f<=10)
                rez+=1;
            if(f<=8)
                rez+=1;
            if(f<=6)
                rez+=1;
            if(f<=5)
                rez+=1;
            if(f<=3)
                rez+=2;
            if(d==d3[i]&& e==d4[i])
                    rez-=0.5;
           u/=1.5;
           j2/=1.4;
           printf("Your time: %.2f ",rez);
           if(rez<nrez){
            nrez=rez;
            printf("That is your best result!");
            sr/=3;
           }
           if(rez>=nrez)
            sr+=1;
            m[3]=rez;
            m[0]=m[0]-j2/22+u/5-t/30;
            m[1]=m[1]-j2/25+u/4.5-t/30;
            m[2]=m[2]-j2/25+u/5-t/30;
            for(j=0;j<3;++j){
            if(m[j]<=45)
            m[j]+=0.5;
            if(m[j]<=40)
            m[j]+=0.8;
           if(m[j]<=35)
            m[j]+=1;
           if(m[j]<=30)
            m[j]+=1.3;
           if(m[j]<=27)
            m[j]+=1.5;
           if(m[j]<=25)
            m[j]+=1.8;
           if(m[j]<=23)
            m[j]+=2.1;
           if(m[j]<=22)
            m[j]+=2.3;
           if(m[j]<=21)
            m[j]+=2.5;
           if(m[j]<=20)
            m[j]+=2.8;
            }
            for(je=0;je<4;++je){
            r[je]=600;
            for(j=0;j<4;++j){
               if(m[j]<r[je]){
                for(p=0;p<4;++p){
                  if(m[j]==r[p]){
                    ++p1;
                  }
                }
               if(p1==0)
                r[je]=m[j];
               }
            p1=0;
            }
            }
            for(j=0;j<4;++j){
                printf("\n%i. place result: %.2f",j+1,r[j]);
                if(r[j]<wrez){
                printf("THAT IS THE WORLD RECORD TIME!!!");
                wrez=r[j];
                if(rez==wrez){
                wr+=1;
                sr=-8;
                }
            }
                if(r[j]==m[3]){
                    printf("-THAT IS YOUR RESULT!");
                if(j!=3)
                   br[j]+=1;
            }
            }
            printf("Press anything to continue:");
            scanf("%i",&q);
        }
        }
        if(ol==1 && d==12 && e==4){
            system("COLOR 3D");
            printf("WELCOME TO OLYMPIC GAMES!!!");
            z=godine;
           if(godine<=godine1)
            godine1=godine;
            if(godine>=23){
            for(;z>=23;--z){
            godine1-=0.5;
           }
            }
           rez=nrez-(j2/14)-(godine1/6)-(t/10)-(ub1/8)-(tal1/8)-(gi/10)+(sr/8)+(u/4)-(ss/10);
           if(rez<=45)
            rez+=0.5;
            if(rez<=40)
            rez+=0.8;
           if(rez<=35)
            rez+=1;
           if(rez<=30)
            rez+=1.5;
           if(rez<=27)
            rez+=1.7;
           if(rez<=25)
            rez+=2;
           if(rez<=23)
            rez+=2.3;
           if(rez<=22)
            rez+=2.5;
           if(rez<=21)
            rez+=2.7;
           if(rez<=20)
            rez+=3;
            if(f<=15)
                rez+=0.5;
            if(f<=10)
                rez+=1;
            if(f<=8)
                rez+=1;
            if(f<=6)
                rez+=1;
            if(f<=5)
                rez+=1;
            if(f<=3)
                rez+=2;
            if(d==d3[i]&& e==d4[i])
                    rez-=0.5;
           u/=1.5;
           j2/=1.4;
           printf("Your time: %.2f ",rez);
           if(rez<nrez){
            nrez=rez;
            printf("That is your best result!");
            sr/=3;
           }
           if(rez>=nrez)
            sr+=1;
            oly[3]=rez;
            for(je=0;je<4;++je){
            r[je]=600;
            for(j=0;j<4;++j){
               if(oly[j]<r[je]){
                for(p=0;p<4;++p){
                  if(oly[j]==r[p]){
                    ++p1;
                  }
                }
               if(p1==0)
                r[je]=oly[j];
               }
            p1=0;
            }
            }
            for(j=0;j<4;++j){
                printf("\n%i. place result: %.2f",j+1,r[j]);
                if(r[j]<wrez){
                printf("THAT IS THE WORLD RECORD TIME!!!");
                wrez=r[j];
                if(rez==wrez){
                wr+=1;
                sr=-8;
                }
            }
                if(r[j]==oly[3]){
                    printf("-THAT IS YOUR RESULT!");
                if(j!=3)
                   bro[j]+=1;
            }
            }
            printf("Press anything to continue:");
            scanf("%i",&q);
        }
        if(d==12 && e==4){
            printf("Its the end of this season!Press 2 to end your career:");
            scanf("%i",&b);
            u=0;
            j2=0;
            sr=-4;
            gi+=1;
            if(gr==1)
              sr=-8;
            if(gr==2)
              sr=-10;
            if(gi>=8)
                sr=0;
            f=0;
            t/=3;
            m[0]-=1;
            m[1]-=1;
            m[2]-=1;
            ss=0;
            ol=0;
            oly[0]-=0.04;
            oly[1]-=0.036;
            oly[2]-=0.033;
            nor-=0.03;
        }
        e+=1;
        system("cls");
        if(b==2){
            system("COLOR 4C");
    printf("\nYour career was great %s %s!\nYour best result was: %.2f!\nYou were a swimmer for %i years!\nYour talent points: %i!\nGold medals:%i\nSilver medals:%i\nBronze medals:%i\nOlympic medals:\nGold medals:%i\nSilver medals:%i\nBronze medals %i\n"
           ,ime,prezime,nrez,gi-1,tal,br[0],br[1],br[2],bro[0],bro[1],bro[2]);
           printf("World records:%i\nCongrats!",wr);
        }
    }while(b!=2);
    return 0;
}
