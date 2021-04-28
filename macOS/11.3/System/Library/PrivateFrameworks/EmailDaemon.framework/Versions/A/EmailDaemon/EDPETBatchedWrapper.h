/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDPETQuotaReachedEvent, NSData, EDPETSubmittedEvent;

@interface EDPETBatchedWrapper : PBCodable <NSCopying> {

	EDPETQuotaReachedEvent* _quotaEvent;
	NSData* _rawData;
	EDPETSubmittedEvent* _submittedEvent;

}

@property (nonatomic,readonly) char hasQuotaEvent; 
@property (nonatomic,retain) EDPETQuotaReachedEvent * quotaEvent;               //@synthesize quotaEvent=_quotaEvent - In the implementation block
@property (nonatomic,readonly) char hasSubmittedEvent; 
@property (nonatomic,retain) EDPETSubmittedEvent * submittedEvent;              //@synthesize submittedEvent=_submittedEvent - In the implementation block
@property (nonatomic,readonly) char hasRawData; 
@property (nonatomic,retain) NSData * rawData;                                  //@synthesize rawData=_rawData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(void)setQuotaEvent:(EDPETQuotaReachedEvent *)arg1 ;
-(void)setSubmittedEvent:(EDPETSubmittedEvent *)arg1 ;
-(char)hasQuotaEvent;
-(char)hasSubmittedEvent;
-(char)hasRawData;
-(EDPETQuotaReachedEvent *)quotaEvent;
-(EDPETSubmittedEvent *)submittedEvent;
@end

