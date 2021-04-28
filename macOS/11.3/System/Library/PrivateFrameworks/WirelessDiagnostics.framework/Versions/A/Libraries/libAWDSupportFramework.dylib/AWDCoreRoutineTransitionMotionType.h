/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineTransitionMotionType : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned _coreRoutineTransitionMotionTypeAutomotive;
	unsigned _coreRoutineTransitionMotionTypeCycling;
	unsigned _coreRoutineTransitionMotionTypeRunning;
	unsigned _coreRoutineTransitionMotionTypeStationary;
	unsigned _coreRoutineTransitionMotionTypeUnknown;
	unsigned _coreRoutineTransitionMotionTypeWalking;
	SCD_Struct_AW9 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasCoreRoutineTransitionMotionTypeStationary; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeStationary;              //@synthesize coreRoutineTransitionMotionTypeStationary=_coreRoutineTransitionMotionTypeStationary - In the implementation block
@property (assign,nonatomic) char hasCoreRoutineTransitionMotionTypeWalking; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeWalking;                 //@synthesize coreRoutineTransitionMotionTypeWalking=_coreRoutineTransitionMotionTypeWalking - In the implementation block
@property (assign,nonatomic) char hasCoreRoutineTransitionMotionTypeRunning; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeRunning;                 //@synthesize coreRoutineTransitionMotionTypeRunning=_coreRoutineTransitionMotionTypeRunning - In the implementation block
@property (assign,nonatomic) char hasCoreRoutineTransitionMotionTypeAutomotive; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeAutomotive;              //@synthesize coreRoutineTransitionMotionTypeAutomotive=_coreRoutineTransitionMotionTypeAutomotive - In the implementation block
@property (assign,nonatomic) char hasCoreRoutineTransitionMotionTypeCycling; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeCycling;                 //@synthesize coreRoutineTransitionMotionTypeCycling=_coreRoutineTransitionMotionTypeCycling - In the implementation block
@property (assign,nonatomic) char hasCoreRoutineTransitionMotionTypeUnknown; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeUnknown;                 //@synthesize coreRoutineTransitionMotionTypeUnknown=_coreRoutineTransitionMotionTypeUnknown - In the implementation block
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCoreRoutineTransitionMotionTypeStationary:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeStationary:(char)arg1 ;
-(char)hasCoreRoutineTransitionMotionTypeStationary;
-(void)setCoreRoutineTransitionMotionTypeWalking:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeWalking:(char)arg1 ;
-(char)hasCoreRoutineTransitionMotionTypeWalking;
-(void)setCoreRoutineTransitionMotionTypeRunning:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeRunning:(char)arg1 ;
-(char)hasCoreRoutineTransitionMotionTypeRunning;
-(void)setCoreRoutineTransitionMotionTypeAutomotive:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeAutomotive:(char)arg1 ;
-(char)hasCoreRoutineTransitionMotionTypeAutomotive;
-(void)setCoreRoutineTransitionMotionTypeCycling:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeCycling:(char)arg1 ;
-(char)hasCoreRoutineTransitionMotionTypeCycling;
-(void)setCoreRoutineTransitionMotionTypeUnknown:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeUnknown:(char)arg1 ;
-(char)hasCoreRoutineTransitionMotionTypeUnknown;
-(unsigned)coreRoutineTransitionMotionTypeStationary;
-(unsigned)coreRoutineTransitionMotionTypeWalking;
-(unsigned)coreRoutineTransitionMotionTypeRunning;
-(unsigned)coreRoutineTransitionMotionTypeAutomotive;
-(unsigned)coreRoutineTransitionMotionTypeCycling;
-(unsigned)coreRoutineTransitionMotionTypeUnknown;
@end

