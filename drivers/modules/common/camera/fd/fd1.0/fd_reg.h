#ifndef __FD_REG_H__
#define __FD_REG_H__


#define FD_REG_WR(base, reg, val) (REG_WR(base + (reg), val))
#define FD_REG_RD(base, reg) (REG_RD(base+(reg)))
#define FD_REG_MWR(base, reg, msk, val) FD_REG_WR(base, reg, \
	((val) & (msk)) | (FD_REG_RD(base, reg) & (~(msk))))

#define FD_REG_MAX  0xFFFFFFFF

#define FD_RUN				(0x000)
#define FD_INFO				(0x004)
#define FD_MOD_CFG			(0x008)
#define FD_CMD_BADDR			(0x00C)
#define FD_CMD_NUM			(0x010)
#define FD_IMAGE_BADDR			(0x014)
#define FD_IMAGE_LINENUM		(0x018)
#define FD_FACE_NUM			(0x01C)
#define FD_OUT_BUF_ADDR			(0x020)
#define FD_DIM_BUF_ADDR			(0x024)
#define FD_CROP_START_STS		(0x028)
#define FD_CROP_SIZE_STS		(0x02C)
#define FD_DIM_STS			(0x030)
#define FD_WKC_STS			(0x034)
#define FD_PAD_STS			(0x038)
#define FD_MODEL_CUT0_STS		(0x03C)
#define FD_MODEL_CUT1_STS		(0x040)
#define FD_MODEL0_STS			(0x044)
#define FD_MODEL1_STS			(0x048)
#define FD_MODEL2_STS			(0x04C)
#define FD_MODEL3_STS			(0x050)
#define FD_MODEL4_STS			(0x054)
#define FD_MODEL5_STS			(0x058)
#define FD_MODEL6_STS			(0x05C)
#define FD_MODEL7_STS			(0x060)
#define FD_MODEL8_STS			(0x064)
#define FD_MODEL9_STS			(0x068)
#define FD_MODEL10_STS			(0x06C)
#define FD_MODEL11_STS			(0x070)
#define FD_IP_REV			(0x080)
#define FD_AXI_DEBUG			(0x084)
#define FD_BUSY_DEBUG			(0x088)
#define FD_DET_DEBUG0			(0x08C)
#define FD_DET_DEBUG1			(0x090)
#define FD_SCL_DEBUG			(0x094)
#define FD_FEAT_DEBUG0			(0x098)
#define FD_FEAT_DEBUG1			(0x09C)
#define FD_SPARE_GATE			(0x0A0)
#define FD_INT_EN			(0x100UL)
#define FD_INT_CLR			(0x104UL)
#define FD_INT_RAW			(0x108)
#define FD_INT_MASK			(0x10C)
#define FD_MMU_INT_EN		(0x110)
#define FD_MMU_INT_CLEAR	(0x114)
#define FD_MMU_INT_RAW		(0x118)
#define FD_MMU_INT_MASK	(0x11c)


/* FD IOMMU Registers*/
#define FD_MMU_EN			(0x0200)
#define FD_MMU_UPDATE			(0x0204)
#define FD_MMU_MIN_VPN			(0x0208)
#define FD_MMU_RANGE_VPN		(0x020c)
#define FD_MMU_PT_ADDR			(0x0210)
#define FD_MMU_DEFAULT_PAGE		(0x0214)
#define FD_MMU_VAOR_ADDR_RD		(0x0218)
#define FD_MMU_VAOR_ADDR_WR		(0x021c)
#define FD_MMU_INV_ADDR_RD		(0x0220)
#define FD_MMU_INV_ADDR_WR		(0x0224)
#define FD_MMU_UNS_ADDR_RD		(0x0228)
#define FD_MMU_UNS_ADDR_WR		(0x022c)
#define FD_MMU_MISS_CNT		(0x0230)
#define FD_MMU_PT_UPDATE_QOS		(0x0234)
#define FD_MMU_VERSION			(0x0238)
#define FD_MMU_MIN_PPN1		(0x023c)
#define FD_MMU_PPN_RANGE1		(0x0240)
#define FD_MMU_MIN_PPN2		(0x0244)
#define FD_MMU_PPN_RANGE2		(0x0248)
#define FD_MMU_VPN_PAOR_RD		(0x024c)
#define FD_MMU_VPN_PAOR_WR		(0x0250)
#define FD_MMU_PPN_PAOR_RD		(0x0254)
#define FD_MMU_PPN_PAOR_WR		(0x0258)
#define FD_MMU_REG_AU_MANAGE		(0x025c)
#define FD_MMU_PAGE_RD_CH		(0x0260)
#define FD_MMU_PAGE_WR_CH		(0x0264)
#define FD_MMU_READ_PAGE_CMD_CNT	(0x0268)
#define FD_MMU_PAGE_MAX_LATENCY	(0x026c)
#define FD_MMU_READ_PAGE_LATENCY_CNT	(0x0270)



#define FD_MASK_RUN			(0x1<<0)

#define FD_MASK_INFO_BUSY		    BIT_16
#define FD_MASK_INFO_ERR_CODE		    (0x3f << 1)
#define FD_MASK_INFO_ERR_FLAG		    BIT_0

#define FD_MASK_MOD_CFG_ARQOS		    (0xf << 20)
#define FD_MASK_MOD_CFG_AWQOS		    (0xf << 16)
#define FD_MASK_MOD_CFG_OUT_END		    (0xf << 8)
#define FD_MASK_MOD_CFG_IN_END		    (0xf << 4)
#define FD_MASK_MOD_CFG_CMD_END		    (0xf << 0)

#define FD_MASK_CMD_BADDR		    (0xfffffff << 4)
#define FD_MASK_BADDR		    (0xfffffff << 4)

#define FD_MASK_CMD_FIN_NUM		    (0x7f << 16)
#define FD_MASK_CMD_TOT_NUM		    (0x7f << 0)

#define FD_MASK_IMG_BADDR		    (0xfffffff << 4)

#define FD_MASK_IMG_LINESTEP		    (0x3ff << 0)

#define FD_MASK_FACE_DET_NUM		    (0x1fff << 16)
#define FD_MASK_FACE_MAX_NUM		    (0x1fff << 0)

#define FD_MASK_OUT_BADDR		    (0xfffffff << 4)

#define FD_MASK_DIM_BADDR		    (0xfffffff << 4)




#define FD_MASK_DET_DEBUG0_W_BLOCK	(0xff << 24)
#define FD_MASK_DET_DEBUG0_X_LOCK	(0x3ff << 14)
#define FD_MASK_DET_DEBUG0_R_BLOCK	(0x1ff << 5)
#define FD_MASK_DET_DEBUG0_DIM_BLOCK	(0x1f << 0)

#define FD_MASK_DET_DEBUG1_RAW_STATE	(0x3 << 19)
#define FD_MASK_DET_DEBUG1_MAIN_STATE	(0x7 << 16)
#define FD_MASK_DET_DEBUG1_GRAD_RDY	(0x1 << 10)
#define FD_MASK_DET_DEBUG1_GRAY_RDY	(0x1 << 9)
#define FD_MASK_DET_DEBUG1_ULBP_RDY	(0x1 << 8)
#define FD_MASK_DET_DEBUG1_FINE_FIFO_FULL	(0x1 << 5)
#define FD_MASK_DET_DEBUG1_FINE_FIFO_EMPTY	(0x1 << 4)
#define FD_MASK_DET_DEBUG1_RAW_FIFO1_FULL	(0x1 << 3)
#define FD_MASK_DET_DEBUG1_RAW_FIFO1_EMPTY	(0x1 << 2)
#define FD_MASK_DET_DEBUG1_RAW_FIFO0_FULL	(0x1 << 1)
#define FD_MASK_DET_DEBUG1_RAW_FIFO0_EMPTY	(0x1 << 0)

#define FD_MASK_INT_ERR_EN (0x1 << 1)
#define FD_MASK_INT_EN (0x1 << 0)

#define FD_MASK_INT_ERR_CLR (0x1 << 1)
#define FD_MASK_INT_CLR (0x1 << 0)

#define FD_MASK_INT_ERR (0x1 << 1)
#define FD_MASK_INT_RAW (0x1 << 0)

#define FD_MASK_INT_ERR_MASK (0x1 << 1)
#define FD_MASK_INT_RAW_MASK  (0x1 << 0)


#define FD_MASK_MMU_INT_VAOR_RD		(0x1 << 0)
#define FD_MASK_MMU_INT_VAOR_WR		(0x1 << 1)
#define FD_MASK_MMU_INT_INVALID_RD		(0x1 << 2)
#define FD_MASK_MMU_INT_INVALID_WR		(0x1 << 3)
#define FD_MASK_MMU_INT_UNSECURE_RD		(0x1 << 4)
#define FD_MASK_MMU_INT_UNSECURE_WR		(0x1 << 5)
#define FD_MASK_MMU_INT_PAOR_RD		(0x1 << 6)
#define FD_MASK_MMU_INT_PAOR_WR		(0x1 << 7)



#define FD_MASK_MMU_INT  (FD_MASK_MMU_INT_VAOR_RD | \
				FD_MASK_MMU_INT_VAOR_WR | \
				FD_MASK_MMU_INT_INVALID_RD | \
				FD_MASK_MMU_INT_INVALID_WR | \
				FD_MASK_MMU_INT_UNSECURE_RD | \
				FD_MASK_MMU_INT_UNSECURE_RD | \
				FD_MASK_MMU_INT_PAOR_RD | \
				FD_MASK_MMU_INT_PAOR_WR)

#define FD_MASK_DVFS_CGM_SEL_START_BIT (0)
#define FD_MASK_DVFS_VOTE_MTX_SEL_START_BIT (2)
#define FD_MASK_DVFS_VOL_SEL_START_BIT (5)


#define FD_REG_DVFS_DFS_EN_CTRL	(0x0008)
#define FD_REG_DVFS_DFS_SW_TRIG_CFG (0x000C)
#define FD_REG_DVFS_DFS_FREQ_UPDATE_BYPASS (0x0030)
#define FD_REG_DVFS_DFS_VOLT_DBG (0x0038)
#define FD_REG_DVFS_DFS_CGM_DBG (0x0048)
#define FD_REG_DVFS_INDEX0_MAP (0x0170)
#define FD_REG_DVFS_INDEX1_MAP (0x0174)
#define FD_REG_DVFS_INDEX2_MAP (0x0178)
#define FD_REG_DVFS_INDEX3_MAP (0x017C)
#define FD_REG_DVFS_INDEX4_MAP (0x0180)
#define FD_REG_DVFS_INDEX5_MAP (0x0184)
#define FD_REG_DVFS_INDEX6_MAP (0x0188)
#define FD_REG_DVFS_INDEX7_MAP (0x018C)

#define FD_REG_DVFS_WORK_INDEX_CFG (0x01F0)
#define FD_REG_DVFS_IDLE_INDEX_CFG (0x01F4)

#define FD_MASK_DVFS_INDEX_IDLE (0x7)
#define FD_MASK_DVFS_INDEX_WORK (0x7)

#define FD_MASK_DVFS_DFS_EN (0x1 << 6)
#define FD_MASK_DVFS_DFS_SW_TRIG (0x1 << 5)
#define FD_MASK_DVFS_DFS_FREQ_UPDATE (0x1 << 6)
#define FD_MASK_DVFS_READ_DFS_VOLT	(0x7 << 21)
#define FD_MASK_DVFS_READ_DFS_CGM	(0x3 << 21)
#define FD_MASK_DVFS_CGM_SEL_INDEX (0x3 << 0)
#define FD_MASK_DVFS_VOTE_MTX_SEL_INDEX (0x7 << 2)
#define FD_MASK_DVFS_VOL_SEL_INDEX (0x7 << 5)

#endif
