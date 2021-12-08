#include <zmk/display/widgets/output_status.h>
#include <zmk/display/widgets/battery_status.h>
#include <zmk/display/widgets/layer_status.h>
#include <zmk/display/widgets/wpm_status.h>
#include <zmk/display/status_screen.h>


LV_IMG_DECLARE(chiffre_logo);

lv_style_t global_style;


lv_obj_t *zmk_display_status_screen(){
  lv_obj_t *screen;

  screen = lv_obj_create(NULL, NULL); 

  lv_obj_t * chiffre_icon;
  chiffre_icon = lv_img_create(screen, NULL);
  lv_img_set_src(chiffre_icon, &chiffre_logo);

  lv_obj_align(tipperlogo_icon, NULL, LV_ALIGN_IN_TOP_MID, 0,0);

  return screen;
}


