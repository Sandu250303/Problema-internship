#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100],i,j,s,smax=0,m,m2,n2,i2,j2,p,q;
    cout<<"valoarea"<<" "<<"lui"<<" "<<"n"<<" "<<"este"<<" "<<":";
    cin>>n;
    m=n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            cout<<"valoarea"<<" "<<"elementului"<<" "<<"de"<<" "<<"pe"<<" "<<"linia"<<" "<<i<<" "<<"si"<<" "<<"coloana"<<" "<<j<<" "<<" este"<<" "<<":"<<" ";
            cin>>a[i][j];
        }
    m2=n;
    n2=n;

    while(m2!=0) //suma eliminand cate o coloana
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m2; j++)
            {
                s=s+a[i][j];
            }
        }
        if(s>smax)
        {
            smax=s;
        }
        s=0;
        m2--;
    }
    i2=1;
    s=0;
    m2=m;


    while(i2!=n) //suma eliminand cate o linie apoi rand pe rand cate o coloana
    {
        m2=m;
        while(m2!=0)
        {
            for(i=i2; i<=n; i++)
            {
                for(j=1; j<=m2; j++)
                {
                    s=s+a[i][j];
                }
            }
            if(s>smax)
            {
                smax=s;
            }
            s=0;
            m2--;
        }

        i2++;
    }
    while(n2!=0) //suma eliminand cate o linie
    {
        for(i=1; i<=n2; i++)
        {
            for(j=1; j<=m; j++)
            {
                s=s+a[i][j];
            }
        }
        if(s>smax)
        {
            smax=s;
        }
        s=0;
        n2--;
    }
    i2=1;
    j2=1;
    m2=m;
    n2=n;
    q=n;
    while(q!=0)
    {
        while(i2!=n2)
        {
            for(i=i2; i<=n2; i++)
            {
                for(j=j2; j<=m2; j++)
                {
                    s=s+a[i][j];
                }
            }
            if(s>smax)
            {
                smax=s;
            }
            s=0;
            i2++;
        }
        q--;

    }
    j2=1;
    m=n;
    p=m;
    while(p!=0)
    {
        j2=1;
        q=n;
        while(q!=0)
        {
            for(i=1; i<=n; i++)
            {
                if(s>smax)
                {
                    smax=s;
                }
                for(j=j2; j<=m; j++)
                {
                    s=s+a[i][j];
                }

            }
            j2++;
            q--;
            s=0;
        }

        p--;

    }
    s=0;
    j2=1;
    q=n;
    while(p!=0)
    {
        while(q!=0)
        {
            for(i=1; i<=n; i++)
            {
                if(s>smax)
                {
                    smax=s;
                }
                for(j=1; j<=m; j++)
                {
                    s=s+a[i][j];
                }
            }
            m--;
            q--;
            s=0;
        }
        p--;
    }
    cout<<"suma"<<" "<<"este"<<" "<<smax;

    return 0;
}
