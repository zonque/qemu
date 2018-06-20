/*
 * QEMU model of the CFU_APB CFU APB Registers
 *
 * Copyright (c) 2016 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2016-10-19.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register-dep.h"
#include "qemu/bitops.h"
#include "qemu/log.h"

#ifndef XILINX_CFU_APB_ERR_DEBUG
#define XILINX_CFU_APB_ERR_DEBUG 0
#endif

#define TYPE_XILINX_CFU_APB "xlnx,zynq3-cfu"

#define XILINX_CFU_APB(obj) \
     OBJECT_CHECK(CFU, (obj), TYPE_XILINX_CFU_APB)

DEP_REG32(CFU_ISR, 0x0)
    DEP_FIELD(CFU_ISR, CRC8_ERROR, 1, 2)
    DEP_FIELD(CFU_ISR, CFI_ERROR, 1, 1)
    DEP_FIELD(CFU_ISR, SEU_ERROR, 1, 0)
DEP_REG32(CFU_IMR, 0x4)
    DEP_FIELD(CFU_IMR, CRC8_ERROR, 1, 2)
    DEP_FIELD(CFU_IMR, CFI_ERROR, 1, 1)
    DEP_FIELD(CFU_IMR, SEU_ERROR, 1, 0)
DEP_REG32(CFU_IER, 0x8)
    DEP_FIELD(CFU_IER, CRC8_ERROR, 1, 2)
    DEP_FIELD(CFU_IER, CFI_ERROR, 1, 1)
    DEP_FIELD(CFU_IER, SEU_ERROR, 1, 0)
DEP_REG32(CFU_IDR, 0xc)
    DEP_FIELD(CFU_IDR, CRC8_ERROR, 1, 2)
    DEP_FIELD(CFU_IDR, CFI_ERROR, 1, 1)
    DEP_FIELD(CFU_IDR, SEU_ERROR, 1, 0)
DEP_REG32(CFU_PROTECT, 0x10)
    DEP_FIELD(CFU_PROTECT, ACTIVE, 1, 0)
DEP_REG32(CFU_GLOBAL, 0x14)
    DEP_FIELD(CFU_GLOBAL, GPWRDWN, 1, 10)
    DEP_FIELD(CFU_GLOBAL, GCAP, 1, 9)
    DEP_FIELD(CFU_GLOBAL, GSCWE, 1, 8)
    DEP_FIELD(CFU_GLOBAL, GHIGH_B, 1, 7)
    DEP_FIELD(CFU_GLOBAL, GMC_B, 1, 6)
    DEP_FIELD(CFU_GLOBAL, GWE, 1, 5)
    DEP_FIELD(CFU_GLOBAL, GRESTORE, 1, 4)
    DEP_FIELD(CFU_GLOBAL, GTS_CFG_B, 1, 3)
    DEP_FIELD(CFU_GLOBAL, GLUTMASK, 1, 2)
    DEP_FIELD(CFU_GLOBAL, EN_GLOB, 1, 1)
    DEP_FIELD(CFU_GLOBAL, GSCAN_START, 1, 0)
DEP_REG32(CFU_CTL, 0x18)
    DEP_FIELD(CFU_CTL, QWORD_CNT_RESET, 1, 4)
    DEP_FIELD(CFU_CTL, CRC8_DISABLE, 1, 3)
    DEP_FIELD(CFU_CTL, DECOMPRESS, 1, 2)
    DEP_FIELD(CFU_CTL, SEU_GO, 1, 1)
    DEP_FIELD(CFU_CTL, CFI_LOCAL_RESET, 1, 0)
DEP_REG32(CFU_STATUS, 0x1c)
    DEP_FIELD(CFU_STATUS, CRC8_ERROR, 1, 9)
    DEP_FIELD(CFU_STATUS, CFI_CFRAME_BUSY, 1, 8)
    DEP_FIELD(CFU_STATUS, CFI_ERROR, 1, 7)
    DEP_FIELD(CFU_STATUS, CFI_SEU_CRC_ERROR, 1, 6)
    DEP_FIELD(CFU_STATUS, CFI_SEU_ECC_ERROR, 1, 5)
    DEP_FIELD(CFU_STATUS, CFI_SEU_HEARTBEAT, 1, 4)
    DEP_FIELD(CFU_STATUS, BITSTREAM_CRC_ERR, 1, 3)
    DEP_FIELD(CFU_STATUS, GHIGH_B_LAST, 1, 2)
    DEP_FIELD(CFU_STATUS, GMC_B_LAST, 1, 1)
    DEP_FIELD(CFU_STATUS, GPWRDWN_B_LAST, 1, 0)
DEP_REG32(CFU_CRAM_RW, 0x20)
    DEP_FIELD(CFU_CRAM_RW, RD_WAVE_CNT_LEFT, 6, 12)
    DEP_FIELD(CFU_CRAM_RW, RD_WAVE_CNT, 6, 6)
    DEP_FIELD(CFU_CRAM_RW, WR_WAVE_CNT, 6, 0)
DEP_REG32(CFU_CRAM_SWITCH, 0x24)
    DEP_FIELD(CFU_CRAM_SWITCH, ROW_DELAY, 10, 8)
    DEP_FIELD(CFU_CRAM_SWITCH, WRCFG_DELAY, 8, 0)
DEP_REG32(CFU_CFRAME_LEFT_T0, 0x28)
DEP_REG32(CFU_CFRAME_LEFT_T1, 0x2c)
DEP_REG32(CFU_CFRAME_LEFT_T2, 0x30)
DEP_REG32(CFU_QWORD_CNT, 0x34)
DEP_REG32(CFU_CRC, 0x38)
DEP_REG32(CFU_INTERNAL_STATUS, 0x3c)
    DEP_FIELD(CFU_INTERNAL_STATUS, WFIFO_DCNT, 4, 0)

#define R_MAX (R_CFU_INTERNAL_STATUS + 1)

typedef struct CFU {
    SysBusDevice parent_obj;
    MemoryRegion iomem;
    MemoryRegion iomem_stream;
    qemu_irq irq_cfu_imr;

    /* 128-bit wfifo.  */
    uint32_t wfifo[4];

    uint32_t regs[R_MAX];
    DepRegisterInfo regs_info[R_MAX];
} CFU;

static void cfu_imr_update_irq(CFU *s)
{
    bool pending = s->regs[R_CFU_ISR] & ~s->regs[R_CFU_IMR];
    qemu_set_irq(s->irq_cfu_imr, pending);
}

static void cfu_isr_postw(DepRegisterInfo *reg, uint64_t val64)
{
    CFU *s = XILINX_CFU_APB(reg->opaque);
    cfu_imr_update_irq(s);
}

static uint64_t cfu_ier_prew(DepRegisterInfo *reg, uint64_t val64)
{
    CFU *s = XILINX_CFU_APB(reg->opaque);
    uint32_t val = val64;

    s->regs[R_CFU_IMR] &= ~val;
    cfu_imr_update_irq(s);
    return 0;
}

static uint64_t cfu_idr_prew(DepRegisterInfo *reg, uint64_t val64)
{
    CFU *s = XILINX_CFU_APB(reg->opaque);
    uint32_t val = val64;

    s->regs[R_CFU_IMR] |= val;
    cfu_imr_update_irq(s);
    return 0;
}

static DepRegisterAccessInfo cfu_apb_regs_info[] = {
    {   .name = "CFU_ISR",  .decode.addr = A_CFU_ISR,
        .rsvd = 0xfffffff8,
        .w1c = 0x7,
        .post_write = cfu_isr_postw,
    },{ .name = "CFU_IMR",  .decode.addr = A_CFU_IMR,
        .reset = 0x7,
        .rsvd = 0xfffffff8,
        .ro = 0x3,
        .w1c = 0x4,
    },{ .name = "CFU_IER",  .decode.addr = A_CFU_IER,
        .rsvd = 0xfffffff8,
        .w1c = 0x4,
        .pre_write = cfu_ier_prew,
    },{ .name = "CFU_IDR",  .decode.addr = A_CFU_IDR,
        .rsvd = 0xfffffff8,
        .w1c = 0x4,
        .pre_write = cfu_idr_prew,
    },{ .name = "CFU_PROTECT",  .decode.addr = A_CFU_PROTECT,
        .reset = 0x1,
    },{ .name = "CFU_GLOBAL",  .decode.addr = A_CFU_GLOBAL,
        .rsvd = 0xfffff800,
    },{ .name = "CFU_CTL",  .decode.addr = A_CFU_CTL,
        .reset = 0x8,
        .rsvd = 0xffffffe0,
    },{ .name = "CFU_STATUS",  .decode.addr = A_CFU_STATUS,
        .rsvd = 0xfffffc00,
        .ro = 0x3ff,
    },{ .name = "CFU_CRAM_RW",  .decode.addr = A_CFU_CRAM_RW,
        .reset = 0x25719,
        .rsvd = 0xfffc0000,
    },{ .name = "CFU_CRAM_SWITCH",  .decode.addr = A_CFU_CRAM_SWITCH,
        .reset = 0xc850,
        .rsvd = 0xfffc0000,
    },{ .name = "CFU_CFRAME_LEFT_T0",  .decode.addr = A_CFU_CFRAME_LEFT_T0,
    },{ .name = "CFU_CFRAME_LEFT_T1",  .decode.addr = A_CFU_CFRAME_LEFT_T1,
    },{ .name = "CFU_CFRAME_LEFT_T2",  .decode.addr = A_CFU_CFRAME_LEFT_T2,
    },{ .name = "CFU_QWORD_CNT",  .decode.addr = A_CFU_QWORD_CNT,
        .ro = 0xffffffff,
    },{ .name = "CFU_CRC",  .decode.addr = A_CFU_CRC,
        .ro = 0xffffffff,
    },{ .name = "CFU_INTERNAL_STATUS",  .decode.addr = A_CFU_INTERNAL_STATUS,
        .rsvd = 0xfffffff0,
        .ro = 0xf,
    }
};

static void cfu_apb_reset(DeviceState *dev)
{
    CFU *s = XILINX_CFU_APB(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        dep_register_reset(&s->regs_info[i]);
    }

    cfu_imr_update_irq(s);
}

static uint64_t cfu_apb_read(void *opaque, hwaddr addr, unsigned size)
{
    CFU *s = XILINX_CFU_APB(opaque);
    DepRegisterInfo *r = &s->regs_info[addr / 4];

    if (!r->data) {
        qemu_log("%s: Decode error: read from %" HWADDR_PRIx "\n",
                 object_get_canonical_path(OBJECT(s)),
                 addr);
        return 0;
    }
    return dep_register_read(r);
}

static void cfu_apb_write(void *opaque, hwaddr addr, uint64_t value,
                      unsigned size)
{
    CFU *s = XILINX_CFU_APB(opaque);
    DepRegisterInfo *r = &s->regs_info[addr / 4];

    if (!r->data) {
        qemu_log("%s: Decode error: write to %" HWADDR_PRIx "=%" PRIx64 "\n",
                 object_get_canonical_path(OBJECT(s)),
                 addr, value);
        return;
    }
    dep_register_write(r, value, ~0);
}

static const MemoryRegionOps cfu_apb_ops = {
    .read = cfu_apb_read,
    .write = cfu_apb_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static uint64_t cfu_stream_read(void *opaque, hwaddr addr, unsigned size)
{
    qemu_log_mask(LOG_GUEST_ERROR, "%s: Unsupported read from addr=%"
                  HWADDR_PRIx "\n", __func__, addr);
    return 0;
}

static void cfu_stream_write(void *opaque, hwaddr addr, uint64_t value,
                      unsigned size)
{
    CFU *s = XILINX_CFU_APB(opaque);
    unsigned int idx;

    /* 4 32bit words.  */
    idx = (addr >> 2) & 3;

    s->wfifo[idx] = value;

    /* Writing to the top word triggers the transmit onto CFI.  */
    if (idx == 3) {
        uint8_t packet_type, row_addr, reg_addr, crc8;
        int i;

        packet_type = extract32(s->wfifo[0], 24, 8);
        row_addr = extract32(s->wfifo[0], 16, 5);
        reg_addr = extract32(s->wfifo[0], 8, 6);
        crc8 = extract32(s->wfifo[0], 0, 8);
        qemu_log("CFU: pt=%x row=%x reg=%x crc8=%x\n",
                 packet_type, row_addr, reg_addr, crc8);

        for (i = 0; i < ARRAY_SIZE(s->wfifo); i++) {
            s->wfifo[0] = 0;
        }
    }
}

static const MemoryRegionOps cfu_stream_ops = {
    .read = cfu_stream_read,
    .write = cfu_stream_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 8,
    },
};

static void cfu_apb_realize(DeviceState *dev, Error **errp)
{
    CFU *s = XILINX_CFU_APB(dev);
    const char *prefix = object_get_canonical_path(OBJECT(dev));
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(cfu_apb_regs_info); ++i) {
        DepRegisterInfo *r = &s->regs_info[cfu_apb_regs_info[i].decode.addr/4];

        *r = (DepRegisterInfo) {
            .data = (uint8_t *)&s->regs[
                    cfu_apb_regs_info[i].decode.addr/4],
            .data_size = sizeof(uint32_t),
            .access = &cfu_apb_regs_info[i],
            .debug = XILINX_CFU_APB_ERR_DEBUG,
            .prefix = prefix,
            .opaque = s,
        };
    }
}

static void cfu_apb_init(Object *obj)
{
    CFU *s = XILINX_CFU_APB(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);

    memory_region_init_io(&s->iomem, obj, &cfu_apb_ops, s,
                          TYPE_XILINX_CFU_APB, R_MAX * 4);
    memory_region_init_io(&s->iomem_stream, obj, &cfu_stream_ops, s,
                          TYPE_XILINX_CFU_APB "-stream", 4 * 1024);
    sysbus_init_mmio(sbd, &s->iomem);
    sysbus_init_mmio(sbd, &s->iomem_stream);
    sysbus_init_irq(sbd, &s->irq_cfu_imr);
}

static const VMStateDescription vmstate_cfu_apb = {
    .name = TYPE_XILINX_CFU_APB,
    .version_id = 1,
    .minimum_version_id = 1,
    .minimum_version_id_old = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, CFU, R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static void cfu_apb_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = cfu_apb_reset;
    dc->realize = cfu_apb_realize;
    dc->vmsd = &vmstate_cfu_apb;
}

static const TypeInfo cfu_apb_info = {
    .name          = TYPE_XILINX_CFU_APB,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(CFU),
    .class_init    = cfu_apb_class_init,
    .instance_init = cfu_apb_init,
};

static void cfu_apb_register_types(void)
{
    type_register_static(&cfu_apb_info);
}

type_init(cfu_apb_register_types)
