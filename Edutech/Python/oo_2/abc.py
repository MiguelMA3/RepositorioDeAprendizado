from abc import ABC #abstract base classes

from collections.abc import MutableSequence

class Playlist(MutableSequence):
    pass

filmes = Playlist()