# alby.cxxnuget


![](https://github.com/casaletto/alby.cxxnuget/workflows/.github/workflows/main.yml/badge.svg)



This repo just builds a very simple C++ static library, versions it, and packages it, using github actions and github nuget packages.


It will be consumed by another C++ repo that I will soon write.


The only useful function of this library is myclass::version()


```
#include <alby.mylibrary/alby.myclass.h>

std::cout << alby::mylibrary::myclass::version() << "\n" ;
```


Command line build


```
msbuild sln1\build1.proj /t:clean,version,build,pack,source,push "/p:Version=a.b.c" "/p:SourceKey=xxx" "/p:SourceUser=xxx"
```
