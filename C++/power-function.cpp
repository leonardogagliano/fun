int power(int base, int exp)
	{
	
	if(base==1) //as 1 always return 1 when raised to any expoent, this exception makes the function more efficient because avoids all the multiplication if the base is 1.
		return 1;
	
	int res=1; //if the expoent is 0, the loop will not occur and the return will be 1.
	
	
	for(int i=0; i<exp; i++ & exp!=0) //if the expoent is 0, the condition 'exp!=0' prevents the loop to occur, making the function more efficient.
	{ 
		res=res*base;
	}
	
	return res;
}
	
