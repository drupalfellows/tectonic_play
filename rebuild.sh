#!/bin/sh
# This file is only meant to be used after switching branches.
# It backups all the projects that were previously downloaded from the make file and then downloads again, in case something is new, removed or updated.
# The purpose of the backup is to make sure that we don't kill the user's dev environment in case of a broken internet connection or accidentally running of the script.

DIRS="modules/contrib themes/contrib libraries"
for d in $DIRS; do
  rm -Rf "$d.bak.tar.gz"
  mv $d "$d.bak"
  tar cvzf "$d.bak.tar.gz" "$d.bak"
  rm -Rf "$d.bak"
done
drush make --yes --working-copy --no-core --contrib-destination=. drupal-org.make

# TODO: Copy default.settings.php and append snippets again.
