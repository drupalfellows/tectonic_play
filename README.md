Drupal Academy / Fellowship Install Profile
==========================================

Profile Installation Instructions:
==================================

Prerequisites: 
-------------

1. You should have drush and git setup on your computer as well as some server software to host your site (MAMP, LAMP, WAMP)

2. You should have access to some sort of command line/shell so you can type in the commands necessary to get this up and running

Steps to Install:
----------------

Step 1: You will navigating to your basic http directory and install the drupal core files. You can do this by executing the following drush command:

<pre>
drush dl drupal
</pre>

This will install the drupal core files into a folder called drupal-7.xx.  If you want to rename this folder you can run the command:

<pre>
mv drupal-7.xx mydrupal
</pre>

Step 2: Next up we will want to add the profile for our site.  This will involve cloning the repository containing our files into the appropriate place. Navigate to the profiles directory and clone the git repository:

<pre>
../mydrupal/profiles>git clone url_to_repository
</pre>

This will create a folder with the machine name of your install profile in your profiles folder.  This will be the root directory where most of your work on the website will go.

Step 3: The next step will be to create the mysql database for the site if you haven't already.  You can do this using phpmyadmin or you can use the following commands.
<pre>
mysqladmin -u USER -pPASSWORD create DBNAME;
</pre>


Troubleshooting:
---------------

There could be some issues if you haven't create a user for yourself in mysql with the appropriate privileges.  If that is the case, you can create a new user with mysql superpowers using the following command. (you will need to be logged into mysql using the root user)
<pre>
CREATE USER 'user'@'localhost' IDENTIFIED by 'password';
GRANT ALL PRIVILEGES ON *.* TO 'user'@'localhost' WITH GRANT OPTION;
</pre>

you probably won't need to do that though.

Step 4: At this point you should have the repository cloned and the files in your /profiles/projectname/ directory, you should have a mysql database setup and you should have the drupal core files installed.  You should now run the rebuild.sh script which will install the modules specified in the install profile.
<pre>
../mydrupal/profiles/projectname>./rebuild.sh
</pre>


Troubleshooting:
---------------

There could be a few issues when running this.  One is if you do not have execute permissions on rebuild.sh.  You can fix this with the command 
<pre>
chmod u+x rebuild.sh
</pre>

Another would be if somehow you don't have access to write in your drush cache directories. you would locate your .drush directory (often times it will be a hidden directory in your home directory and either change the owner or set the permissions to be able to write in those cache directories

Step 5: To install drupal, you will need a few folders and files to be writeable by the server,  you would go to the mydrupal/sites/default folder and run the following commands:
<pre>
cp default.settings.php settings.php
mkdir files
chmod g+w settings.php
chmod g+w files
chmod g+w ../default
</pre>

You are now ready to install your profile.  You should doublecheck you've done the following things:
* downloaded drupal core
* cloned the git repo for your profile into /profiles
* create a database for your site
* created a settings.php file, a files directory and changed permissions on the necessary files and folders to be able to run the install.
* run the rebuild.sh script and confirmed that it downloaded the modules it was supposed to.

Step 6: You navigate to the url of your drupal install and run install.php.  One of the options should be your install profile.  select that one and give drupal all the info it wants during the process.

Git Workflow
=============

Creating and committing a branch
--------------------------------

When committing changes to the repository, you will first give yourself a local branch specific to the task you are working on.  If you are using an issue tracker, it is customary to include the Issue Id in the name of the branch so that people can find the issue that relates to your branch.  Suppose we wanted to edit this README.md file and append some additional instructions to it.  We begin by creating a branch to work on:
<pre>
/profiles/projectname>git checkout -b 01-adding-blah-to-readme
Switched to a new branch '01-adding-blah-to-readme'
</pre>

You will now edit the README.md file and save your changes.  You can run
<pre>
git status
</pre>
to see that git has noticed that you changed that file.  You should now add the file so that the changes will be added when you commit them.
<pre>
git add README.md
</pre>
You can now commit the changes and you should add a message indicating what you did
<pre>
git commit -m"Added extra git workflow steps to the README.md"
</pre>
You now need to push the changes back to the remote repository.  If your branch does not exist there, simply doing git push may not work.  You should run the command:
<pre>
git push -u origin 01-adding-blah-to-readme
</pre>
Your remote repository should now have your branch and whomever is in charge of merging should take over from there.

Merging the changes
-------------------

To merge the changes, you would first inspect the difference between the current branch and the new branch.
<pre>
git fetch origin
git checkout master
git diff 01-adding-blah-to-readme
</pre>

Once you are satisfied everything is alright
<pre>
git merge 01-adding-blah-to-readme
git push
</pre>


Features
========

Features allows us to take information that would normally be stored in the database and move it into code.  This is very useful especially for things like version control.  As an example of how to use features, we will create a content type and then export it to a module and add it to our repository.


Creating a Content Type
-----------------------

Navigate to your new drupal site.  Provided you are logged in, you will have a menu at the top.  Go to Structure>Content Types and Add a new content Type.  Configure your content type and add any fields that are required.  We will assume the content is an Event and the feature will have the machine name event_feature.

Creating a Feature
------------------

Once that is done, go to Structure>Features and add a new Feature.  You will be able to select the new Event content type you just created.  You can then download the event_feature tar ball. this will include a module that will tell drupal to add your content type when it is enabled on a site.


Adding the Feature to a local branch in your git repo.
------------------------------------------------------

Create a new branch on your local git repository called "02-added-event-feature".  make sure that branch is checked out and then untar the features file you downloaded and copy it to your module directory in /profiles/projectname/modules/features/.  you should now have a directory called /profiles/projectname/modules/features/event_feature/  which contains the module files for your event content type.

Doing a git status will show a new feature directory.  Run the git add command to add your directory
<pre>
git add modules/features
</pre>
or 
<pre>
git add modules/features/event_features
</pre>


Editing the Profile projectname.install file to include your feature
--------------------------------------------------------------------

Navigate to the projectname.install and inside you will see a list of modules to be enabled when the profile is installed.  You can add your feature there under the //Features section
'event_feature',

The insides of the .install file will look like this:
<pre>
...
// Enable modules
$module_enable(array(
 //Contrib
 'update',
 ...
 //Custom modules.
 custom_config,
 //Features.
 ...
</pre>

You should add it so that the file looks like:

<pre>
...
// Enable modules
$module_enable(array(
 //Contrib
 'update',
 ...
 //Custom modules.
 custom_config,
 //Features.
 'event_feature',
 ...
</pre>



Save your changes. If you now do a git status you will see that you've modified the .install file.  Do a "git add" command to add this file and now commit all your changes
<pre>
git commit -m"added event-feature to the profile which creates an event content type"
git push -u origin 02-added-event-feature
</pre>

Your new feature should now be in a branch on the remote repository, ready to be merged.
















