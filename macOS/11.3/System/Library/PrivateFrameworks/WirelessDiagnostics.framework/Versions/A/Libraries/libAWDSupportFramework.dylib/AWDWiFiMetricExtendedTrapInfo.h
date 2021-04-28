/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricExtendedTrapInfo : PBCodable <NSCopying> {

	SCD_Struct_AW21* _backplanes;
	SCD_Struct_AW21* _bus;
	SCD_Struct_AW21* _deepSleeps;
	SCD_Struct_AW21* _macEnabs;
	SCD_Struct_AW21* _macs;
	SCD_Struct_AW21* _memoryDumps;
	SCD_Struct_AW21* _pcieQueueStates;
	SCD_Struct_AW21* _phyTxErrThreshs;
	SCD_Struct_AW21* _phys;
	SCD_Struct_AW21* _psmWDs;
	SCD_Struct_AW21* _signatures;
	SCD_Struct_AW21* _stackTraces;
	SCD_Struct_AW21* _ucodeErrors;
	SCD_Struct_AW21* _wlcStates;
	unsigned _sequence;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) char hasSequence; 
@property (assign,nonatomic) unsigned sequence;                                      //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) unsigned long long signaturesCount; 
@property (nonatomic,readonly) unsigned* signatures; 
@property (nonatomic,readonly) unsigned long long stackTracesCount; 
@property (nonatomic,readonly) unsigned* stackTraces; 
@property (nonatomic,readonly) unsigned long long ucodeErrorsCount; 
@property (nonatomic,readonly) unsigned* ucodeErrors; 
@property (nonatomic,readonly) unsigned long long memoryDumpsCount; 
@property (nonatomic,readonly) unsigned* memoryDumps; 
@property (nonatomic,readonly) unsigned long long deepSleepsCount; 
@property (nonatomic,readonly) unsigned* deepSleeps; 
@property (nonatomic,readonly) unsigned long long psmWDsCount; 
@property (nonatomic,readonly) unsigned* psmWDs; 
@property (nonatomic,readonly) unsigned long long physCount; 
@property (nonatomic,readonly) unsigned* phys; 
@property (nonatomic,readonly) unsigned long long busCount; 
@property (nonatomic,readonly) unsigned* bus; 
@property (nonatomic,readonly) unsigned long long macsCount; 
@property (nonatomic,readonly) unsigned* macs; 
@property (nonatomic,readonly) unsigned long long backplanesCount; 
@property (nonatomic,readonly) unsigned* backplanes; 
@property (nonatomic,readonly) unsigned long long pcieQueueStatesCount; 
@property (nonatomic,readonly) unsigned* pcieQueueStates; 
@property (nonatomic,readonly) unsigned long long wlcStatesCount; 
@property (nonatomic,readonly) unsigned* wlcStates; 
@property (nonatomic,readonly) unsigned long long macEnabsCount; 
@property (nonatomic,readonly) unsigned* macEnabs; 
@property (nonatomic,readonly) unsigned long long phyTxErrThreshsCount; 
@property (nonatomic,readonly) unsigned* phyTxErrThreshs; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)sequence;
-(id)dictionaryRepresentation;
-(void)setSequence:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)signaturesCount;
-(void)clearSignatures;
-(unsigned)signatureAtIndex:(unsigned long long)arg1 ;
-(void)addSignature:(unsigned)arg1 ;
-(unsigned long long)stackTracesCount;
-(void)clearStackTraces;
-(unsigned)stackTracesAtIndex:(unsigned long long)arg1 ;
-(void)addStackTraces:(unsigned)arg1 ;
-(unsigned long long)ucodeErrorsCount;
-(void)clearUcodeErrors;
-(unsigned)ucodeErrorsAtIndex:(unsigned long long)arg1 ;
-(void)addUcodeErrors:(unsigned)arg1 ;
-(unsigned long long)memoryDumpsCount;
-(void)clearMemoryDumps;
-(unsigned)memoryDumpAtIndex:(unsigned long long)arg1 ;
-(void)addMemoryDump:(unsigned)arg1 ;
-(unsigned long long)deepSleepsCount;
-(void)clearDeepSleeps;
-(unsigned)deepSleepAtIndex:(unsigned long long)arg1 ;
-(void)addDeepSleep:(unsigned)arg1 ;
-(unsigned long long)psmWDsCount;
-(void)clearPsmWDs;
-(unsigned)psmWDAtIndex:(unsigned long long)arg1 ;
-(void)addPsmWD:(unsigned)arg1 ;
-(unsigned long long)physCount;
-(void)clearPhys;
-(unsigned)phyAtIndex:(unsigned long long)arg1 ;
-(void)addPhy:(unsigned)arg1 ;
-(unsigned long long)busCount;
-(void)clearBus;
-(unsigned)busAtIndex:(unsigned long long)arg1 ;
-(void)addBus:(unsigned)arg1 ;
-(unsigned long long)macsCount;
-(void)clearMacs;
-(unsigned)macAtIndex:(unsigned long long)arg1 ;
-(void)addMac:(unsigned)arg1 ;
-(unsigned long long)backplanesCount;
-(void)clearBackplanes;
-(unsigned)backplaneAtIndex:(unsigned long long)arg1 ;
-(void)addBackplane:(unsigned)arg1 ;
-(unsigned long long)pcieQueueStatesCount;
-(void)clearPcieQueueStates;
-(unsigned)pcieQueueStateAtIndex:(unsigned long long)arg1 ;
-(void)addPcieQueueState:(unsigned)arg1 ;
-(unsigned long long)wlcStatesCount;
-(void)clearWlcStates;
-(unsigned)wlcStateAtIndex:(unsigned long long)arg1 ;
-(void)addWlcState:(unsigned)arg1 ;
-(unsigned long long)macEnabsCount;
-(void)clearMacEnabs;
-(unsigned)macEnabAtIndex:(unsigned long long)arg1 ;
-(void)addMacEnab:(unsigned)arg1 ;
-(unsigned long long)phyTxErrThreshsCount;
-(void)clearPhyTxErrThreshs;
-(unsigned)phyTxErrThreshAtIndex:(unsigned long long)arg1 ;
-(void)addPhyTxErrThresh:(unsigned)arg1 ;
-(void)setHasSequence:(char)arg1 ;
-(char)hasSequence;
-(unsigned*)signatures;
-(void)setSignatures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)stackTraces;
-(void)setStackTraces:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)ucodeErrors;
-(void)setUcodeErrors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)memoryDumps;
-(void)setMemoryDumps:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)deepSleeps;
-(void)setDeepSleeps:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)psmWDs;
-(void)setPsmWDs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)phys;
-(void)setPhys:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)bus;
-(void)setBus:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)macs;
-(void)setMacs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)backplanes;
-(void)setBackplanes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)pcieQueueStates;
-(void)setPcieQueueStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)wlcStates;
-(void)setWlcStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)macEnabs;
-(void)setMacEnabs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)phyTxErrThreshs;
-(void)setPhyTxErrThreshs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

