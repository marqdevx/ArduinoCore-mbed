#include "Portenta_LittleVGL.h"
#include "lv_demo_widgets.h"

void setup() {
  // put your setup code here, to run once:
  portenta_init_video();

  /*Hell world label*/
  //lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
  //lv_label_set_text(label, "Hello Arduino! 8,0,2");
  //lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);

  lv_demo_widgets();
  
}

void loop() {
  lv_timer_handler();
}
