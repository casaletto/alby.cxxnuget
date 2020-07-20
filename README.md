# alby.cxxnuget


![](https://github.com/casaletto/alby.cxxnuget/workflows/.github/workflows/main.yml/badge.svg)



msbuild sln1\build1.proj /t:clean,version,build,pack,push /p:Version=1.2.3
msbuild sln2\build2.proj /t:clean,source,restore,update,build,test

msbuild sln2\build2.proj /t:clean,source,update,build,test
