

-- SUMMARY --

The Custom Config module is a module intended for use by developers who are using the "continuous integration" development strategy, as outlined in this post:
  http://drupal.org/node/1476014

The module aims to help this process via some of the following methods:
* Helper functions. If you're creating or updating blocks, running queries, or adding terms, Custom Config is there to help. We've got a small handful of hooks you can implement to do most of these setup tasks. Checkout custom_config.api.php to find out how to implement these.
* The addition of the ever exciting post-install phase. Block modifications, queries, and terms are all executed after the entire site is built. Using hook_init and a custom variable, the module is able to tell if this is the first time a page is being hit after installing. This is important if you need to ensure that features modules are installed and have properly setup their respective blocks, vocabularies, or some other requirement is met. Also, using hook_postinstall you can run any commands after ensuring that the entire site is installed and configured.
* A place for custom configuration. From time to time, a project requires a custom configuration form. The question eventually pops up, where does this page live? There's never a single good answer to this, custom_config tries to help by creating a menu item where custom configuration forms should live. Also, that page has two tabs by default "Run Install Hooks", and "Run Post Install" which simply serve as callbacks.
* A faster way to update. hook_update_N is a great place for database alters, or other larger tasks. In our workflow, however, we've been using hook_update_N to execute single lines, such as module_enable('some_module') or variable_set('some_var', 123). Nevermind the fact that this leads to install files being way larger and uglier than they should be, but it also adds time when running update or install. The system should not have to create a sandboxed version of itself just to enable a module or set a variable. "Run Install Hooks", and "Run Post Install" are introduced to replace the need for hook_update_N. This is how we were able to launch without a single update hook. In both the classic method and the new custom_config method, it's necessary sometimes to check if a block already exists, or if a variable contains a certain value. This has not changed. However, by hitting the "Run Install Hooks" or "Run Post Install" callback pages the module will use it's own custom_config_module_implements to find hooks and install files only from our custom or features modules. All other contrib install hooks are ignored.
* Drush integration. If your into drush, and I don't know why you wouldn't be, then you'll be happy to hear that both callbacks to run the install and post-install hooks are available as drush commands. drush cc-ri and drush cc-rpi


-- REQUIREMENTS --

This module works alongside the "continuous integration" strategy, and therefore is relying on a certain file structure. In particular, the path for custom and feature modules should be from drupal root:
  /profiles/project_name/modules/custom
  or
  /profiles/project_name/modules/features


-- INSTALLATION --

* Before using the module, you will need to modify a couple constants which can be found in the .module file. You'll need to edit the machine name of your project, the human readable name of the project, and the menu path for the custom configuration page.
  define('PROJECT_NAME', 'changeme');
  define('PROJECT_LABEL', 'Change Me');
  define('CUSTOM_CONFIG_ADMIN_PATH', 'admin/config/custom');

* After you've set this up, you can install as usual (by adding this module to your project's make file.)

-- USE --

* As a developer, you'll need to implement some hooks to take advantage of this module. You can refer to custom_config.api.php for more information on how to do this.

* As a site administrator, it's useful to know that the configuration page is where you could find configuration options which were created for this project. Also, that page has some local tasks which are useful, although these are also available as drush commands. The default path for the configuration page is in Administration È Configuration È Custom:

  - Run Install Hooks

    If you've added more functionality to an install hook and need a way to run the install hooks, then this is the callback for you. It will find any and all install hooks in your install profile, and the modules/custom and modules/features directories.

  - Run Post-Install Hooks

    If you've implemented any of the hooks to create a block or term, or the hook_queries hook, or the hook_postinstall hook, then this is the callback which will find them and execute them.

