f=@(x) cos(x)-sin(x)-0.5
x0=0;
x1=1;
E=1;
x2=2*pi;
t=0;
while(E>0.00001)
    t=t+1
    x2=x1-((x1-x0)/((f(x1)-f(x0)))*f(x0));
    E=abs(x2-x1);
    x0=x1;
    x1=x2;
end
x2
