#include "glib-object.h"
#include "glib.h"
#include <gtk/gtk.h>
#include <stdio.h>

int main(int argc, char *argv[]){

  GtkBuilder *builder = gtk_builder_new();
  GObject *Window, *Grid, *Options_Grid, *Program_Name, *Search_Entry, *Tag_List_Scroll, *Tag_List, *Exit_Button, *Book_Page1, *Book_Page2;
  GError *error = NULL;


  gtk_init(&argc, &argv);
  if(gtk_builder_add_from_file(builder, "interface.ui", &error) == 0){

    g_printerr("Error loading file: %s\n", error->message);
    g_clear_error(&error);
    return 1;
  }

  Window = gtk_builder_get_object(builder, "Window");
  g_signal_connect(Window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  Grid = gtk_builder_get_object(builder, "Grid");
  
  Options_Grid = gtk_builder_get_object(builder, "Option_Grid");
  
  Program_Name = gtk_builder_get_object(builder, "Program_Name");
  
  Search_Entry = gtk_builder_get_object(builder, "Search_Entry");
  
  Tag_List_Scroll= gtk_builder_get_object(builder, "Tag_List_Scroll");
  
  Tag_List = gtk_builder_get_object(builder, "Tag_List");
  
  Exit_Button = gtk_builder_get_object(builder, "Exit_Button");
  g_signal_connect(Exit_Button, "clicked", G_CALLBACK(gtk_main_quit), NULL);

  Book_Page1 = gtk_builder_get_object(builder, "Book_Page1");
  
  Book_Page2 = gtk_builder_get_object(builder, "Book_Page2");

  gtk_widget_show_all(GTK_WIDGET(Window));

  gtk_main();


  return 0;
}
