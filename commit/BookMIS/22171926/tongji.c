 #include "hehe.h"
 void tongji ()
 {
    int count = 0;
    book* p = duqu ();
	book* p1 = duqu ();
	book* f1 = duqu ();
	book* p2, *f2;
	book* p3, *f3;		
    while (p != NULL)
    { 
        count++;
        p = p -> next;
    }
    printf ("图书总数为%d\n", count);
	p3 = p1 -> next;
	while (p3 != NULL && p1 != NULL)
	{
		if (p1 -> price < p3 -> price)
		{   
			p2 = p3;
			p1 = p1 -> next;
		}
		else
		{
			p2 = p1;
			p3 = p3 -> next;			
		}
	}
	printf ("价格最贵为%lf   书名:%s\n", p2 -> price, p2 -> name); 
	f3 = f1 -> next;
	while (f3 != NULL && f1 != NULL)
	{
		if (f1 -> price > f3 -> price)
		{   
			f2 = f3;
			f1 = f1 -> next;
		}   
		else
		{
			f2 = f1;
			f3 = f3 -> next;
		}   
	}   
	printf ("价格最低为%lf   书名:%s\n", f2 -> price, f2 -> name);
	book* head = duqu (); 
	book* h = duqu ();
	int c = 0;
	while (head != NULL)
	{
		book* shell = head -> next;		
		while (shell != NULL)
		{
			if (strcmp(head -> writer,shell -> writer) != 0)
				shell = shell -> next;
			else
			{
				c++;
				break;
			}
		}
		head = head -> next;
	}
	printf ("作者数为:%d", count - c);
 }
