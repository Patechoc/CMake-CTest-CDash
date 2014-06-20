Just test the current source with:
- setup and instruction for the DASHBOARD >>> http://www.cmake.org/Wiki/CMake/Git/Dashboard
-    ... example/infos script: https://www.mail-archive.com/cmake-commits@cmake.org/msg00012.html
-    ... cron job... >>> http://techbase.kde.org/Development/CMake/DashboardBuilds

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

### TESTING and PUBLISHING ON DASHBOARD (download at the root the )
###  ---- register an account on http://my.cdash.org/
###  ---- create a new project (just need a name, e.g. "Patrick Merlot")
###  ---- then go the project page e.g. http://my.cdash.org/index.php?project=Patrick+Merlot
###  ---- click on "Project" in "Settings" tab and Download the CTestConfig.cmake script from the tab "Miscellanous"
ctest -D Experimental
ctest -D Experimental -R Comp  ## subset of the tests
###  ---- check results here >>> http://my.cdash.org/index.php?project=Patrick+Merlot
