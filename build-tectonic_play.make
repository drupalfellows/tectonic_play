;
; @file
; A makefile to build a new site with this installation profile when the new
; site's webroot is elsewhere.
;

api = 2
core = 7.x

; Downloads core.
includes[] = drupal-org-core.make

; Downloads this installation profile into the new site.
projects[tectonic_play][type] = profile
projects[tectonic_play][download][type] = git
projects[tectonic_play][download][url] = git@github.com:drupalfellows/tectonic_play.git
projects[tectonic_play][download][branch] = master
