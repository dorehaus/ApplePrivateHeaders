/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class SISchemaAnyEvent, NSString, NSData;

@interface SISchemaProvisionalEvent : SISchemaTopLevelUnionType {

	SISchemaAnyEvent* _anyEvent;
	NSString* _typeId;
	long long _version;
	SCD_Struct_SI0 _has;
	char _hasAnyEvent;
	char _hasTypeId;

}

@property (nonatomic,retain) SISchemaAnyEvent * anyEvent;              //@synthesize anyEvent=_anyEvent - In the implementation block
@property (assign,nonatomic) char hasAnyEvent;                         //@synthesize hasAnyEvent=_hasAnyEvent - In the implementation block
@property (nonatomic,copy) NSString * typeId;                          //@synthesize typeId=_typeId - In the implementation block
@property (assign,nonatomic) char hasTypeId;                           //@synthesize hasTypeId=_hasTypeId - In the implementation block
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasVersion;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasVersion:(char)arg1 ;
-(NSData *)jsonData;
-(void)setTypeId:(NSString *)arg1 ;
-(void)setHasTypeId:(char)arg1 ;
-(char)hasTypeId;
-(NSString *)typeId;
-(int)getAnyEventType;
-(void)setAnyEvent:(SISchemaAnyEvent *)arg1 ;
-(SISchemaAnyEvent *)anyEvent;
-(char)hasAnyEvent;
-(void)setHasAnyEvent:(char)arg1 ;
@end

