See tree completion % directly in the list item, improved new user experience, some minor visual improvements and fixes.




This update brought to you by Robb#6731

I got the chance to conduct some usability testing involving this mod, and a few of these changes are a result of that.

## New Stuff

- There is now a discrete button in the MAM that explains how to configure the mod and can take you to the mod page
  - ![The Button](https://i.imgur.com/oItFyrD.png)
  - The first time you use the mod, a visual effect will draw attention to the button. This can be dismissed by hovering over the button for more than a second, and will never show again.
  - This was added to help users that installed this mod as a dependency (ex. for PowerSuit Modules) realize that it's there, and explain how to turn things off if they so choose.
- Configure how long the "completion wheel" takes to animate its fill. This shows up when hovering over a tree in the left side list. Base game takes 2 seconds but this mod defaults it to 0.5 seconds
- Preview of tree completion percentage as progress bar, percentage, or both in the tree list view.
  - Progress bar only is the default. It turns green for 100% and is yellow otherwise.
  - ![ProgressBar](https://i.imgur.com/bGmiyNe.png)
  - Progress bar and percentage option, has 0s to keep spacing consistent
  - ![PB + Percent](https://i.imgur.com/GkdLwRP.png)
  - Someone suggested this to me on the discord, but I can't seem to find the message in which they did. Thanks for the idea! If that person is you, dear reader, message me on Discord and I can edit this changelog to credit you.

## Tweaked Stuff

- Removed 'WIP' from the text of the add to to-do list button since this is realistically as working as it will probably ever be. Functionality unchanged.
- Reworded some of the descriptions of the config items
- No longer depends on custom C++ code to bind to widgets, but the code remains part of the mod since some other mods depend on it. It will be removed Eventually™

## Bugfixes

- Fix empty gray bar tooltip on unlocked nodes, now says "See Info panel to the right" instead of being completely empty.
  - ![See Panel](https://i.imgur.com/a4sWgNU.png)
- Probably more I forgot to list here
