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

@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage {

	NSString* _aceID;
	int _speechTranscriptionType;
	SCD_Struct_SI0 _has;
	char _hasAceID;

}

@property (nonatomic,copy) NSString * aceID;                               //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) char hasAceID;                                //@synthesize hasAceID=_hasAceID - In the implementation block
@property (assign,nonatomic) int speechTranscriptionType;                  //@synthesize speechTranscriptionType=_speechTranscriptionType - In the implementation block
@property (assign,nonatomic) char hasSpeechTranscriptionType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAceID:(NSString *)arg1 ;
-(void)setSpeechTranscriptionType:(int)arg1 ;
-(NSString *)aceID;
-(int)speechTranscriptionType;
-(char)hasAceID;
-(char)hasSpeechTranscriptionType;
-(void)setHasSpeechTranscriptionType:(char)arg1 ;
-(void)setHasAceID:(char)arg1 ;
@end

