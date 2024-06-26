
# cub3D

This project is inspired by the world-famous Wolfenstein 3D game, which
was the first FPS ever. This project enables us to explore ray-casting. The goal is to
make a dynamic view inside a maze, in which you’ll have to find your way.


## Installation

### Requirements

- MinilibX only support TrueColor visual type (8,15,16,24 or 32 bits depth)
- gcc
- make
- X11 include files (package xorg)
- XShm extension must be present (package libxext-dev)
- Utility functions from BSD systems - development files (package libbsd-dev)
  e.g. sudo apt-get install gcc make xorg libxext-dev libbsd-dev (Debian/Ubuntu)

Install cub3D with makefile :
```bash
  git clone https://github.com/MPIT0T/cub3d.git
  cd cub3d
  make
```


Run it :
```bash
./cub3D maps/<desired_map>.cub
```

Generate a map :
```bash
./gen <map_name> <map_width> <map_height> <player_dir> <player_x> <player_y>
```

## Controls
- `W` `A` `S` `D` move around
- `right` `left` look around
- `mouse` look around
- `tab` toggle pause mode

## Screenshots

![start_hall](https://github.com/MPIT0T/cub3d/assets/118504616/42f0920f-bb6c-4eec-a1a2-d51948cd1d01)
![phantom](https://github.com/MPIT0T/cub3d/assets/118504616/1fa36d12-669c-416f-8c94-763d10568e18)
![corridor](https://github.com/MPIT0T/cub3d/assets/118504616/d4fd3396-16ba-4d57-9ad1-264d70377e01)

## Ressources

- [MiniLibX](https://github.com/42Paris/minilibx-linux)
- [Raycasting explanation](https://lodev.org/cgtutor/raycasting.html)

## Authors

- [@mpitot](https://github.com/MPIT0T)
- [@cefuente](https://github.com/cesarfue)

