#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

static int __init   init_driver(void)
{
  printk(KERN_INFO "file_trigger: Loaded module.\n");
  return 0;
}

static void __exit exit_driver(void)
{
  printk(KERN_INFO "file_trigger: Unloaded module.\n");
}

module_init(init_driver);
module_exit(exit_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("nuts");
