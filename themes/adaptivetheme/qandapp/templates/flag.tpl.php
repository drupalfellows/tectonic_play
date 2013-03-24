<?php

/**
 * @file
 * Default theme implementation to display a flag link, and a message after the action
 * is carried out.
 *
 * Available variables:
 *
 * - $flag: The flag object itself. You will only need to use it when the
 *   following variables don't suffice.
 * - $flag_name_css: The flag name, with all "_" replaced with "-". For use in 'class'
 *   attributes.
 * - $flag_classes: A space-separated list of CSS classes that should be applied to the link.
 *
 * - $action: The action the link is about to carry out, either "flag" or "unflag".
 * - $status: The status of the item; either "flagged" or "unflagged".
 *
 * - $link_href: The URL for the flag link.
 * - $link_text: The text to show for the link.
 * - $link_title: The title attribute for the link.
 *
 * - $message_text: The long message to show after a flag action has been carried out.
 * - $after_flagging: This template is called for the link both before and after being
 *   flagged. If displaying to the user immediately after flagging, this value
 *   will be boolean TRUE. This is usually used in conjunction with immedate
 *   JavaScript-based toggling of flags.
 *
 * NOTE: This template spaces out the <span> tags for clarity only. When doing some
 * advanced theming you may have to remove all the whitespace.

 */
if ($action == 'flag'){$img_src = 'images/thumbsup_white.png';}
if ($action == 'unflag'){$img_src = 'images/thumbsup_orange.png';}
?>
<span class="<?php print $flag_wrapper_classes; ?>">
  <?php if ($link_href): ?>
    <a href="<?php print $link_href; ?>" title="<?php print $link_title; ?>" class="<?php print $flag_classes ?>" rel="nofollow"><img src="<?php print base_path().path_to_theme().'/'.$img_src ?>" /></a><br /><?php print $link_text; ?><span class="flag-throbber"></span>


  <?php else: ?>
<span class="<?php print $flag_classes ?>"><img src="<?php print base_path().path_to_theme().'/'.$img_src ?>" /><br /><?php print $link_text; ?></span>
  <?php endif; ?>

</span>
  <?php if ($after_flagging): ?>
    <span class="flag-message flag-<?php print $status; ?>-message">
      <?php print $message_text; ?>
    </span>
  <?php endif; ?>
