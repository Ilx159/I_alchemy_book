#include "gio/gio.h"
#include "glib-object.h"
#include "glib.h"
#include <gtk/gtk.h>

static void activate(GtkApplication* app, gpointer user_data){

  GtkWidget *win;
  win = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(win), "I_alchemy_book");
  gtk_window_set_default_size(GTK_WINDOW(win), 800, 600);
  gtk_widget_show_all(win);
}

int main(int argc, char **argv){

  GtkApplication *app;
  int status;

  app = gtk_application_new("org.ilx.alchemy_book", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
  status = g_application_run(G_APPLICATION(app), argc, argv); 
  g_object_unref(app);

  return status;
}
