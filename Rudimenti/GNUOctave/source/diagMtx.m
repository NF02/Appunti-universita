A = [2, 20, 1, 3; 4, 9, 12, 0; 6, 4, 13, 7; 10, 39, 37, 5];

A
printf('________________________\n');

diagZ = diag(A); % diagonale 0
diagZ

diagU = diag(A,1); % diagonale successiva
diagU

diagMU = diag(A,-1); % diagonale precedente
diagMU
