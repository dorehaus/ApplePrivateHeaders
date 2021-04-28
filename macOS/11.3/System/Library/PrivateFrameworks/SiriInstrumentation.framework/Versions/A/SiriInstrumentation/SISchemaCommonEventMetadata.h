/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaLogicalTimestamp, NSData;

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {

	SISchemaLogicalTimestamp* _timestamp;
	char _hasTimestamp;

}

@property (nonatomic,retain) SISchemaLogicalTimestamp * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasTimestamp;                                 //@synthesize hasTimestamp=_hasTimestamp - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(SISchemaLogicalTimestamp *)timestamp;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(SISchemaLogicalTimestamp *)arg1 ;
-(char)hasTimestamp;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(NSData *)jsonData;
@end

