import webbrowser

# Constants
URL = "https://www.youtube.com/"
MAXWIN = 3
MAXTAB = 3


# Functio to open multyple tabs
def open_tab():
    win = 0
    tab = 0
    while (win<MAXWIN):
        webbrowser.open(URL, new=1, autoraise=True)
        while (tab<MAXTAB):
            webbrowser.open(URL, new=0, autoraise=True)
            tab+=1
        tab = 0
        win+=1


if __name__ == "__main__":
    open_tab()