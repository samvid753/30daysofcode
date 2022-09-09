f=@(x) (x^3)+(4^x^2)-10
a=1;
b=2;
if(f(a)*f(b)<0)
 while(abs(b-a)>0.0001)
  c=(a+b)/2;
  if(f(c)==0)
     c
  else if(f(a)*f(c)<0)
    b=c;
  else
    a=c;
  end
 end
end
c 

