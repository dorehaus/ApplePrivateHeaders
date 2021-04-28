/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCameraRecordingUploadOperation : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _operationStartTime;
	unsigned long long _retryCount;
	unsigned long long _runTime;
	unsigned long long _timestamp;
	unsigned long long _totalClipDuration;
	NSString* _clipModelUUID;
	NSString* _errorDomain;
	int _operationType;
	char _didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasClipModelUUID; 
@property (nonatomic,retain) NSString * clipModelUUID;                                                      //@synthesize clipModelUUID=_clipModelUUID - In the implementation block
@property (assign,nonatomic) char hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded; 
@property (assign,nonatomic) char didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;                 //@synthesize didCausePreviousClipToFinalizeBecauseMaxDurationExceeded=_didCausePreviousClipToFinalizeBecauseMaxDurationExceeded - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                                           //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasTotalClipDuration; 
@property (assign,nonatomic) unsigned long long totalClipDuration;                                          //@synthesize totalClipDuration=_totalClipDuration - In the implementation block
@property (assign,nonatomic) char hasRunTime; 
@property (assign,nonatomic) unsigned long long runTime;                                                    //@synthesize runTime=_runTime - In the implementation block
@property (assign,nonatomic) char hasRetryCount; 
@property (assign,nonatomic) unsigned long long retryCount;                                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) char hasOperationType; 
@property (assign,nonatomic) int operationType;                                                             //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                                                        //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasOperationStartTime; 
@property (assign,nonatomic) unsigned long long operationStartTime;                                         //@synthesize operationStartTime=_operationStartTime - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)operationType;
-(void)setOperationType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)retryCount;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(unsigned long long)runTime;
-(void)setRunTime:(unsigned long long)arg1 ;
-(long long)errorCode;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)setHasRetryCount:(char)arg1 ;
-(char)hasRetryCount;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(NSString *)errorDomain;
-(char)hasErrorDomain;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(char)hasOperationType;
-(void)setHasOperationType:(char)arg1 ;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(unsigned long long)operationStartTime;
-(void)setOperationStartTime:(unsigned long long)arg1 ;
-(void)setClipModelUUID:(NSString *)arg1 ;
-(char)hasClipModelUUID;
-(void)setDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded:(char)arg1 ;
-(void)setHasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded:(char)arg1 ;
-(char)hasDidCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
-(void)setTotalClipDuration:(unsigned long long)arg1 ;
-(void)setHasTotalClipDuration:(char)arg1 ;
-(char)hasTotalClipDuration;
-(void)setHasRunTime:(char)arg1 ;
-(char)hasRunTime;
-(void)setHasOperationStartTime:(char)arg1 ;
-(char)hasOperationStartTime;
-(NSString *)clipModelUUID;
-(char)didCausePreviousClipToFinalizeBecauseMaxDurationExceeded;
-(unsigned long long)totalClipDuration;
@end

