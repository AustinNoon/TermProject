# How to Setup a Jupyter-book Yourself

## Steps

1. First navigate to your repository in your terminal and make sure you have python installed. 

2. Install jupyter-book using: pip install jupyter-book

3. Create a template book using: jupyter-book create <book_name>

4. Move path into the book with: cd <book_name>

5. Edit the _config.yml to link to your repository. Edit the _toc.yml to different files in the repository that will appear in the table of contents.

6. Build the book using: jupyter-book build .

7. Lastly, make sure to add the _build directory to .gitignore so that you don't commit a ton of file changes/commits from the build. Do this using: echo "_build/" >> .gitignore

8. Enjoy your new Jupyter-book!