/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface USPSchemaUSPSessionInfoItem : SISchemaInstrumentationMessage {

	NSString* _name;
	NSString* _value;
	char _hasName;
	char _hasValue;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char hasName;                     //@synthesize hasName=_hasName - In the implementation block
@property (nonatomic,copy) NSString * value;                   //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char hasValue;                    //@synthesize hasValue=_hasValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(id)dictionaryRepresentation;
-(void)setValue:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasName;
-(char)hasValue;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasValue:(char)arg1 ;
-(NSData *)jsonData;
-(void)setHasName:(char)arg1 ;
@end
