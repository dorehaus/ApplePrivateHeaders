/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <AudioResourceArbitration/aura_ConfigurationChangeRequest.h>

@class aura_IOTopology;

@interface aura_ManualConfigurationChangeRequest : aura_ConfigurationChangeRequest {

	aura_IOTopology* _ioTopology;
	optional<aura_ConfigurationHints *> _hints;
	optional<std::__1::weak_ptr<aura::VirtualPort>>* _masterVirtualPort;
	optional<std::__1::tuple<std::__1::weak_ptr<aura::Box>, bool>>* _boxAcquisitionPreferences;

}

@property (nonatomic,retain) aura_IOTopology * ioTopology;                                                                  //@synthesize ioTopology=_ioTopology - In the implementation block
@property (assign,nonatomic) optional<std::__1::weak_ptr<aura::VirtualPort>>* masterVirtualPort;                            //@synthesize masterVirtualPort=_masterVirtualPort - In the implementation block
@property (assign,nonatomic) optional<aura_ConfigurationHints *> hints;                                                     //@synthesize hints=_hints - In the implementation block
@property (assign,nonatomic) optional<std::__1::tuple<std::__1::weak_ptr<aura::Box> boxAcquisitionPreferences;              //@synthesize boxAcquisitionPreferences=_boxAcquisitionPreferences - In the implementation block
+(id)manualConfigurationChangeRequestWithSessionToken:(unsigned)arg1 priority:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(optional<aura_ConfigurationHints *>)hints;
-(optional<std::__1::tuple<std::__1::weak_ptr<aura::Box>)boxAcquisitionPreferences;
-(id)initWithSessionToken:(unsigned)arg1 priority:(unsigned)arg2 ;
-(void)setHints:(optional<aura_ConfigurationHints *>)arg1 ;
-(void)setBoxAcquisitionPreferences:(optional<std::__1::tuple<std::__1::weak_ptr<aura::Box>)arg1 ;
-(aura_IOTopology *)ioTopology;
-(void)setIoTopology:(aura_IOTopology *)arg1 ;
-(optional<std::__1::weak_ptr<aura::VirtualPort>>*)masterVirtualPort;
-(void)setMasterVirtualPort:(optional<std::__1::weak_ptr<aura::VirtualPort>>*)arg1 ;
@end

