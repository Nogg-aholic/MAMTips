Satiafactory 1.0 support. Now capable of running client-only, even when playing on vanilla servers.




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- Capable of running even when the server is missing the mod (under SML 3.9 behavior), including when you are playing with the mod (and SML) on a vanilla server
- Gave the HUB debugging cheat buttons press/hover animations

## Changed Stuff

- Now uses the base game's system for adding schematics to the To-Do list
  - Restyled the To-Do list button in the HUB and made it able to remove from the To-Do list as well
  - Replaced the custom To-Do list button in the MAM with vanilla's
- Updated the "mod icon" used for Satisfactory content to match SML 3.9's
- Made the "see info panel" message made thinner in 1.6.0 slightly wider to accommodate SF1.0's larger buttons
- Made the zoom easter egg easier to discover 🇦🇺

## Fixed Stuff

- Fixed zoom functionality not updating when modified in the tree explorer (as opposed to the mod configs)
- Fixed (hopefully forever for real this time) the system that decided if a MAM tooltip should be flipped horizontally to avoid covering the right panel
- Fixed case where a broken mod icon could prevent tree progress from showing in the tree selection list
- Fixed a case where clients sometimes couldn't see research tree mod icons

## Known Bugs

- The to-do list button on the MAM's right side panel does not know if the node is already on the to-do list or not, meaning it will let you add the node multiple times
