clc;
clear all;
n=input('enter n');

for i=1:n
    for j=1:n
        a(i,j)= input('enter the value of matrix');
    end
end

for i=1:n
    L(i,i)=1;
end
for i=1:n-1
    for j=i+1:n
        m(j,i)=a(j,i)/a(i,i);
        L(j,i)=a(j,i)/a(i,i);
        for k=1:n
            a(j,k)=a(j,k)-m(j,i)*a(i,k);
        end
    end
end
L
a
L*a