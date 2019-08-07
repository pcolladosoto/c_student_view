# c_student_view
After learning about C I became deeply fond of it because it let you break free of the "chains" imposed by other programming languages. Through this book I will try to get C as close as possible to as many people as I possibly can.

## Compiling .tex files

### Getting a TeX distribution
This text has been built using the LaTeX typesetting system. You will need to install a LaTeX distribution in order to compile LaTeX (`.tex`) documents.

Our platform of choice is **Xubuntu 19.04** and we have decided to go with the `TeX Live` LaTeX distribution. In order to install it on machines running **Ubuntu** or one of its derivatives (like **Xubuntu**) you can just run `sudo apt install texlive-full`. This command may be worth a shot on ther distributions like **Elementary OS** as they often use **Ubuntu**'s repositories as well.

If the `texlive-full` is not within your distro's repository, or if you are running another OS like **Windows** or **macOS** you can just refer to [TeX Live's site](https://tug.org/texlive/). Please note that you will need the `minted` package in your distribution, as it is what we use to write code within the book. You can find more information about it [here](https://www.ctan.org/pkg/minted). The `texlive-full` package comes bundled with `minted`, so we don't need to worry about this when on an **Ubuntu**-based system. Yay :smile:.

### Meeting `minted`'s dependencies

In order to colorize the code `minted` uses `pygments`, a **Python** library. You will need to install it for `minted` to work. On an ubuntu system just run: `sudo apt install python-pip && sudo pip install pygments`. This command will install `pip`, a tool for downloading python libraries and then use `pip` to download `pygemnts`. You can find these commands (or similar ones) in `minted`'s own documentation [here](https://www.ctan.org/pkg/minted).

### Compiling

Assuming you installed the `texlive-full` package you only need to run this one-liner: `latex -shell-escape <filename.tex>`. Note that we need the `-shell-escape` flag due to the fact that `minted` needs to call `pygments`, who is on the "outside" world from the compiler's perspective. You should only use this flag with trusted documents, as this makes them potentially capable of running arbitrary commands on your machine... If you don't tust this repository I won't blame you. You can read the entire source code or just use our compiled **PDF**'s. They may not be eactly up to date though...

### But... where's the PDF?!

The LaTeX compiler won't output **PDF** files... What a bummer! The output will be given as **DVI** files. Luckily for us,  **TeX Live** has a program just for us. Just run: `dvipdf <filename.dvi>` and you will get a **PDF**. Cool, right?
