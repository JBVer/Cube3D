<h1 align="center">
	🚀 Cube3D
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/JBVer/Cube3D?color=lightblue" />
	<img alt="Number of lines of code" src="https://tokei.rs/b1/github/JBVer/Cube3D?category=code" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/JBVer/Cube3D?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/JBVer/Cube3D?color=green" />
</p>

## 💡 About the project
* Inspired by the groundbreaking game Wolfenstein 3D (1992), this project delves into ray-casting and 3D graphics using the MiniLibX library.

## MiniLibX installation
This project utilizes the MiniLibX library through the Metal framework (macOS 10.13+)

Linux users must:
```shell
# Update/upgrade your system
apt-get update && apt-get upgrade

# Install the following packages
apt install libx11-dev
apt install libxext-dev
apt install libbsd-dev
apt install clang
```

Windows users can follow [this guide.](https://github.com/ilkou/minilibx)
(WSL users should consider using WSL2)

## Usage
```shell
# Within Project dir; Compile
make

# Execute the binary with a .cub file
./cub3D /path/to/map.cub
./cub3D input/maps/map1.cub
./cub3D input/maps/map2.cub
```

## Navigation
Within the inc/cub3D.h file, modify the layout mode by commenting/uncommenting the QWERTY_LAYOUT macro. (QWERTY by default)
- Use the keys W, A, S and D to move around (ZQSD for azerty layout).
- Use the **left** and **right** arrow keys for camera control.

## Map configuration
Maps are defined using a simple configuration file. Here's an example format:
```shell
111111
100101
100E01
100001
111111
```
`1` represents walls, `0` the walkable path, and `E` denotes the begin position of the player and the starting view direction (`E`ast, `W`est, `N`orth & `S`outh).

 -- **Wall Textures**: Specify the textures for each side of the wall (North, South, West, East) using the following format:
- `NO ./input/sprites/texture1.xpm' - Texture for the North-facing wall.
- `SO ./input/sprites/texture2.xpm` - Texture for the South-facing wall.
- `WE ./input/sprites/texture3.xpm` - Texture for the West-facing wall.
- `EA ./input/sprites/texture4.xpm` - Texture for the East-facing wall.  

 -- **Floor and Ceiling Colors**: Define the RGB color values for the floor and ceiling:
- `F 220,100,0`
- `C 225,30,0`

## Screenshot
![image](https://github.com/JBVer/Cube3D/assets/50697943/97d61b53-ae75-4115-9ab0-8b1b4e30e660)


