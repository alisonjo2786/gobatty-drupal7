# gobatty-drupal7

Code repo for my site, **[Go Batty! -- or Hear Hear!](http://dev-hearhear.pantheonsite.io/)**. (Yes I thought of two differnt names, and decided, it's my project, I don't have to decide, SO THERE.)

Created at [Hack Upstate XI](http://hackupstate.com/events/xi/index.html), hosted for free on [Pantheon](https://pantheon.io/)!

## What's inside

This site uses Drupal 7, HTML5 (audio), [media_recorder module](https://www.drupal.org/project/media_recorder) (+ the libraies it requires), and a DS custom code field.  (I bundled + codified the site functionality using [Features](http://drupal.org/project/features) and [Strongarm](https://www.drupal.org/project/strongarm).)

> D7 because media_recorder hasn't been ported to D8 -- and let's be honest, the chances that something will _just work_ are a whole heck of a lot better in D7.  (Oh yes I did.)

### DIY
You should be able to spin up your own copy of this site with the contents of this repo.  Caveats:
* There's Pantheon-specific stuff you'll need to cull, unless you spin up your site in Pantheon (which you can do for free!) -- **or** unless you set it up locally.
* The logo image is separate, b/c that's how themes + Drupal work OOTB.  But don't worry, I got you covered -- you can can grab the logo image from this issue and put it right in the theme on your site (`http://yoursite.you/admin/appearance/settings/bartik#edit-logo`). (FYI all y'all non-Drupalers: This is quite doable via code with a tiny and simple custom module, I just didn't bother.)
