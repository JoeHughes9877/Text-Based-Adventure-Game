#ifndef ITEMS_H
#define ITEMS_H

typedef void (*func_ptr)(void);

typedef struct {
  const char *name;
  const char *type;
  const int value;
  func_ptr func;
} FunctionMap;

// Function declarations
void use_iron_longsword();
void use_iron_greatsword();
void use_shiv();
void use_iron_dagger();
void use_rusty_sword();
void use_steel_mace();

void equip_leather_cuirass();
void equip_fine_steel_helmet();
void equip_prisoners_ragged_trousers();
void equip_leather_boots();
void equip_imperial_guard_shield();
void equip_studded_leather_armor();
void equip_wooden_shield();

void drink_potion_of_healing();
void drink_minor_healing_potion();
void drink_grand_healing_potion();
void drink_mana_potion();
void apply_poison_of_weakness();
void eat_sweetroll();
void eat_moldy_bread();
void use_welkynd_stone();

void use_lockpick();
void use_master_lockpick();
void use_torch();
void use_rusty_shovel();
void use_spyglass();
void use_bear_trap();

void read_scroll_of_fireball();
void read_scroll_of_ice_storm();
void read_scroll_of_fire_storm();
void read_scroll_of_lightning_bolt();
void read_scroll_of_healing_hands();
void read_scroll_of_detect_life();

void examine_rusty_key();
void examine_journal_entry();
void examine_old_map_fragment();
void examine_worn_leather_map();

void pick_up_gold_coin();
void pick_up_bag_of_gold_small();
void pick_up_bag_of_gold_large();
void pick_up_ancient_coin();

void wear_silver_ring();
void wear_enchanted_amulet();

void read_lockpicking_guide();

void interact_waterlogged_book();
void interact_empty_wine_bottle();
void interact_glowing_mushroom();
void interact_broken_lantern();
void interact_lucky_rabbits_foot();
void use_item(char *item_name);

extern FunctionMap function_map[];

#endif