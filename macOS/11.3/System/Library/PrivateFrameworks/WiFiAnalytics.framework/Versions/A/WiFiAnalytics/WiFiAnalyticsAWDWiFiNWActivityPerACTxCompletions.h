/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityPerACTxCompletions : PBCodable <NSCopying> {

	int _ac;
	unsigned _dpsNotifications;
	unsigned _durSinceLastEnqueue;
	unsigned _durSinceLastEnqueueAtLastCheck;
	unsigned _durSinceLastFailedComp;
	unsigned _durSinceLastSuccessfulComp;
	unsigned _expiredComp;
	unsigned _failedComp;
	unsigned _failedCompletionsAtLastCheck;
	unsigned _noAckComp;
	unsigned _otherErrComp;
	unsigned _qeuedPackets;
	unsigned _sinceLastEnqueueHowManyFailed;
	unsigned _sinceLastEnqueueHowManySuccess;
	unsigned _sinceLastSuccessHowManyFailed;
	unsigned _success;
	unsigned _successfulCompletionsAtLastCheck;
	SCD_Struct_Wi4 _has;

}

@property (assign,nonatomic) char hasAc; 
@property (assign,nonatomic) int ac;                                                 //@synthesize ac=_ac - In the implementation block
@property (assign,nonatomic) char hasSuccess; 
@property (assign,nonatomic) unsigned success;                                       //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) char hasDurSinceLastSuccessfulComp; 
@property (assign,nonatomic) unsigned durSinceLastSuccessfulComp;                    //@synthesize durSinceLastSuccessfulComp=_durSinceLastSuccessfulComp - In the implementation block
@property (assign,nonatomic) char hasFailedComp; 
@property (assign,nonatomic) unsigned failedComp;                                    //@synthesize failedComp=_failedComp - In the implementation block
@property (assign,nonatomic) char hasDurSinceLastFailedComp; 
@property (assign,nonatomic) unsigned durSinceLastFailedComp;                        //@synthesize durSinceLastFailedComp=_durSinceLastFailedComp - In the implementation block
@property (assign,nonatomic) char hasExpiredComp; 
@property (assign,nonatomic) unsigned expiredComp;                                   //@synthesize expiredComp=_expiredComp - In the implementation block
@property (assign,nonatomic) char hasNoAckComp; 
@property (assign,nonatomic) unsigned noAckComp;                                     //@synthesize noAckComp=_noAckComp - In the implementation block
@property (assign,nonatomic) char hasOtherErrComp; 
@property (assign,nonatomic) unsigned otherErrComp;                                  //@synthesize otherErrComp=_otherErrComp - In the implementation block
@property (assign,nonatomic) char hasDurSinceLastEnqueue; 
@property (assign,nonatomic) unsigned durSinceLastEnqueue;                           //@synthesize durSinceLastEnqueue=_durSinceLastEnqueue - In the implementation block
@property (assign,nonatomic) char hasQeuedPackets; 
@property (assign,nonatomic) unsigned qeuedPackets;                                  //@synthesize qeuedPackets=_qeuedPackets - In the implementation block
@property (assign,nonatomic) char hasSinceLastEnqueueHowManyFailed; 
@property (assign,nonatomic) unsigned sinceLastEnqueueHowManyFailed;                 //@synthesize sinceLastEnqueueHowManyFailed=_sinceLastEnqueueHowManyFailed - In the implementation block
@property (assign,nonatomic) char hasSinceLastEnqueueHowManySuccess; 
@property (assign,nonatomic) unsigned sinceLastEnqueueHowManySuccess;                //@synthesize sinceLastEnqueueHowManySuccess=_sinceLastEnqueueHowManySuccess - In the implementation block
@property (assign,nonatomic) char hasSinceLastSuccessHowManyFailed; 
@property (assign,nonatomic) unsigned sinceLastSuccessHowManyFailed;                 //@synthesize sinceLastSuccessHowManyFailed=_sinceLastSuccessHowManyFailed - In the implementation block
@property (assign,nonatomic) char hasDurSinceLastEnqueueAtLastCheck; 
@property (assign,nonatomic) unsigned durSinceLastEnqueueAtLastCheck;                //@synthesize durSinceLastEnqueueAtLastCheck=_durSinceLastEnqueueAtLastCheck - In the implementation block
@property (assign,nonatomic) char hasSuccessfulCompletionsAtLastCheck; 
@property (assign,nonatomic) unsigned successfulCompletionsAtLastCheck;              //@synthesize successfulCompletionsAtLastCheck=_successfulCompletionsAtLastCheck - In the implementation block
@property (assign,nonatomic) char hasFailedCompletionsAtLastCheck; 
@property (assign,nonatomic) unsigned failedCompletionsAtLastCheck;                  //@synthesize failedCompletionsAtLastCheck=_failedCompletionsAtLastCheck - In the implementation block
@property (assign,nonatomic) char hasDpsNotifications; 
@property (assign,nonatomic) unsigned dpsNotifications;                              //@synthesize dpsNotifications=_dpsNotifications - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)success;
-(void)setSuccess:(unsigned)arg1 ;
-(char)hasSuccess;
-(void)setHasSuccess:(char)arg1 ;
-(int)ac;
-(void)setAc:(int)arg1 ;
-(void)setHasAc:(char)arg1 ;
-(char)hasAc;
-(id)acAsString:(int)arg1 ;
-(int)StringAsAc:(id)arg1 ;
-(void)setDurSinceLastSuccessfulComp:(unsigned)arg1 ;
-(void)setHasDurSinceLastSuccessfulComp:(char)arg1 ;
-(char)hasDurSinceLastSuccessfulComp;
-(void)setFailedComp:(unsigned)arg1 ;
-(void)setHasFailedComp:(char)arg1 ;
-(char)hasFailedComp;
-(void)setDurSinceLastFailedComp:(unsigned)arg1 ;
-(void)setHasDurSinceLastFailedComp:(char)arg1 ;
-(char)hasDurSinceLastFailedComp;
-(void)setExpiredComp:(unsigned)arg1 ;
-(void)setHasExpiredComp:(char)arg1 ;
-(char)hasExpiredComp;
-(void)setNoAckComp:(unsigned)arg1 ;
-(void)setHasNoAckComp:(char)arg1 ;
-(char)hasNoAckComp;
-(void)setOtherErrComp:(unsigned)arg1 ;
-(void)setHasOtherErrComp:(char)arg1 ;
-(char)hasOtherErrComp;
-(void)setDurSinceLastEnqueue:(unsigned)arg1 ;
-(void)setHasDurSinceLastEnqueue:(char)arg1 ;
-(char)hasDurSinceLastEnqueue;
-(void)setQeuedPackets:(unsigned)arg1 ;
-(void)setHasQeuedPackets:(char)arg1 ;
-(char)hasQeuedPackets;
-(void)setSinceLastEnqueueHowManyFailed:(unsigned)arg1 ;
-(void)setHasSinceLastEnqueueHowManyFailed:(char)arg1 ;
-(char)hasSinceLastEnqueueHowManyFailed;
-(void)setSinceLastEnqueueHowManySuccess:(unsigned)arg1 ;
-(void)setHasSinceLastEnqueueHowManySuccess:(char)arg1 ;
-(char)hasSinceLastEnqueueHowManySuccess;
-(void)setSinceLastSuccessHowManyFailed:(unsigned)arg1 ;
-(void)setHasSinceLastSuccessHowManyFailed:(char)arg1 ;
-(char)hasSinceLastSuccessHowManyFailed;
-(void)setDurSinceLastEnqueueAtLastCheck:(unsigned)arg1 ;
-(void)setHasDurSinceLastEnqueueAtLastCheck:(char)arg1 ;
-(char)hasDurSinceLastEnqueueAtLastCheck;
-(void)setSuccessfulCompletionsAtLastCheck:(unsigned)arg1 ;
-(void)setHasSuccessfulCompletionsAtLastCheck:(char)arg1 ;
-(char)hasSuccessfulCompletionsAtLastCheck;
-(void)setFailedCompletionsAtLastCheck:(unsigned)arg1 ;
-(void)setHasFailedCompletionsAtLastCheck:(char)arg1 ;
-(char)hasFailedCompletionsAtLastCheck;
-(void)setDpsNotifications:(unsigned)arg1 ;
-(void)setHasDpsNotifications:(char)arg1 ;
-(char)hasDpsNotifications;
-(unsigned)durSinceLastSuccessfulComp;
-(unsigned)failedComp;
-(unsigned)durSinceLastFailedComp;
-(unsigned)expiredComp;
-(unsigned)noAckComp;
-(unsigned)otherErrComp;
-(unsigned)durSinceLastEnqueue;
-(unsigned)qeuedPackets;
-(unsigned)sinceLastEnqueueHowManyFailed;
-(unsigned)sinceLastEnqueueHowManySuccess;
-(unsigned)sinceLastSuccessHowManyFailed;
-(unsigned)durSinceLastEnqueueAtLastCheck;
-(unsigned)successfulCompletionsAtLastCheck;
-(unsigned)failedCompletionsAtLastCheck;
-(unsigned)dpsNotifications;
@end
