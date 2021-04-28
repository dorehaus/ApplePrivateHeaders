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

@interface SISchemaLogicalTimestamp : SISchemaInstrumentationMessage {

	long long _timestampInNanoseconds;
	SISchemaUUID* _clockIdentifier;
	SCD_Struct_SI0 _has;
	char _hasClockIdentifier;

}

@property (assign,nonatomic) long long timestampInNanoseconds;              //@synthesize timestampInNanoseconds=_timestampInNanoseconds - In the implementation block
@property (assign,nonatomic) char hasTimestampInNanoseconds; 
@property (nonatomic,retain) SISchemaUUID * clockIdentifier;                //@synthesize clockIdentifier=_clockIdentifier - In the implementation block
@property (assign,nonatomic) char hasClockIdentifier;                       //@synthesize hasClockIdentifier=_hasClockIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setTimestampInNanoseconds:(long long)arg1 ;
-(void)setClockIdentifier:(SISchemaUUID *)arg1 ;
-(SISchemaUUID *)clockIdentifier;
-(long long)timestampInNanoseconds;
-(char)hasTimestampInNanoseconds;
-(void)setHasTimestampInNanoseconds:(char)arg1 ;
-(char)hasClockIdentifier;
-(void)setHasClockIdentifier:(char)arg1 ;
@end

