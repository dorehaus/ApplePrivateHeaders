/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface LTSchemaASRSpeechTranslationEvent : SISchemaInstrumentationMessage {

	NSString* _requestID;
	NSString* _selectedLocale;
	unsigned _timeToFirstPartialMs;
	unsigned _timeToFinalResultMs;
	unsigned _latencyFinalResultMs;
	SCD_Struct_LT1 _has;
	char _hasRequestID;
	char _hasSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) char hasRequestID;                          //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * selectedLocale;                    //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) char hasSelectedLocale;                     //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (assign,nonatomic) unsigned timeToFirstPartialMs;              //@synthesize timeToFirstPartialMs=_timeToFirstPartialMs - In the implementation block
@property (assign,nonatomic) char hasTimeToFirstPartialMs; 
@property (assign,nonatomic) unsigned timeToFinalResultMs;               //@synthesize timeToFinalResultMs=_timeToFinalResultMs - In the implementation block
@property (assign,nonatomic) char hasTimeToFinalResultMs; 
@property (assign,nonatomic) unsigned latencyFinalResultMs;              //@synthesize latencyFinalResultMs=_latencyFinalResultMs - In the implementation block
@property (assign,nonatomic) char hasLatencyFinalResultMs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setSelectedLocale:(NSString *)arg1 ;
-(void)setTimeToFirstPartialMs:(unsigned)arg1 ;
-(void)setTimeToFinalResultMs:(unsigned)arg1 ;
-(void)setLatencyFinalResultMs:(unsigned)arg1 ;
-(NSString *)selectedLocale;
-(unsigned)timeToFirstPartialMs;
-(unsigned)timeToFinalResultMs;
-(unsigned)latencyFinalResultMs;
-(char)hasRequestID;
-(char)hasSelectedLocale;
-(char)hasTimeToFirstPartialMs;
-(void)setHasTimeToFirstPartialMs:(char)arg1 ;
-(char)hasTimeToFinalResultMs;
-(void)setHasTimeToFinalResultMs:(char)arg1 ;
-(char)hasLatencyFinalResultMs;
-(void)setHasLatencyFinalResultMs:(char)arg1 ;
-(void)setHasRequestID:(char)arg1 ;
-(void)setHasSelectedLocale:(char)arg1 ;
@end

