#define cimg_display 0
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <mug.h>

#include <string>
using namespace std;

#include <CImg.h>
using namespace cimg_library;

CImg<unsigned char> canvas(SCREEN_WIDTH, SCREEN_HEIGHT, 1, 3, 0);

#define WARM 30
#define HOT  50

handle_t disp_handle;
handle_t battery_handle;

void clear_canvas()
{
  canvas.draw_rectangle(0, 0, 0,
                        SCREEN_WIDTH, SCREEN_HEIGHT, 0,
                        black);

}

void draw_data(int t, char *c)
{
  clear_canvas();
 
  char temp[5];

  sprintf(temp, "%d", t);
   
  canvas.draw_text(0, 0, temp, color_to_rgb(c), black);

  mug_disp_cimg(disp_handle, (cimg_handle_t)&canvas);
}

void on_battery(int percent, bool is_charge)
{
  printf("%d\n", percent);
  if(is_charge)
    draw_data(percent, "green");
  else
    draw_data(percent, "magenta");
}

int main(int argc, char** argv)
{
  disp_handle = mug_disp_init();
  battery_handle = mug_battery_init();

  mug_battery_on(battery_handle, on_battery, 1000);
  mug_run_battery_watcher(battery_handle);

  return 0;
}