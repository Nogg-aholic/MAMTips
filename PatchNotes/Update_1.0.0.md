Edit configs directly from the MAM! New tree zoom level control. Move hover tooltips to the left of the cursor so they don't overlap the info panel.




This update brought to you by Robb#6731

## New Stuff

- Configure the mod directly from inside of the MAM! No need to head out to the pause menu.
  - The 'Debugging Features' must still be enabled from the pause screen or main menu.
- Configure zoom level of the tree. You can zoom out to see more of the tree at once. Zooming in is not possible right now.
  - Press the magnifying glass button to reset to default zoom

    <video controls="" width="720" height="405">
    <source src="https://i.imgur.com/V1OrNlE.mp4" autoplay="" controls="" type="video/mp4">
    </video>

- Travel to the land down under by entering a zoom of -1.0

## Changed Stuff

- Node hover-tooltips are on the left of the node now when in the Info panel - no more overlapping what you're trying to read!

  ![ToolTipOnLeft](https://i.imgur.com/R7aKwWC.jpeg)

- The config preview widget now redraws upon config change instead of being on a timer - no more flashing config preview!
- Now on version `1.0.0` so other mods can list this as a dependency without the pain caused by `^` special behavior for major versions less than one
