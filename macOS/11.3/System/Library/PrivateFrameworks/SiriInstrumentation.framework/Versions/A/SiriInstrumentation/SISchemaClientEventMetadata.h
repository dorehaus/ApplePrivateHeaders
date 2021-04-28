/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, NSString;

@interface SISchemaClientEventMetadata : SISchemaInstrumentationMessage {

	NSData* _turnID;
	NSData* _siriDeviceID;
	NSString* _eventGeneratedTimestampRefId;
	long long _eventGeneratedRelativeToBootTimeTimestampNs;
	SCD_Struct_SI0 _has;
	char _hasTurnID;
	char _hasSiriDeviceID;
	char _hasEventGeneratedTimestampRefId;

}

@property (nonatomic,copy) NSData * turnID;                                                      //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) char hasTurnID;                                                     //@synthesize hasTurnID=_hasTurnID - In the implementation block
@property (nonatomic,copy) NSData * siriDeviceID;                                                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (assign,nonatomic) char hasSiriDeviceID;                                               //@synthesize hasSiriDeviceID=_hasSiriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * eventGeneratedTimestampRefId;                              //@synthesize eventGeneratedTimestampRefId=_eventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) char hasEventGeneratedTimestampRefId;                               //@synthesize hasEventGeneratedTimestampRefId=_hasEventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;              //@synthesize eventGeneratedRelativeToBootTimeTimestampNs=_eventGeneratedRelativeToBootTimeTimestampNs - In the implementation block
@property (assign,nonatomic) char hasEventGeneratedRelativeToBootTimeTimestampNs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(NSData *)turnID;
-(void)setTurnID:(NSData *)arg1 ;
-(char)hasTurnID;
-(void)setSiriDeviceID:(NSData *)arg1 ;
-(void)setEventGeneratedTimestampRefId:(NSString *)arg1 ;
-(void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSData *)siriDeviceID;
-(NSString *)eventGeneratedTimestampRefId;
-(long long)eventGeneratedRelativeToBootTimeTimestampNs;
-(char)hasSiriDeviceID;
-(char)hasEventGeneratedTimestampRefId;
-(char)hasEventGeneratedRelativeToBootTimeTimestampNs;
-(void)setHasEventGeneratedRelativeToBootTimeTimestampNs:(char)arg1 ;
-(void)setHasTurnID:(char)arg1 ;
-(void)setHasSiriDeviceID:(char)arg1 ;
-(void)setHasEventGeneratedTimestampRefId:(char)arg1 ;
@end
