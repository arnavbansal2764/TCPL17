    #include<stdio.h>
    void Move(char source, char target)
    {
        printf("%c->%c\n",source, target);
    }
    void Hanoi(int n, char source, char help, char target)
    {
        if(n == 1)
	    Move(source, target);
	else
	{
	    Hanoi(n - 1, source, target, help);
	    Move(source, target);
	    Hanoi(n - 1, help, source, target);
	}
    }
    int main()
    {
        Hanoi(2, 'A', 'B', 'C');
	return 0;
    }
