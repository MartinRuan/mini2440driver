#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/cdev.h>

#define BUF_SIZE    (512 * 1024)

#define DMA0_BASE_ADDR  (0x4b000000)
#define DMA1_BASE_ADDR  (0x4b000040)
#define DMA2_BASE_ADDR  (0x4b000080)
#define DMA3_BASE_ADDR  (0x4b0000c0)

typedef struct s3c_dma_regs {
    unsigned long disrc;
    unsigned long disrcc;
    unsigned long didst;
    unsigned long didstc;
    unsigned long dcon;
    unsigned long dstat;
    unsigned long dcsrc;
    unsigned long dcdst;
    unsigned long dmasktrig;
} s3c_dma_regs_t;

static s3c_dma_regs_t s3c_dma_regs_t *g_s3c_dma_regs;

int s3c2440_dma_ioctl(struct inode *inode, struct file *filp, 
    unsigned int cmd, unsigned long arg)
{
    return 0;
}

static struct file_operations s3c2440_dma_ops {

};

static int __init s3c2440_dma_init(void)
{

}

static void __exit s3c2440_dma_exit(void)
{
	
}

module_init(s3c2440_dma_init);
module_exit(s3c2440_dma_exit);
MODULE_LICENSE("GPL");

