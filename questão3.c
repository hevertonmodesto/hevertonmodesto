  p = i; 		// Ilegal
	q = &j;	
	p = &*&i;
	i = (*&)j;	// Ilegal
	i = *&j;
	i = *&*&j;
	q = *p;		// Ilegal
	i = (*p)++ + *q;
