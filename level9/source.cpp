int main(int argc, const char **argv, const char **envp)
{
  N *v3;
  N *v4;
  N *v6;

  if ( argc <= 1 )
    _exit(1);
  v3 = (N *)operator new(108);
  N::N(v3, 5);
  v6 = v3;
  v4 = (N *)operator new(108);
  N::N(v4, 6);
  N::setAnnotation(v6, (char *)argv[1]);
  return (**(int (N *, N *))v4)(v4, v6);
}

N::N(N *this, int a2)
{
  *this = off_8048848;
  *(this + 26) = a2;
}

void* N::setAnnotation(N *this, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return memcpy((char *)this + 4, s, v2);
}

int N::operator+(int a1, int a2)
{
  return *(_DWORD *)(a1 + 104) + *(_DWORD *)(a2 + 104);
}

int N::operator-(int a1, int a2)
{
  return *(_DWORD *)(a1 + 104) - *(_DWORD *)(a2 + 104);
}