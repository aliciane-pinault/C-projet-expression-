# C++ projet expression

Par Mouton Yannis et Aliciane Pinault

La Partie Itération 1 est une partie où l'utilisateur n'as besoin de rien faire, il y à déjà une expression qui test le programme.

Pour la partie Iteration 2 l'utilisateur doit rentrer une expression NPI puis il y aura l'affichage de celle-ci en normale ( avec des parenthèses )
Par exemple pour l'expression : 4 2 / 3 5 * square inverse 6 sqrt 2 ^ oppose + +
on aura ce résultat qui s'affichera : Expression: ((4 / 2) + (I(C((3 * 5))) + -((R(6) ^ 2))))
Expression en notation polonaise inverse: 4 2 / 3 5 * C I 6 R 2 ^ - + +
Evaluation: -3.99556

I = inverse ( fais appel a la classe Inverse)
C = square ( fais appel a la classe Carre)
R = sqrt ( fais appel a la classe Racine_Carree)
^ = ( fais appel a la classe Puissance )
oppose = ( fais appel a la classe oppose )

si on test une autre par exemple cette fois ci avec les autres classes non montrée jusqu'à présent on obtient ceci :

2 3 * 4 / 6 abs lognep 3 2 ^ + +
Expression: (((2 * 3) / 4) + (L(A(6)) + (3 ^ 2)))
Expression en notation polonaise inverse: 2 3 * 4 / 6 A L 3 2 ^ + +
Evaluation: 12.2918

L = lognep ( fais appel a la classe Log_Nep)
A = abs ( fais appel a la classe Valeur_Absolue)

