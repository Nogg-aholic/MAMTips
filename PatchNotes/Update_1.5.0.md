SML3.7/server support. Also able to run as a client side only mod. Bugfixes.




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- Mod can now run as a client-side only mod*
  - *The server must currently still have SML installed, this may change in the future (work must be done on the SML side)
  - A server side version is still published, although the mod doesn't currently do anything server side, so as to not confuse other server-side-required mods that may depend on this mod

## Bugfixes

- MAM tree progress information should now appear again for base game trees
- Clients now get accurate info on what mod added a schematic (instead of no info)
  - Mod content registry doesn't have entries on the client side, so I'm using a workaround for now
- Fixed that the tree zoom slider inside the MAM was ignored in favor of your mod config setting for zoom level
