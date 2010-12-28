
HEADER("CR0 flags"),
CONSTANT(CR0_PE),
CONSTANT(CR0_MP),
CONSTANT(CR0_EM),
CONSTANT(CR0_TS),
CONSTANT(CR0_ET),
CONSTANT(CR0_NE),
CONSTANT(CR0_WP),
CONSTANT(CR0_AM),
CONSTANT(CR0_NW),
CONSTANT(CR0_CD),
CONSTANT(CR0_PG),

HEADER("CR4 flags"),
CONSTANT(CR4_VME),
CONSTANT(CR4_PVI),
CONSTANT(CR4_TSD),
CONSTANT(CR4_DE),
CONSTANT(CR4_PSE),
CONSTANT(CR4_PAE),
CONSTANT(CR4_MCE),
CONSTANT(CR4_PGE),
CONSTANT(CR4_FXSR),
CONSTANT(CR4_XMMEXCPT),
CONSTANT(CR4_CHANNELS),

HEADER("KeFeatureBits flags"),
CONSTANT(KF_RDTSC),
CONSTANT(KF_CR4),
CONSTANT(KF_GLOBAL_PAGE),
CONSTANT(KF_LARGE_PAGE),
CONSTANT(KF_CMPXCHG8B),
CONSTANT(KF_FAST_SYSCALL),

HEADER("Machine type definitions"),
CONSTANT(MACHINE_TYPE_ISA),
CONSTANT(MACHINE_TYPE_EISA),
CONSTANT(MACHINE_TYPE_MCA),

HEADER("EFLAGS"),
CONSTANT(EFLAGS_TF_MASK),
CONSTANT(EFLAGS_TF_SHIFT),
CONSTANT(EFLAGS_IF_MASK),
CONSTANT(EFLAGS_IF_SHIFT),
CONSTANT(EFLAGS_ID_MASK),

HEADER("Hypervisor Enlightenment Definitions"),
//CONSTANT(HV_MMU_USE_HYPERCALL_FOR_ADDRESS_SWITCH),
//CONSTANT(HV_MMU_USE_HYPERCALL_FOR_LOCAL_FLUSH),
//CONSTANT(HV_MMU_USE_HYPERCALL_FOR_REMOTE_FLUSH),
//CONSTANT(HV_X64_MSR_APIC_EOI),
//CONSTANT(HV_APIC_ENLIGHTENED),
//CONSTANT(HV_KE_USE_HYPERCALL_FOR_LONG_SPIN_WAIT),
//CONSTANT(HV_VIRTUAL_APIC_NO_EOI_REQUIRED_V),
//CONSTANT(HvApicFlags),

HEADER("KDGT selectors"),
CONSTANT(KGDT64_NULL),
CONSTANT(KGDT64_R0_CODE),
CONSTANT(KGDT64_R0_DATA),
CONSTANT(KGDT64_R3_CMCODE),
CONSTANT(KGDT64_R3_DATA),
CONSTANT(KGDT64_R3_CODE),
CONSTANT(KGDT64_SYS_TSS),
CONSTANT(KGDT64_R3_CMTEB),

HEADER("Machine Specific Register Numbers"),
CONSTANT(MSR_EFER),
CONSTANT(MSR_STAR),
CONSTANT(MSR_LSTAR),
CONSTANT(MSR_CSTAR),
CONSTANT(MSR_SYSCALL_MASK),
CONSTANT(MSR_FS_BASE),
CONSTANT(MSR_GS_BASE),
CONSTANT(MSR_GS_SWAP),
CONSTANT(MSR_MCG_STATUS),
CONSTANT(MSR_AMD_ACCESS),

HEADER("Flags for MSR_EFER"),
CONSTANT(MSR_LMA),
CONSTANT(MSR_LME),
CONSTANT(MSR_SCE),
CONSTANT(MSR_NXE),
CONSTANT(MSR_PAT),
CONSTANT(MSR_DEGUG_CTL),
CONSTANT(MSR_LAST_BRANCH_FROM),
CONSTANT(MSR_LAST_BRANCH_TO),
CONSTANT(MSR_LAST_EXCEPTION_FROM),
CONSTANT(MSR_LAST_EXCEPTION_TO),

HEADER("Flags for MSR_DEGUG_CTL"),
//CONSTANT(MSR_DEBUG_CTL_LBR),
//CONSTANT(MSR_DEBUG_CRL_BTF),

HEADER("Fatal exception codes"),
CONSTANT(EXCEPTION_DIVIDED_BY_ZERO),
CONSTANT(EXCEPTION_DEBUG),
CONSTANT(EXCEPTION_NMI),
CONSTANT(EXCEPTION_INT3),
CONSTANT(EXCEPTION_BOUND_CHECK),
CONSTANT(EXCEPTION_INVALID_OPCODE),
CONSTANT(EXCEPTION_NPX_NOT_AVAILABLE),
CONSTANT(EXCEPTION_DOUBLE_FAULT),
CONSTANT(EXCEPTION_NPX_OVERRUN),
CONSTANT(EXCEPTION_INVALID_TSS),
CONSTANT(EXCEPTION_SEGMENT_NOT_PRESENT),
CONSTANT(EXCEPTION_STACK_FAULT),
CONSTANT(EXCEPTION_GP_FAULT),
CONSTANT(EXCEPTION_RESERVED_TRAP),
CONSTANT(EXCEPTION_NPX_ERROR),
CONSTANT(EXCEPTION_ALIGNMENT_CHECK),

HEADER("Argument Home Address"),
OFFSET(P1Home, CONTEXT, P1Home),
OFFSET(P2Home, CONTEXT, P1Home),
OFFSET(P3Home, CONTEXT, P1Home),
OFFSET(P4Home, CONTEXT, P1Home),

HEADER("CONTEXT"),
OFFSET(CxP1Home, CONTEXT, P1Home),
OFFSET(CxP2Home, CONTEXT, P2Home),
OFFSET(CxP3Home, CONTEXT, P3Home),
OFFSET(CxP4Home, CONTEXT, P4Home),
OFFSET(CxP5Home, CONTEXT, P5Home),
OFFSET(CxP6Home, CONTEXT, P6Home),
OFFSET(CxContextFlags, CONTEXT, ContextFlags),
OFFSET(CxMxCsr, CONTEXT, MxCsr),
OFFSET(CxSegCs, CONTEXT, SegCs),
OFFSET(CxSegDs, CONTEXT, SegDs),
OFFSET(CxSegEs, CONTEXT, SegEs),
OFFSET(CxSegFs, CONTEXT, SegFs),
OFFSET(CxSegGs, CONTEXT, SegGs),
OFFSET(CxSegSs, CONTEXT, SegSs),
OFFSET(CxEFlags, CONTEXT, EFlags),
OFFSET(CxDr0, CONTEXT, Dr0),
OFFSET(CxDr1, CONTEXT, Dr1),
OFFSET(CxDr2, CONTEXT, Dr2),
OFFSET(CxDr3, CONTEXT, Dr3),
OFFSET(CxDr6, CONTEXT, Dr6),
OFFSET(CxDr7, CONTEXT, Dr7),
OFFSET(CxRax, CONTEXT, Rax),
OFFSET(CxRcx, CONTEXT, Rcx),
OFFSET(CxRdx, CONTEXT, Rdx),
OFFSET(CxRbx, CONTEXT, Rbx),
OFFSET(CxRsp, CONTEXT, Rsp),
OFFSET(CxRbp, CONTEXT, Rbp),
OFFSET(CxRsi, CONTEXT, Rsi),
OFFSET(CxRdi, CONTEXT, Rdi),
OFFSET(CxR8, CONTEXT, R8),
OFFSET(CxR9, CONTEXT, R9),
OFFSET(CxR10, CONTEXT, R10),
OFFSET(CxR11, CONTEXT, R11),
OFFSET(CxR12, CONTEXT, R12),
OFFSET(CxR13, CONTEXT, R13),
OFFSET(CxR14, CONTEXT, R14),
OFFSET(CxR15, CONTEXT, R15),
OFFSET(CxRip, CONTEXT, Rip),
OFFSET(CxFltSave, CONTEXT, FltSave),
OFFSET(CxXmm0, CONTEXT, Xmm0),
OFFSET(CxXmm1, CONTEXT, Xmm1),
OFFSET(CxXmm2, CONTEXT, Xmm2),
OFFSET(CxXmm3, CONTEXT, Xmm3),
OFFSET(CxXmm4, CONTEXT, Xmm4),
OFFSET(CxXmm5, CONTEXT, Xmm5),
OFFSET(CxXmm6, CONTEXT, Xmm6),
OFFSET(CxXmm7, CONTEXT, Xmm7),
OFFSET(CxXmm8, CONTEXT, Xmm8),
OFFSET(CxXmm9, CONTEXT, Xmm9),
OFFSET(CxXmm10, CONTEXT, Xmm10),
OFFSET(CxXmm11, CONTEXT, Xmm11),
OFFSET(CxXmm12, CONTEXT, Xmm12),
OFFSET(CxXmm13, CONTEXT, Xmm13),
OFFSET(CxXmm14, CONTEXT, Xmm14),
OFFSET(CxXmm15, CONTEXT, Xmm15),
OFFSET(CxDebugControl, CONTEXT, DebugControl),
OFFSET(CxLastBranchToRip, CONTEXT, LastBranchToRip),
OFFSET(CxLastBranchFromRip, CONTEXT, LastBranchFromRip),
OFFSET(CxLastExceptionToRip, CONTEXT, LastExceptionToRip),
OFFSET(CxLastExceptionFromRip, CONTEXT, LastExceptionFromRip),
OFFSET(CxVectorControl, CONTEXT, VectorControl),
OFFSET(CxVectorRegister, CONTEXT, VectorRegister),
SIZE(CONTEXT_FRAME_LENGTH, CONTEXT),

HEADER("DISPATCHER_CONTEXT"),
OFFSET(DcControlPc, DISPATCHER_CONTEXT, ControlPc),
OFFSET(DcImageBase, DISPATCHER_CONTEXT, ImageBase),
OFFSET(DcFunctionEntry, DISPATCHER_CONTEXT, FunctionEntry),
OFFSET(DcEstablisherFrame, DISPATCHER_CONTEXT, EstablisherFrame),
OFFSET(DcTargetIp, DISPATCHER_CONTEXT, TargetIp),
OFFSET(DcContextRecord, DISPATCHER_CONTEXT, ContextRecord),
OFFSET(DcLanguageHandler, DISPATCHER_CONTEXT, LanguageHandler),
OFFSET(DcHandlerData, DISPATCHER_CONTEXT, HandlerData),
OFFSET(DcHistoryTable, DISPATCHER_CONTEXT, HistoryTable),
OFFSET(DcScopeIndex, DISPATCHER_CONTEXT, ScopeIndex),

HEADER("KEXCEPTION_FRAME"),
OFFSET(ExP1Home, KEXCEPTION_FRAME, P1Home),
OFFSET(ExP2Home, KEXCEPTION_FRAME, P2Home),
OFFSET(ExP3Home, KEXCEPTION_FRAME, P3Home),
OFFSET(ExP4Home, KEXCEPTION_FRAME, P4Home),
OFFSET(ExP5, KEXCEPTION_FRAME, P5),
OFFSET(ExXmm6, KEXCEPTION_FRAME, Xmm6),
OFFSET(ExXmm7, KEXCEPTION_FRAME, Xmm7),
OFFSET(ExXmm8, KEXCEPTION_FRAME, Xmm8),
OFFSET(ExXmm9, KEXCEPTION_FRAME, Xmm9),
OFFSET(ExXmm10, KEXCEPTION_FRAME, Xmm10),
OFFSET(ExXmm11, KEXCEPTION_FRAME, Xmm11),
OFFSET(ExXmm12, KEXCEPTION_FRAME, Xmm12),
OFFSET(ExXmm13, KEXCEPTION_FRAME, Xmm13),
OFFSET(ExXmm14, KEXCEPTION_FRAME, Xmm14),
OFFSET(ExXmm15, KEXCEPTION_FRAME, Xmm15),
OFFSET(ExMxCsr, KEXCEPTION_FRAME, MxCsr),
OFFSET(ExRbp, KEXCEPTION_FRAME, Rbp),
OFFSET(ExRbx, KEXCEPTION_FRAME, Rbx),
OFFSET(ExRdi, KEXCEPTION_FRAME, Rdi),
OFFSET(ExRsi, KEXCEPTION_FRAME, Rsi),
OFFSET(ExR12, KEXCEPTION_FRAME, R12),
OFFSET(ExR13, KEXCEPTION_FRAME, R13),
OFFSET(ExR14, KEXCEPTION_FRAME, R14),
OFFSET(ExR15, KEXCEPTION_FRAME, R15),
OFFSET(ExReturn, KEXCEPTION_FRAME, Return),
OFFSET(CuInitialStack, KEXCEPTION_FRAME, InitialStack),
OFFSET(CuTrapFrame, KEXCEPTION_FRAME, TrapFrame),
OFFSET(CuCallbackStack, KEXCEPTION_FRAME, CallbackStack),
OFFSET(CuOutputBuffer, KEXCEPTION_FRAME, OutputBuffer),
OFFSET(CuOutputLength, KEXCEPTION_FRAME, OutputLength),
SIZE(KEXCEPTION_FRAME_LENGTH, KEXCEPTION_FRAME),

HEADER("JUMP_BUFFER"),
OFFSET(JbFrame, _JUMP_BUFFER, Frame),
OFFSET(JbRbx, _JUMP_BUFFER, Rbx),
OFFSET(JbRsp, _JUMP_BUFFER, Rsp),
OFFSET(JbRbp, _JUMP_BUFFER, Rbp),
OFFSET(JbRsi, _JUMP_BUFFER, Rsi),
OFFSET(JbRdi, _JUMP_BUFFER, Rdi),
OFFSET(JbR12, _JUMP_BUFFER, R12),
OFFSET(JbR13, _JUMP_BUFFER, R13),
OFFSET(JbR14, _JUMP_BUFFER, R14),
OFFSET(JbR15, _JUMP_BUFFER, R15),
OFFSET(JbRip, _JUMP_BUFFER, Rip),
//OFFSET(JbMxCsr, _JUMP_BUFFER, MxCsr), // Spare
//OFFSET(JbFpCsr, _JUMP_BUFFER, FpCsr),
OFFSET(JbXmm6, _JUMP_BUFFER, Xmm6),
OFFSET(JbXmm7, _JUMP_BUFFER, Xmm7),
OFFSET(JbXmm8, _JUMP_BUFFER, Xmm8),
OFFSET(JbXmm9, _JUMP_BUFFER, Xmm9),
OFFSET(JbXmm10, _JUMP_BUFFER, Xmm10),
OFFSET(JbXmm11, _JUMP_BUFFER, Xmm11),
OFFSET(JbXmm12, _JUMP_BUFFER, Xmm12),
OFFSET(JbXmm13, _JUMP_BUFFER, Xmm13),
OFFSET(JbXmm14, _JUMP_BUFFER, Xmm14),
OFFSET(JbXmm15, _JUMP_BUFFER, Xmm15),

HEADER("KGDTENTRY64"),
OFFSET(KgdtBaseLow, KGDTENTRY64, BaseLow),
OFFSET(KgdtBaseMiddle, KGDTENTRY64, Bytes.BaseMiddle),
OFFSET(KgdtBaseHigh, KGDTENTRY64, Bytes.BaseHigh),
OFFSET(KgdtBaseUpper, KGDTENTRY64, BaseUpper),
OFFSET(KgdtLimitHigh, KGDTENTRY64, Bytes.Flags2),
OFFSET(KgdtLimitLow, KGDTENTRY64, LimitLow),
//CONSTANT(KGDT_LIMIT_ENCODE_MASK),

HEADER("KPRCB"),
OFFSET(PbMxCsr, KPRCB, MxCsr),
OFFSET(PbNumber, KPRCB, Number),
OFFSET(PbInterruptRequest, KPRCB, InterruptRequest),
OFFSET(PbIdleHalt, KPRCB, IdleHalt),
OFFSET(PbCurrentThread, KPRCB, CurrentThread),
OFFSET(PbNextThread, KPRCB, NextThread),
OFFSET(PbIdleThread, KPRCB, IdleThread),
OFFSET(PbNestingLevel, KPRCB, NestingLevel),
OFFSET(PbRspBase, KPRCB, RspBase),
OFFSET(PbPrcbLock, KPRCB, PrcbLock),
OFFSET(PbSetMember, KPRCB, SetMember),
OFFSET(PbProcessorState, KPRCB, ProcessorState),
OFFSET(PbCpuType, KPRCB, CpuType),
OFFSET(PbCpuID, KPRCB, CpuID),
OFFSET(PbCpuStep, KPRCB, CpuStep),
OFFSET(PbHalReserved, KPRCB, HalReserved),
OFFSET(PbMinorVersion, KPRCB, MinorVersion),
OFFSET(PbMajorVersion, KPRCB, MajorVersion),
OFFSET(PbBuildType, KPRCB, BuildType),
OFFSET(PbCpuVendor, KPRCB, CpuVendor),
//OFFSET(PbCoresPerPhysicalProcessor, KPRCB, CoresPerPhysicalProcessor),
//OFFSET(PbLogicalProcessorsPerCore, KPRCB, LogicalProcessorsPerCore),
OFFSET(PbApicMask, KPRCB, ApicMask),
OFFSET(PbCFlushSize, KPRCB, CFlushSize),
OFFSET(PbAcpiReserved, KPRCB, AcpiReserved),
OFFSET(PbInitialApicId, KPRCB, InitialApicId),
//OFFSET(PbStride, KPRCB, Stride),
OFFSET(PbLockQueue, KPRCB, LockQueue),
OFFSET(PbPPLookasideList, KPRCB, PPLookasideList),
OFFSET(PbPPNPagedLookasideList, KPRCB, PPNPagedLookasideList),
OFFSET(PbPPPagedLookasideList, KPRCB, PPPagedLookasideList),
OFFSET(PbPacketBarrier, KPRCB, PacketBarrier),
OFFSET(PbDeferredReadyListHead, KPRCB, DeferredReadyListHead),
OFFSET(PbLookasideIrpFloat, KPRCB, LookasideIrpFloat),
//OFFSET(PbSystemCalls, KPRCB, SystemCalls),
//OFFSET(PbReadOperationCount, KPRCB, ReadOperationCount),
//OFFSET(PbWriteOperationCount, KPRCB, WriteOperationCount),
//OFFSET(PbOtherOperationCount, KPRCB, OtherOperationCount),
//OFFSET(PbReadTransferCount, KPRCB, ReadTransferCount),
//OFFSET(PbWriteTransferCount, KPRCB, WriteTransferCount),
//OFFSET(PbOtherTransferCount, KPRCB, OtherTransferCount),
//OFFSET(PbContextSwitches, KPRCB, ContextSwitches),
OFFSET(PbTargetSet, KPRCB, TargetSet),
OFFSET(PbIpiFrozen, KPRCB, IpiFrozen),
OFFSET(PbRequestMailbox, KPRCB, RequestMailbox),
OFFSET(PbSenderSummary, KPRCB, SenderSummary),
//OFFSET(PbDpcListHead, KPRCB, DpcListHead),
//OFFSET(PbDpcLock, KPRCB, DpcLock),
//OFFSET(PbDpcQueueDepth, KPRCB, DpcQueueDepth),
//OFFSET(PbDpcCount, KPRCB, DpcCount),
OFFSET(PbDpcStack, KPRCB, DpcStack),
OFFSET(PbMaximumDpcQueueDepth, KPRCB, MaximumDpcQueueDepth),
OFFSET(PbDpcRequestRate, KPRCB, DpcRequestRate),
OFFSET(PbMinimumDpcRate, KPRCB, MinimumDpcRate),
OFFSET(PbDpcInterruptRequested, KPRCB, DpcInterruptRequested),
OFFSET(PbDpcThreadRequested, KPRCB, DpcThreadRequested),
OFFSET(PbDpcRoutineActive, KPRCB, DpcRoutineActive),
OFFSET(PbDpcThreadActive, KPRCB, DpcThreadActive),
OFFSET(PbTimerHand, KPRCB, TimerHand),
OFFSET(PbTimerRequest, KPRCB, TimerRequest),
OFFSET(PbTickOffset, KPRCB, TickOffset),
OFFSET(PbMasterOffset, KPRCB, MasterOffset),
OFFSET(PbDpcLastCount, KPRCB, DpcLastCount),
OFFSET(PbQuantumEnd, KPRCB, QuantumEnd),
OFFSET(PbDpcSetEventRequest, KPRCB, DpcSetEventRequest),
OFFSET(PbIdleSchedule, KPRCB, IdleSchedule),
OFFSET(PbReadySummary, KPRCB, ReadySummary),
OFFSET(PbDispatcherReadyListHead, KPRCB, DispatcherReadyListHead),
OFFSET(PbInterruptCount, KPRCB, InterruptCount),
OFFSET(PbKernelTime, KPRCB, KernelTime),
OFFSET(PbUserTime, KPRCB, UserTime),
OFFSET(PbDpcTime, KPRCB, DpcTime),
OFFSET(PbInterruptTime, KPRCB, InterruptTime),
OFFSET(PbAdjustDpcThreshold, KPRCB, AdjustDpcThreshold),
OFFSET(PbSkipTick, KPRCB, SkipTick),
OFFSET(PbPollSlot, KPRCB, PollSlot),
OFFSET(PbParentNode, KPRCB, ParentNode),
OFFSET(PbMultiThreadProcessorSet, KPRCB, MultiThreadProcessorSet),
OFFSET(PbMultiThreadSetMaster, KPRCB, MultiThreadSetMaster),
//OFFSET(PbStartCycles, KPRCB, StartCycles),
OFFSET(PbPageColor, KPRCB, PageColor),
OFFSET(PbNodeColor, KPRCB, NodeColor),
OFFSET(PbNodeShiftedColor, KPRCB,NodeShiftedColor),
OFFSET(PbSecondaryColorMask, KPRCB, SecondaryColorMask),
OFFSET(PbSleeping, KPRCB, Sleeping),
//OFFSET(PbCycleTime, KPRCB, CycleTime),
//OFFSET(PbFastReadNoWait, KPRCB, FastReadNoWait),
//OFFSET(PbFastReadWait, KPRCB, FastReadWait),
//OFFSET(PbFastReadNotPossible, KPRCB, FastReadNotPossible),
//OFFSET(PbCopyReadNoWait, KPRCB, CopyReadNoWait),
//OFFSET(PbCopyReadWait, KPRCB, CopyReadWait),
//OFFSET(PbCopyReadNoWaitMiss, KPRCB, CopyReadNoWaitMiss),
//OFFSET(PbAlignmentFixupCount, KPRCB, AlignmentFixupCount),
//OFFSET(PbExceptionDispatchCount, KPRCB, ExceptionDispatchCount),
OFFSET(PbVendorString, KPRCB, VendorString),
OFFSET(PbPowerState, KPRCB, PowerState),
SIZE(ProcessorBlockLength, KPRCB),

HEADER("KPCR"),
//OFFSET(PcGdt, KPCR, Gdt),
//OFFSET(PcTss, KPCR, Tss),
OFFSET(PcUserRsp, KPCR, UserRsp),
OFFSET(PcSelf, KPCR, Self),
OFFSET(PcCurrentPrcb, KPCR, CurrentPrcb),
OFFSET(PcLockArray, KPCR, LockArray),
//OFFSET(PcTeb, KPCR, Teb),
//OFFSET(PcIdt, KPCR, Idt),
OFFSET(PcIrql, KPCR, Irql),
OFFSET(PcStallScaleFactor, KPCR, StallScaleFactor),
OFFSET(PcHalReserved, KPCR, HalReserved),
//OFFSET(PcPrcb, KPCR, Prcb),
//OFFSET(PcMxCsr, KPCR, MxCsr),
//OFFSET(PcNumber, KPCR, Number),
//OFFSET(PcInterruptRequest, KPCR, InterruptRequest),
//OFFSET(PcIdleHalt, KPCR, IdleHalt),
//OFFSET(PcCurrentThread, KPCR, CurrentThread),
//OFFSET(PcNextThread, KPCR, NextThread),
//OFFSET(PcIdleThread, KPCR, IdleThread),
//OFFSET(PcIpiFrozen, KPCR, IpiFrozen),
//OFFSET(PcNestingLevel, KPCR, NestingLevel),
//OFFSET(PcRspBase, KPCR, RspBase),
//OFFSET(PcPrcbLock, KPCR, PrcbLock),
#if 0
OFFSET(PcSetMember, KPCR, SetMember),
OFFSET(PcCr0, KPCR, Cr0),
OFFSET(PcCr2, KPCR, Cr2),
OFFSET(PcCr3, KPCR, Cr3),
OFFSET(PcCr4, KPCR, Cr4),
OFFSET(PcKernelDr0, KPCR, KernelDr0),
OFFSET(PcKernelDr1, KPCR, KernelDr1),
OFFSET(PcKernelDr2, KPCR, KernelDr2),
OFFSET(PcKernelDr3, KPCR, KernelDr3),
OFFSET(PcKernelDr7, KPCR, KernelDr7),
OFFSET(PcGdtrLimit, KPCR, GdtrLimit),
OFFSET(PcGdtrBase, KPCR, GdtrBase),
OFFSET(PcIdtrLimit, KPCR, IdtrLimit),
OFFSET(PcIdtrBase, KPCR, IdtrBase),
OFFSET(PcTr, KPCR, Tr),
OFFSET(PcLdtr, KPCR, Ldtr),
OFFSET(PcDebugControl, KPCR, DebugControl),
OFFSET(PcLastBranchToRip, KPCR, LastBranchToRip),
OFFSET(PcLastBranchFromRip, KPCR, LastBranchFromRip),
OFFSET(PcLastExceptionToRip, KPCR, LastExceptionToRip),
OFFSET(PcLastExceptionFromRip, KPCR, LastExceptionFromRip),
OFFSET(PcCr8, KPCR, Cr8),
OFFSET(PcCpuType, KPCR, CpuType),
OFFSET(PcCpuID, KPCR, CpuID),
OFFSET(PcCpuStep, KPCR, CpuStep),
OFFSET(PcCpuVendor, KPCR, CpuVendor),
OFFSET(PcVirtualApicAssist, KPCR, VirtualApicAssist),
OFFSET(PcCFlushSize, KPCR, CFlushSize),
OFFSET(PcDeferredReadyListHead, KPCR, DeferredReadyListHead),
OFFSET(PcSystemCalls, KPCR, SystemCalls),
OFFSET(PcDpcRoutineActive, KPCR, DpcRoutineActive),
OFFSET(PcInterruptCount, KPCR, InterruptCount),
OFFSET(PcDebuggerSavedIRQL, KPCR, DebuggerSavedIRQL),
OFFSET(PcTickOffset, KPCR, TickOffset),
OFFSET(PcMasterOffset, KPCR, MasterOffset),
OFFSET(PcSkipTick, KPCR, SkipTick),
OFFSET(PcStartCycles, KPCR, StartCycles),
SIZE(ProcessorControlRegisterLength, KPCR),
#endif

HEADER("KPROCESSOR_STATE"),
OFFSET(PsSpecialRegisters, KPROCESSOR_STATE, SpecialRegisters),
OFFSET(PsCr0, KPROCESSOR_STATE, SpecialRegisters.Cr0),
OFFSET(PsCr2, KPROCESSOR_STATE, SpecialRegisters.Cr2),
OFFSET(PsCr3, KPROCESSOR_STATE, SpecialRegisters.Cr3),
OFFSET(PsCr4, KPROCESSOR_STATE, SpecialRegisters.Cr4),
OFFSET(PsKernelDr0, KPROCESSOR_STATE, SpecialRegisters.KernelDr0),
OFFSET(PsKernelDr1, KPROCESSOR_STATE, SpecialRegisters.KernelDr1),
OFFSET(PsKernelDr2, KPROCESSOR_STATE, SpecialRegisters.KernelDr2),
OFFSET(PsKernelDr3, KPROCESSOR_STATE, SpecialRegisters.KernelDr3),
OFFSET(PsKernelDr6, KPROCESSOR_STATE, SpecialRegisters.KernelDr6),
OFFSET(PsKernelDr7, KPROCESSOR_STATE, SpecialRegisters.KernelDr7),
OFFSET(PsGdtr, KPROCESSOR_STATE, SpecialRegisters.Gdtr),
OFFSET(PsIdtr, KPROCESSOR_STATE, SpecialRegisters.Idtr),
OFFSET(PsTr, KPROCESSOR_STATE, SpecialRegisters.Tr),
OFFSET(PsLdtr, KPROCESSOR_STATE, SpecialRegisters.Ldtr),
OFFSET(PsMxCsr, KPROCESSOR_STATE, SpecialRegisters.MxCsr),
OFFSET(PsContextFrame, KPROCESSOR_STATE, ContextFrame),
OFFSET(PsDebugControl, KPROCESSOR_STATE, SpecialRegisters.DebugControl),
OFFSET(PsLastBranchToRip, KPROCESSOR_STATE, SpecialRegisters.LastBranchToRip),
OFFSET(PsLastBranchFromRip, KPROCESSOR_STATE, SpecialRegisters.LastBranchFromRip),
OFFSET(PsLastExceptionToRip, KPROCESSOR_STATE, SpecialRegisters.LastExceptionToRip),
OFFSET(PsLastExceptionFromRip, KPROCESSOR_STATE, SpecialRegisters.LastExceptionFromRip),
OFFSET(PsCr8, KPROCESSOR_STATE, SpecialRegisters.Cr8),
SIZE(ProcessorStateLength, KPROCESSOR_STATE),

HEADER("KSTART_FRAME"),
OFFSET(SfP1Home, KSTART_FRAME, P1Home),
OFFSET(SfP2Home, KSTART_FRAME, P2Home),
OFFSET(SfP3Home, KSTART_FRAME, P3Home),
OFFSET(SfP4Home, KSTART_FRAME, P4Home),
OFFSET(SfReturn, KSTART_FRAME, Return),
SIZE(KSTART_FRAME_LENGTH, KSTART_FRAME),

HEADER("KSPECIAL_REGISTERS"),
OFFSET(SrKernelDr0, KSPECIAL_REGISTERS, KernelDr0),
OFFSET(SrKernelDr1, KSPECIAL_REGISTERS, KernelDr1),
OFFSET(SrKernelDr2, KSPECIAL_REGISTERS, KernelDr2),
OFFSET(SrKernelDr3, KSPECIAL_REGISTERS, KernelDr3),
OFFSET(SrKernelDr6, KSPECIAL_REGISTERS, KernelDr6),
OFFSET(SrKernelDr7, KSPECIAL_REGISTERS, KernelDr7),
OFFSET(SrGdtr, KSPECIAL_REGISTERS, Gdtr),
OFFSET(SrIdtr, KSPECIAL_REGISTERS, Idtr),
OFFSET(SrTr, KSPECIAL_REGISTERS, Tr),
OFFSET(SrMxCsr, KSPECIAL_REGISTERS, MxCsr),
OFFSET(SrMsrGsBase, KSPECIAL_REGISTERS, MsrGsBase),
OFFSET(SrMsrGsSwap, KSPECIAL_REGISTERS, MsrGsSwap),
OFFSET(SrMsrStar, KSPECIAL_REGISTERS, MsrStar),
OFFSET(SrMsrLStar, KSPECIAL_REGISTERS, MsrLStar),
OFFSET(SrMsrCStar, KSPECIAL_REGISTERS, MsrCStar),
OFFSET(SrMsrSyscallMask, KSPECIAL_REGISTERS, MsrSyscallMask),

HEADER("KSYSTEM_TIME"),
OFFSET(StLowTime, KSYSTEM_TIME, LowPart),
OFFSET(StHigh1Time, KSYSTEM_TIME, High1Time),
OFFSET(StHigh2Time, KSYSTEM_TIME, High2Time),

HEADER("KSWITCH_FRAME"),
OFFSET(SwP5Home, KSWITCH_FRAME, P5Home),
OFFSET(SwApcBypass, KSWITCH_FRAME, ApcBypass),
OFFSET(SwRbp, KSWITCH_FRAME, Rbp),
OFFSET(SwReturn, KSWITCH_FRAME, Return),
SIZE(SwitchFrameLength, KSWITCH_FRAME),
SIZE(KSWITCH_FRAME_LENGTH, KSWITCH_FRAME),

HEADER("KTRAP_FRAME"),
OFFSET(TrP1Home, KTRAP_FRAME, P1Home),
OFFSET(TrP2Home, KTRAP_FRAME, P2Home),
OFFSET(TrP3Home, KTRAP_FRAME, P3Home),
OFFSET(TrP4Home, KTRAP_FRAME, P4Home),
OFFSET(TrP5, KTRAP_FRAME, P5),
OFFSET(TrPreviousMode, KTRAP_FRAME, PreviousMode),
OFFSET(TrPreviousIrql, KTRAP_FRAME, PreviousIrql),
OFFSET(TrFaultIndicator, KTRAP_FRAME, FaultIndicator),
OFFSET(TrExceptionActive, KTRAP_FRAME, ExceptionActive),
OFFSET(TrMxCsr, KTRAP_FRAME, MxCsr),
OFFSET(TrRax, KTRAP_FRAME, Rax),
OFFSET(TrRcx, KTRAP_FRAME, Rcx),
OFFSET(TrRdx, KTRAP_FRAME, Rdx),
OFFSET(TrR8, KTRAP_FRAME, R8),
OFFSET(TrR9, KTRAP_FRAME, R9),
OFFSET(TrR10, KTRAP_FRAME, R10),
OFFSET(TrR11, KTRAP_FRAME, R11),
OFFSET(TrGsBase, KTRAP_FRAME, GsBase),
OFFSET(TrGsSwap, KTRAP_FRAME,GsSwap),
OFFSET(TrXmm0, KTRAP_FRAME, Xmm0),
OFFSET(TrXmm1, KTRAP_FRAME, Xmm1),
OFFSET(TrXmm2, KTRAP_FRAME, Xmm2),
OFFSET(TrXmm3, KTRAP_FRAME, Xmm3),
OFFSET(TrXmm4, KTRAP_FRAME, Xmm4),
OFFSET(TrXmm5, KTRAP_FRAME, Xmm5),
OFFSET(TrFaultAddress, KTRAP_FRAME, FaultAddress),
OFFSET(TrTimeStampCKCL, KTRAP_FRAME, TimeStampCKCL),
OFFSET(TrDr0, KTRAP_FRAME, Dr0),
OFFSET(TrDr1, KTRAP_FRAME, Dr1),
OFFSET(TrDr2, KTRAP_FRAME, Dr2),
OFFSET(TrDr3, KTRAP_FRAME, Dr3),
OFFSET(TrDr6, KTRAP_FRAME, Dr6),
OFFSET(TrDr7, KTRAP_FRAME, Dr7),
OFFSET(TrDebugControl, KTRAP_FRAME, DebugControl),
OFFSET(TrLastBranchToRip, KTRAP_FRAME, LastBranchToRip),
OFFSET(TrLastBranchFromRip, KTRAP_FRAME, LastBranchFromRip),
OFFSET(TrLastExceptionToRip, KTRAP_FRAME, LastExceptionToRip),
OFFSET(TrLastExceptionFromRip, KTRAP_FRAME, LastExceptionFromRip),
OFFSET(TrLastBranchControl, KTRAP_FRAME, LastBranchControl),
OFFSET(TrLastBranchMSR, KTRAP_FRAME, LastBranchMSR),
OFFSET(TrSegDs, KTRAP_FRAME, SegDs),
OFFSET(TrSegEs, KTRAP_FRAME, SegEs),
OFFSET(TrSegFs, KTRAP_FRAME, SegFs),
OFFSET(TrSegGs, KTRAP_FRAME, SegGs),
OFFSET(TrTrapFrame, KTRAP_FRAME, TrapFrame),
OFFSET(TrRbx, KTRAP_FRAME, Rbx),
OFFSET(TrRdi, KTRAP_FRAME, Rdi),
OFFSET(TrRsi, KTRAP_FRAME, Rsi),
OFFSET(TrRbp, KTRAP_FRAME, Rbp),
OFFSET(TrErrorCode, KTRAP_FRAME, ErrorCode),
OFFSET(TrTimeStampKlog, KTRAP_FRAME, TimeStampKlog),
OFFSET(TrRip, KTRAP_FRAME, Rip),
OFFSET(TrSegCs, KTRAP_FRAME, SegCs),
OFFSET(TrLogging, KTRAP_FRAME, Logging),
OFFSET(TrEFlags, KTRAP_FRAME, EFlags),
OFFSET(TrRsp, KTRAP_FRAME, Rsp),
OFFSET(TrSegSs, KTRAP_FRAME, SegSs),
OFFSET(TrCodePatchCycle, KTRAP_FRAME, CodePatchCycle),
SIZE(KTRAP_FRAME_LENGTH, KTRAP_FRAME),

HEADER("KTIMER_TABLE"),
OFFSET(TtEntry, KTIMER_TABLE, TimerEntries),
OFFSET(TtTime, KTIMER_TABLE_ENTRY, Time),
SIZE(TIMER_ENTRY_SIZE, KTIMER_TABLE_ENTRY),
SIZE(TIMER_TABLE_SIZE, KTIMER_TABLE),
SIZE(KTIMER_TABLE_SIZE, KTIMER_TABLE),

HEADER("KTSS"),
OFFSET(TssRsp0, KTSS64, Rsp0),
OFFSET(TssRsp1, KTSS64, Rsp1),
OFFSET(TssRsp2, KTSS64, Rsp2),
OFFSET(TssPanicStack, KTSS64, Ist[1]),
OFFSET(TssMcaStack, KTSS64, Ist[2]),
OFFSET(TssNmiStack, KTSS64, Ist[3]),
OFFSET(TssIoMapBase, KTSS64, IoMapBase),
SIZE(TssLength, KTSS64),

