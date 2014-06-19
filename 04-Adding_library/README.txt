Just test the current source with:

> mkdir myBuild
> cd myBuild
> cmake .. (TO SPECIFY THE SOURCE DIRECTORY TO BE THE PARENT DIRECTORY)
> make
> make VERBOSE=1 (TO SEE ALL STEPS PRINTED TO SCREEN)
> make install (NOT POSSIBLE AT THAT STAGE, CHECK IN THE BUILD DIRECTORY FOR EXECUTABLES)
> ./Tutorial 45
