#ifndef __LINUX_KVM_PARA_H
#define __LINUX_KVM_PARA_H

#include <uapi/linux/kvm_para.h>


static inline int kvm_para_has_feature(unsigned int feature)
{
	if (kvm_arch_para_features() & (1UL << feature))
		return 1;
	return 0;
}
static inline bool kvm_para_has_hint(unsigned int feature)
{
	return !!(kvm_arch_para_hints() & (1UL << feature));
}
#endif /* __LINUX_KVM_PARA_H */
