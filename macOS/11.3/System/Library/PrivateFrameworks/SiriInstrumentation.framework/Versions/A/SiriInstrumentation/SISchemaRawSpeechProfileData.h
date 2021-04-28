/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaRawSpeechProfileData : SISchemaInstrumentationMessage {

	char _hasR;
	NSData* _r;

}

@property (r,nonatomic,copy) NSData * r;                       //@synthesize r=_r - In the implementation block
@property (assign,nonatomic) char hasR;                        //@synthesize hasR=_hasR - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)r;
-(NSData *)jsonData;
-(void)setR:(NSData *)arg1 ;
-(char)hasR;
-(void)setHasR:(char)arg1 ;
@end

