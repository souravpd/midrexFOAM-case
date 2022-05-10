Dp         0.01;
epsilon    0.45;


porosityD #calc"150/$Dp/$Dp*(1-$epsilon)*(1-$epsilon)/$epsilon/$epsilon/$epsilon" ; 
porosityF #calc"3.5*(1-$epsilon)/$Dp/$epsilon/$epsilon/$epsilon";

