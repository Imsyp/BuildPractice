int& RetuRefFunc(int n)
{
    int num =20;
    num+=n;
    return num;
}

int main(void)
{
    int &ref=RetuRefFunc(10);

    return 0;
}