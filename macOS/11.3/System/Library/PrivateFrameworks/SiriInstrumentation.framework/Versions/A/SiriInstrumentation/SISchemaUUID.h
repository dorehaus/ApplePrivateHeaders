/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaUUID : SISchemaInstrumentationMessage {

	NSData* _value;
	char _hasValue;

}

@property (nonatomic,copy) NSData * value;                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char hasValue;                    //@synthesize hasValue=_hasValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)value;
-(id)dictionaryRepresentation;
-(void)setValue:(NSData *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasValue;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasValue:(char)arg1 ;
-(NSData *)jsonData;
-(id)initWithNSUUID:(id)arg1 ;
-(id)toNSUUID;
@end
