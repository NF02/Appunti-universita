r = linspace(0,2*pi) ;
th = linspace(0,2*pi) ;
[R,T] = meshgrid(r,th) ;
X = R.*cos(T) ;
Y = R.*sin(T) ;
Z = R ;
surf(X,Y,Z)