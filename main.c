#include <stdio.h>
#include <stdlib.h>

int m,k,l,n,v1=1,v2=1,flag=0;
char cb[9][9];
char z[13]={'K','Q','B','N','R','P','k','q','b','n','r','p'};
char z1[7]={'K','Q','B','N','R','P'};
char z2[7]={'k','q','b','n','r','p'};

restart()
{ int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cb[i][j]='_';
        }
    }
    cb[0][0]='R';cb[0][1]='N';cb[0][2]='B';cb[0][3]='Q';cb[0][4]='K';cb[0][5]='B';cb[0][6]='N';cb[0][7]='R';

    for(i=0;i<8;i++)
    { cb[1][i]='P';
    }
    cb[7][0]='r';cb[7][1]='n';cb[7][2]='b';cb[7][3]='q';cb[7][4]='k';cb[7][5]='b';cb[7][6]='n';cb[7][7]='r';

    for(i=0;i<8;i++)
    { cb[6][i]='p';
    }
}
show()
{ int i,j;
printf("\n|---|---|---|---|---|---|---|---|\n");
    for(i=0;i<8;i++)
    {   printf("|");
        for(j=0;j<8;j++)
        {
            printf(" %c |",cb[i][j]);
        }
   printf("\n|---|---|---|---|---|---|---|---|\n");
    }
}
int check()
{ int i,wrong=0;
   if(m<9&&n<9&&k<9&&l<9&&m>0&&n>0&&k>0&&l>0)
   {
       for(i=0;i<6;i++)
           {if(cb[m-1][n-1]==z1[i])
               {
                   wrong=1;
               }

           }

       if( wrong!=1)
 {
     return 1;
   }
   else{return 0;}
    }
   else{return 0;}
}
int check1()
{ int i,wrong=0;
   if(m<9&&n<9&&k<9&&l<9&&m>0&&n>0&&k>0&&l>0)
   {
       for(i=0;i<6;i++)
           {if(cb[m-1][n-1]==z2[i])
               {
                   wrong=1;
               }

           }

       if( wrong!=1)
 {
     return 1;
   }
   else{return 0;}
    }
   else{return 0;}
}


p1()
{
   int i,j,wrong=0,s;
   char ch;


  printf("\tplayer1\nenter the piece current location\n");
  scanf("%d %d",&k,&l);
  printf("enter the new position you want to put it in\n");
  scanf("%d %d",&m,&n);
  ch=cb[k-1][l-1];
  switch(ch)
  {
      case 'P':if(check()==1)
               {
                 if(m==k+1&&n==l)
                  {
                   if(cb[m-1][n-1]=='_')
                   {cb[k-1][l-1]='_';
                    cb[m-1][n-1]='P';
                    }
                    else {printf("wrong input\nplease enter a valid option");}
                    }
                 else
                    if(m==k+1&&(n==l+1||n==l-1))
                    {
                        if(cb[m-1][n-1]!='_')
                        {
                         cb[k-1][l-1]='_';
                         cb[m-1][n-1]='P';
                        }
                        else
                       {
                        printf("wrong input\nplease enter a valid option\n");
                        flag=1;
                        }

                     }
                    else
                    {
                        printf("wrong input\nplease enter a valid option\n");
                        flag=1;
                    }
               }
                   else
                    {
                    printf("wrong input\nplease enter a valid option\n");
                    flag=1;
                     }

                break;

      case 'R':
               if (check()==1)
               {
                   if(m>k&&l==n)
                        {
                          for(i=k;i<(m-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='R';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                   if(m<k&&l==n)
                    {
                          for(i=k-2;i>(m-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='R';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                    if(n>l&&m==k)
                        {
                          for(i=l;i<(n-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='R';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                      if(n<l&&m==k)
                      {
                          for(i=l-2;i>(n-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='R';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

               }
               else
                {
                    printf("wrong input\nplease enter a valid option\n");
                    flag=1;
                }
                break;

        case 'K': if(check()==1)
               {
                 if((m-k)==1||(m-k)==-1||(m-k)==0)
                 {
                     if((n-l)==1||(n-l)==-1)
                    {
                      cb[k-1][l-1]='_';
                      cb[m-1][n-1]='K';
                    }
                     else
                       if((m-k)!=0&&(n-l)==0)
                        {
                        cb[k-1][l-1]='_';
                        cb[m-1][n-1]='K';
                        }
                         else
                         {
                          printf("wrong input\nplease enter a valid input\n");
                          flag=1;
                         }
                 }
                  else
                 {
                   printf("wrong input\nplease enter a valid input\n");
                    flag=1;
                 }
               }
               else
               {
                   printf("wrong input\nplease enter a valid input\n");
                    flag=1;
               }
                break;


        case 'N':
                  if(check()==1)
                  {
                      if((((m==k-2)||(m==k+2))&&((n==l-1)||(n==l+1)))||(((n==l-2)||(n==l+2))&&((m==k-1)||(m==k+1))))
                      {
                          cb[k-1][l-1]='_';
                          cb[m-1][n-1]='N';
                       }
                      else
                     {
                      printf("wrong input\nplease enter a valid input\n");
                      flag=1;
                      }
                  }
                  else
                 {
                   printf("wrong input\nplease enter a valid input\n");
                    flag=1;
                 }
                 break;
        case 'B': if (check()==1)
                  {
                   if(((m-k)==(n-l))||((m-k)==(l-n)))
                   {
                        if(m>k&&n>l)
                        {
                          for(i=k,j=l;(i<(m-1))&&(j<(n-1));i++,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='B';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m<k&&n<l)
                        {
                          for(i=k-2,j=l-2;i>(m-1)&&(j>(n-1));i--,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='B';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m>k&&n<l)
                        {
                          for(i=k,j=l-2;(i<(m-1))&&(j>(n-1));i++,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='B';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                          if(m<k&&n>l)
                        {
                          for(i=k-2,j=l;(i>(m-1))&&(j<(n-1));i--,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='B';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }
                   }
                   else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                  } break;


        case 'Q':
                 if(check()==1)
                 {
                       if(m>k&&l==n)
                        {
                          for(i=k;i<(m-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                   if(m<k&&l==n)
                    {
                          for(i=k-2;i>(m-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                    if(n>l&&m==k)
                        {
                          for(i=l;i<(n-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                      if(n<l&&m==k)
                      {
                          for(i=l-2;i>(n-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                         if(((m-k)==(n-l))||((m-k)==(l-n)))
                   {
                        if(m>k&&n>l)
                        {
                          for(i=k,j=l;(i<(m-1))&&(j<(n-1));i++,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }
                          else
                           if(m<k&&n<l)
                        {
                          for(i=k-2,j=l-2;i>(m-1)&&(j>(n-1));i--,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m>k&&n<l)
                        {
                          for(i=k,j=l-2;(i<(m-1))&&(j>(n-1));i++,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                          if(m<k&&n>l)
                        {
                          for(i=k-2,j=l;(i>(m-1))&&(j<(n-1));i--,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='Q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }
                           else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                   }
                   }
                   else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                   break;




     default: printf("wrong input\nplease enter a valid piece\n");
                    flag=1;
  }

}
p2()
{
   int i,j,wrong=0,s;
   char ch;


  printf("\tplayer2\nenter the piece current location\n");
  scanf("%d %d",&k,&l);
  printf("enter the new position you want to put it in\n");
  scanf("%d %d",&m,&n);
  ch=cb[k-1][l-1];
  switch(ch)
  {
      case 'p':if(check1()==1)
               {
                 if(m==k-1&&n==l)
                  {
                   if(cb[m-1][n-1]=='_')
                   {
                    cb[k-1][l-1]='_';
                    cb[m-1][n-1]='p';
                    }
                    else{printf("wrong input\nplease enter a valid option");}
                    }

                 else
                    if(m==k-1&&(n==l+1||n==l-1))
                    {
                        if(cb[m-1][n-1]!='_')
                        {
                         cb[k-1][l-1]='_';
                         cb[m-1][n-1]='p';
                        }
                        else
                       {
                        printf("wrong input\nplease enter a valid option\n");
                        flag=1;
                        }

                     }
                    else
                    {
                        printf("wrong input\nplease enter a valid option\n");
                        flag=1;
                    }
               }
                   else
                    {
                    printf("wrong input\nplease enter a valid option\n");
                    flag=1;
                     }

                break;

      case 'r':
               if (check1()==1)
               {
                   if(m>k&&l==n)
                        {
                          for(i=k;i<(m-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='r';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                   if(m<k&&l==n)
                    {
                          for(i=k-2;i>(m-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='r';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                    if(n>l&&m==k)
                        {
                          for(i=l;i<(n-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='r';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                      if(n<l&&m==k)
                      {
                          for(i=l-2;i>(n-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='r';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

               }
               else
                {
                    printf("wrong input\nplease enter a valid option\n");
                    flag=1;
                }
                break;

        case 'k': if(check1()==1)
               {
                 if((m-k)==1||(m-k)==-1||(m-k)==0)
                 {
                     if((n-l)==1||(n-l)==-1)
                    {
                      cb[k-1][l-1]='_';
                      cb[m-1][n-1]='k';
                    }
                     else
                       if((m-k)!=0&&(n-l)==0)
                        {
                        cb[k-1][l-1]='_';
                        cb[m-1][n-1]='k';
                        }
                         else
                         {
                          printf("wrong input\nplease enter a valid input\n");
                          flag=1;
                         }
                 }
                  else
                 {
                   printf("wrong input\nplease enter a valid input\n");
                    flag=1;
                 }
               }
               else
               {
                   printf("wrong input\nplease enter a valid input\n");
                    flag=1;
               }
                break;


        case 'n':
                  if(check1()==1)
                  {
                      if((((m==k-2)||(m==k+2))&&((n==l-1)||(n==l+1)))||(((n==l-2)||(n==l+2))&&((m==k-1)||(m==k+1))))
                      {
                          cb[k-1][l-1]='_';
                          cb[m-1][n-1]='n';
                       }
                      else
                     {
                      printf("wrong input\nplease enter a valid input\n");
                      flag=1;
                      }
                  }
                  else
                 {
                   printf("wrong input\nplease enter a valid input\n");
                    flag=1;
                 }
                 break;
        case 'b': if (check1()==1)
                  {
                   if(((m-k)==(n-l))||((m-k)==(l-n)))
                   {
                        if(m>k&&n>l)
                        {
                          for(i=k,j=l;(i<(m-1))&&(j<(n-1));i++,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='b';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m<k&&n<l)
                        {
                          for(i=k-2,j=l-2;i>(m-1)&&(j>(n-1));i--,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='b';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m>k&&n<l)
                        {
                          for(i=k,j=l-2;(i<(m-1))&&(j>(n-1));i++,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='b';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                          if(m<k&&n>l)
                        {
                          for(i=k-2,j=l;(i>(m-1))&&(j<(n-1));i--,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='b';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }
                   }
                   else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                  } break;


        case 'q':
                 if(check1()==1)
                 {
                       if(m>k&&l==n)
                        {
                          for(i=k;i<(m-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                   if(m<k&&l==n)
                    {
                          for(i=k-2;i>(m-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[i][l-1]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                   else
                    if(n>l&&m==k)
                        {
                          for(i=l;i<(n-1);i++)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                      if(n<l&&m==k)
                      {
                          for(i=l-2;i>(n-1);i--)
                              {
                               for(j=0;j<12;j++)
                                   {
                                    if(cb[k-1][i]==z[j])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                          }
                    else
                         if(((m-k)==(n-l))||((m-k)==(l-n)))
                   {
                        if(m>k&&n>l)
                        {
                          for(i=k,j=l;(i<(m-1))&&(j<(n-1));i++,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m<k&&n<l)
                        {
                          for(i=k-2,j=l-2;i>(m-1)&&(j>(n-1));i--,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                           if(m>k&&n<l)
                        {
                          for(i=k,j=l-2;(i<(m-1))&&(j>(n-1));i++,j--)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }else
                          if(m<k&&n>l)
                        {
                          for(i=k-2,j=l;(i>(m-1))&&(j<(n-1));i--,j++)
                              {
                               for(s=0;s<12;s++)
                                   {
                                    if(cb[i][j]==z[s])
                                      {wrong=1;}
                                    }
                               }
                         if(wrong!=1)
                         {
                           cb[k-1][l-1]='_';
                           cb[m-1][n-1]='q';
                          }
                         else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                          }
                           else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }

                   }
                   }
                   else
                          {
                            printf("wrong input\nplease enter a valid option\n");
                            flag=1;
                          }
                   break;




     default: printf("wrong input\nplease enter a valid piece\n");
                    flag=1;
  }}

  alive1()
  { int i,j;
      for(i=0;i<9;i++)
      {
          for(j=0;j<9;j++)
          {
              if(cb[i][j]=='k')
              {
                  v1=1;
              }
              else{v1=0;}
              if(v1==1)
              {break;}
          }
          if(v1==1)
              {break;}
      }
  }

 alive2()
  { int i,j;
      for(i=0;i<9;i++)
      {
          for(j=0;j<9;j++)
          {
              if(cb[i][j]=='K')
              {
                  v2=1;
              }
              else{v2=0;}
              if(v2==1)
              {break;}
          }
          if(v2==1)
              {break;}
      }
  }

play1()
{
    p1();
    show();
    if(flag==1)
    {   flag=0;
        play1();
    }
}

play2()
{
    p2();
    show();
    if(flag==1)
    {   flag=0;
        play2();
    }
}





int main()
{  int i,chances;
printf("\n\tlets begin the game\n\t      chess\n\n");

    restart();
    show();

    for(i=0;i<100;i++)
    {
    play1();
    alive1();
    if(v1==0)
    {
        printf("player 1 wins\n");
        break;
    }
    play2();
    alive2();
    if(v2==0)
    {
        printf("player 2 wins\n");
        break;
        }
    }
    return 0;
}
