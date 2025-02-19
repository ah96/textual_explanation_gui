/*
# MIT License

# Copyright (c) 2022 Kristopher Krasnosky

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
*/

#include <QApplication>
#include <QIcon>
#include "hello_gui.h"


int main(int argc, char *argv[])
{

  ros::init(argc, argv, "textual_explanation",ros::init_options::AnonymousName);
  QApplication a(argc, argv);

  HelloGui w;

  // set the window title as the node name
  //w.setWindowTitle(QString::fromStdString(ros::this_node::getName()));
  w.setWindowTitle(QString::fromStdString("Textual Explanations of a Robot Navigation"));

  // load the icon from our qrc file and set it as the application icon
  //QIcon icon(":/icons/my_gui_icon.png");
  //w.setWindowIcon(icon);

  w.show();
  return a.exec();
}
