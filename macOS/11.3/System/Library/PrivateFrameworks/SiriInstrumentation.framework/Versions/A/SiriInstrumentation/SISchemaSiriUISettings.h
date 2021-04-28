/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaSiriUISettings : SISchemaInstrumentationMessage {

	char _alwaysShowUserSpeechTranscript;
	char _alwaysBlurBackground;
	char _alwaysShowSiriDialog;
	SCD_Struct_LT1 _has;

}

@property (assign,nonatomic) char alwaysShowUserSpeechTranscript;                 //@synthesize alwaysShowUserSpeechTranscript=_alwaysShowUserSpeechTranscript - In the implementation block
@property (assign,nonatomic) char hasAlwaysShowUserSpeechTranscript; 
@property (assign,nonatomic) char alwaysBlurBackground;                           //@synthesize alwaysBlurBackground=_alwaysBlurBackground - In the implementation block
@property (assign,nonatomic) char hasAlwaysBlurBackground; 
@property (assign,nonatomic) char alwaysShowSiriDialog;                           //@synthesize alwaysShowSiriDialog=_alwaysShowSiriDialog - In the implementation block
@property (assign,nonatomic) char hasAlwaysShowSiriDialog; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAlwaysShowUserSpeechTranscript:(char)arg1 ;
-(void)setAlwaysBlurBackground:(char)arg1 ;
-(void)setAlwaysShowSiriDialog:(char)arg1 ;
-(char)alwaysShowUserSpeechTranscript;
-(char)alwaysBlurBackground;
-(char)alwaysShowSiriDialog;
-(char)hasAlwaysShowUserSpeechTranscript;
-(void)setHasAlwaysShowUserSpeechTranscript:(char)arg1 ;
-(char)hasAlwaysBlurBackground;
-(void)setHasAlwaysBlurBackground:(char)arg1 ;
-(char)hasAlwaysShowSiriDialog;
-(void)setHasAlwaysShowSiriDialog:(char)arg1 ;
@end

