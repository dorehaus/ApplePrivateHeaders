/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaUUID, NSData;

@interface SISchemaABClientEventMetadata : SISchemaInstrumentationMessage {

	SISchemaUUID* _siriDeviceId;
	SISchemaUUID* _speechId;
	double _timeIntervalSince1970;
	SCD_Struct_SI0 _has;
	char _hasSiriDeviceId;
	char _hasSpeechId;

}

@property (nonatomic,retain) SISchemaUUID * siriDeviceId;                //@synthesize siriDeviceId=_siriDeviceId - In the implementation block
@property (assign,nonatomic) char hasSiriDeviceId;                       //@synthesize hasSiriDeviceId=_hasSiriDeviceId - In the implementation block
@property (nonatomic,retain) SISchemaUUID * speechId;                    //@synthesize speechId=_speechId - In the implementation block
@property (assign,nonatomic) char hasSpeechId;                           //@synthesize hasSpeechId=_hasSpeechId - In the implementation block
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
@property (assign,nonatomic) char hasTimeIntervalSince1970; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timeIntervalSince1970;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaUUID *)speechId;
-(void)setSpeechId:(SISchemaUUID *)arg1 ;
-(NSData *)jsonData;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)setSiriDeviceId:(SISchemaUUID *)arg1 ;
-(SISchemaUUID *)siriDeviceId;
-(char)hasSiriDeviceId;
-(char)hasSpeechId;
-(char)hasTimeIntervalSince1970;
-(void)setHasTimeIntervalSince1970:(char)arg1 ;
-(void)setHasSiriDeviceId:(char)arg1 ;
-(void)setHasSpeechId:(char)arg1 ;
@end

