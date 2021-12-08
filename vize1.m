%  LABS 2 AND 3 SORULARI
%Q1
A=[1 2;3 4; 5 6; 7 8 ; 9 0; -1 2; 1 2; -3 -1]
A1=[1,2 ;3,4;5,6;7,8;9,0;-1,2;1,2;-3,-1]
A2=[1 3 5 7 9 -1 1 -3;2 4 6 8 0 -2 2 -1]'

%Q2
size(A)
length(A)

%Q3
b=[1; 2; 3; 4; 5; 6; 7; 8]
c=[1 2, 3, 4 5 6 7 8]'
%isequal(b,c)

%Q4
A(5,2)

%Q5
A(13)

%Q6
d=(2:3:299)'
d1=(linspace(2,299,length(d)))'
d2=(linspace(2,299,199))'

%Q7
e=100:-5:-105;
e1=linspace(100,-105,length(e))

%Q8
M1=zeros(8,3)
M1(:,1)=A(:,1)
M1(:,3)=A(:,2)
M1(:,2)=b(end:-1:1)

%/*/*/*

B=zeros(8,3)
B(:,1)=A(:,1)  %M1 BÜTÜN ROWlar ama 1.columlar alınır
B(:,3)=A(:,2)
B(:,2)=b(end:-1:1)

%/*/*/

M2=[A(:,1) A(:,2) b(end:-1:1)]

%Q9
C=zeros(3,8)
C(1,:)=B(:,3)'
C(2,:)=B(:,2)'
C(3,:)=B(:,1)'
C2=[ B(:,3)' ; B(:,2)' ; B(:,1)' ]

%Q10
D=[ B(end:-1:1,1)' ; B(end:-1:1,2)' ; B(end:-1:1,3)' ]

%Q11
C3=[B(:,end:-1:1)' ]; %it is created for any size of B matrices
D2=[B(end:-1:1,1:1:end)];