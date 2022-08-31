cmd_drivers/power/supply/modules.order := {   cat drivers/power/supply/axp/modules.order;   echo drivers/power/supply/rn5t618_power.ko; :; } | awk '!x[$$0]++' - > drivers/power/supply/modules.order
