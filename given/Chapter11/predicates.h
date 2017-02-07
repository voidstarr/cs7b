class IsEven
{
public:
	bool operator()(int x)
	{
		return x % 2 == 0;
	}
};

class LessThan
{
public:
	bool operator()(int x, int y)
	{
	  return x < y;
	}
};
