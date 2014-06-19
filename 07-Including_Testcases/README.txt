Just test the current source with:

> mkdir myBuild
> cd myBuild
> cmake .. (TO SPECIFY THE SOURCE DIRECTORY TO BE THE PARENT DIRECTORY)
> cmake -DCMAKE_INSTALL_PREFIX="../myInstallation" .. (TO INSTALL IN A SPECIFIC DIRECTORY WITH THE SOURCE IN THE PARENT DIRECTORY)
> make
> make VERBOSE=1 (TO SEE ALL STEPS PRINTED TO SCREEN)
> make install
> ./Tutorial 45 (FROM THE BUILD DIRECTORY)
> ../myInstallation/Tutorial 45 (FROM THE INSTALL DIRECTORY)

> ctest (RUNS ALL TESTS PRESENT)
