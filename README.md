# SFML Template

## Install

### Debian/Ubuntu

You have to install the library with all its components on your system.

On a Debian/Ubuntu machine you can simply do so by running the following command:
```sh
sudo apt-get install libsfml-dev
```
This will install `libsfml-audio2.5`, `libsfml-graphics2.5`, `libsfml-network2.5`, `libsfml-system2.5` and `libsfml-window2.5`.

If you also want SFML documentation you can install it by running:
```sh
sudo apt-get install libsfml-doc
```

And you are good to go, CMake should be able to find SFML in one of the following directories:

- ${SFML_ROOT}
- $ENV{SFML_ROOT}
- ~/Library/Frameworks
- /Library/Frameworks
- /usr/local
- /usr
- /sw
- /opt/local
- /opt/csw
- /opt

Note: if you want to install SFML to a custom directory, you can append `-DSFML_ROOT=path/to/sfml` to your cmake build command.
