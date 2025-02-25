int gcd(int u, int v)
{
	if (v == 0) return u;
	return gcd(v, u % v);
}

int main()
{
	return gcd(18, 72);
}
