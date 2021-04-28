/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCameraStreamMessaging, AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraStreamConfigure, AWDHomeKitCameraStreamIDSConnSetup, NSMutableArray, NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitCameraStream : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _startupDelay;
	unsigned long long _timestamp;
	int _certified;
	AWDHomeKitCameraStreamMessaging* _controllerMessaging;
	unsigned _errorCode;
	AWDHomeKitCameraIDSSessionSetup* _idsSessionSetup;
	AWDHomeKitCameraStreamConfigure* _initialConfiguration;
	AWDHomeKitCameraStreamIDSConnSetup* _phoneIDSConnectionSetup;
	unsigned _receivedFirstFrame;
	NSMutableArray* _reconfigurations;
	AWDHomeKitCameraStreamMessaging* _residentMessaging;
	NSMutableArray* _resolutionCounts;
	int _resolutionOnClose;
	NSString* _sessionID;
	unsigned _underlyingErrorCode;
	NSString* _underlyingErrorDomain;
	AWDHomeKitVendorInformation* _vendorDetails;
	AWDHomeKitCameraStreamIDSConnSetup* _watchIDSConnectionSetup;
	AWDHomeKitCameraStreamMessaging* _watchMessaging;
	char _isLocal;
	char _isStreamStarted;
	SCD_Struct_AW15 _has;

}

@property (nonatomic,readonly) char hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;                               //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) char hasCertified; 
@property (assign,nonatomic) int certified;                                                             //@synthesize certified=_certified - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                                        //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasIsLocal; 
@property (assign,nonatomic) char isLocal;                                                              //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) char hasInitialConfiguration; 
@property (nonatomic,retain) AWDHomeKitCameraStreamConfigure * initialConfiguration;                    //@synthesize initialConfiguration=_initialConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * reconfigurations;                                         //@synthesize reconfigurations=_reconfigurations - In the implementation block
@property (nonatomic,readonly) char hasWatchIDSConnectionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetup * watchIDSConnectionSetup;              //@synthesize watchIDSConnectionSetup=_watchIDSConnectionSetup - In the implementation block
@property (nonatomic,readonly) char hasPhoneIDSConnectionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetup * phoneIDSConnectionSetup;              //@synthesize phoneIDSConnectionSetup=_phoneIDSConnectionSetup - In the implementation block
@property (nonatomic,readonly) char hasIdsSessionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraIDSSessionSetup * idsSessionSetup;                         //@synthesize idsSessionSetup=_idsSessionSetup - In the implementation block
@property (nonatomic,readonly) char hasWatchMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraStreamMessaging * watchMessaging;                          //@synthesize watchMessaging=_watchMessaging - In the implementation block
@property (nonatomic,readonly) char hasControllerMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraStreamMessaging * controllerMessaging;                     //@synthesize controllerMessaging=_controllerMessaging - In the implementation block
@property (nonatomic,readonly) char hasResidentMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraStreamMessaging * residentMessaging;                       //@synthesize residentMessaging=_residentMessaging - In the implementation block
@property (assign,nonatomic) char hasReceivedFirstFrame; 
@property (assign,nonatomic) unsigned receivedFirstFrame;                                               //@synthesize receivedFirstFrame=_receivedFirstFrame - In the implementation block
@property (nonatomic,readonly) char hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                                          //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) char hasUnderlyingErrorCode; 
@property (assign,nonatomic) unsigned underlyingErrorCode;                                              //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
@property (assign,nonatomic) char hasStartupDelay; 
@property (assign,nonatomic) unsigned long long startupDelay;                                           //@synthesize startupDelay=_startupDelay - In the implementation block
@property (assign,nonatomic) char hasIsStreamStarted; 
@property (assign,nonatomic) char isStreamStarted;                                                      //@synthesize isStreamStarted=_isStreamStarted - In the implementation block
@property (assign,nonatomic) char hasResolutionOnClose; 
@property (assign,nonatomic) int resolutionOnClose;                                                     //@synthesize resolutionOnClose=_resolutionOnClose - In the implementation block
@property (nonatomic,retain) NSMutableArray * resolutionCounts;                                         //@synthesize resolutionCounts=_resolutionCounts - In the implementation block
+(Class)reconfigurationsType;
+(Class)resolutionCountType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(char)hasTimestamp;
-(unsigned)errorCode;
-(char)isLocal;
-(char)hasSessionID;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
-(char)hasUnderlyingErrorDomain;
-(NSString *)underlyingErrorDomain;
-(void)setUnderlyingErrorCode:(unsigned)arg1 ;
-(void)setHasUnderlyingErrorCode:(char)arg1 ;
-(char)hasUnderlyingErrorCode;
-(unsigned)underlyingErrorCode;
-(void)setIsLocal:(char)arg1 ;
-(void)setHasIsLocal:(char)arg1 ;
-(char)hasIsLocal;
-(char)hasReceivedFirstFrame;
-(void)setHasReceivedFirstFrame:(char)arg1 ;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(char)hasVendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(char)arg1 ;
-(char)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
-(void)addResolutionCount:(id)arg1 ;
-(void)addReconfigurations:(id)arg1 ;
-(unsigned long long)resolutionCountsCount;
-(void)clearResolutionCounts;
-(id)resolutionCountAtIndex:(unsigned long long)arg1 ;
-(void)setInitialConfiguration:(AWDHomeKitCameraStreamConfigure *)arg1 ;
-(unsigned long long)reconfigurationsCount;
-(void)clearReconfigurations;
-(id)reconfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setWatchIDSConnectionSetup:(AWDHomeKitCameraStreamIDSConnSetup *)arg1 ;
-(void)setPhoneIDSConnectionSetup:(AWDHomeKitCameraStreamIDSConnSetup *)arg1 ;
-(void)setIdsSessionSetup:(AWDHomeKitCameraIDSSessionSetup *)arg1 ;
-(void)setWatchMessaging:(AWDHomeKitCameraStreamMessaging *)arg1 ;
-(void)setControllerMessaging:(AWDHomeKitCameraStreamMessaging *)arg1 ;
-(void)setResidentMessaging:(AWDHomeKitCameraStreamMessaging *)arg1 ;
-(char)hasInitialConfiguration;
-(char)hasWatchIDSConnectionSetup;
-(char)hasPhoneIDSConnectionSetup;
-(char)hasIdsSessionSetup;
-(char)hasWatchMessaging;
-(char)hasControllerMessaging;
-(char)hasResidentMessaging;
-(void)setReceivedFirstFrame:(unsigned)arg1 ;
-(void)setStartupDelay:(unsigned long long)arg1 ;
-(void)setHasStartupDelay:(char)arg1 ;
-(char)hasStartupDelay;
-(void)setIsStreamStarted:(char)arg1 ;
-(void)setHasIsStreamStarted:(char)arg1 ;
-(char)hasIsStreamStarted;
-(int)resolutionOnClose;
-(void)setResolutionOnClose:(int)arg1 ;
-(void)setHasResolutionOnClose:(char)arg1 ;
-(char)hasResolutionOnClose;
-(id)resolutionOnCloseAsString:(int)arg1 ;
-(int)StringAsResolutionOnClose:(id)arg1 ;
-(AWDHomeKitCameraStreamConfigure *)initialConfiguration;
-(NSMutableArray *)reconfigurations;
-(void)setReconfigurations:(NSMutableArray *)arg1 ;
-(AWDHomeKitCameraStreamIDSConnSetup *)watchIDSConnectionSetup;
-(AWDHomeKitCameraStreamIDSConnSetup *)phoneIDSConnectionSetup;
-(AWDHomeKitCameraIDSSessionSetup *)idsSessionSetup;
-(AWDHomeKitCameraStreamMessaging *)watchMessaging;
-(AWDHomeKitCameraStreamMessaging *)controllerMessaging;
-(AWDHomeKitCameraStreamMessaging *)residentMessaging;
-(unsigned)receivedFirstFrame;
-(unsigned long long)startupDelay;
-(char)isStreamStarted;
-(NSMutableArray *)resolutionCounts;
-(void)setResolutionCounts:(NSMutableArray *)arg1 ;
@end

