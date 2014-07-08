Ubuntu official documentation on Cron jobs: https://help.ubuntu.com/community/CronHowto


GUI:
installation: sudo apt-get install gnome-schedule
launch it with: gnome-schedule


open the crontab file using this command:
> crontab -e

and in the crontab file, add such a line to run the "dailyScript.sh" every day at 11:00
00 11 * * * ~/Documents/CODE-DEV/CMake-CTest-CDash/10-README_CronJob/dailyScript.sh

check the results on my.cdash.org:
http://my.cdash.org/index.php?project=Patrick+Merlot
