x=[5,6,8,9,115,16];
N=length(x);
A=[];
K=1;
for k=1:N
   b=exp(((2*pi/N)*-j)*(k-1));   %
   t=1;
   for n=0:N-1
       c=b^n;
       D(t)=x(n+1)*c;
       t=t+1;
   end
   Y=sum(D);
   A(K)=Y;
   K=K+1;
end
disp(A)