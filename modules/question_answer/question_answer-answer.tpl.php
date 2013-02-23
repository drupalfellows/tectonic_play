<div class="question_answer-answer">
  <div class="question_answer-answer-content"><?php print $comment->comment_body['und'][0]['value'];?></div>
  <div class="question_answer-answer-author"><?php echo l(t('@date by @user', array('@date' => format_date($comment->changed), '@user' => $comment->name)), 'node/'. $node->nid, array('fragment' => 'comment-'.$comment->cid)); ?></div>
</div>
