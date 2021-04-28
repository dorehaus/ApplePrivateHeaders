/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface FLOWSchemaFLOWVoiceShortcutAction : SISchemaInstrumentationMessage {

	NSString* _appId;
	NSString* _intentCategory;
	NSString* _intentName;
	NSString* _intentNLDomain;
	char _hasAppId;
	char _hasIntentCategory;
	char _hasIntentName;
	char _hasIntentNLDomain;

}

@property (nonatomic,copy) NSString * appId;                       //@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) char hasAppId;                        //@synthesize hasAppId=_hasAppId - In the implementation block
@property (nonatomic,copy) NSString * intentCategory;              //@synthesize intentCategory=_intentCategory - In the implementation block
@property (assign,nonatomic) char hasIntentCategory;               //@synthesize hasIntentCategory=_hasIntentCategory - In the implementation block
@property (nonatomic,copy) NSString * intentName;                  //@synthesize intentName=_intentName - In the implementation block
@property (assign,nonatomic) char hasIntentName;                   //@synthesize hasIntentName=_hasIntentName - In the implementation block
@property (nonatomic,copy) NSString * intentNLDomain;              //@synthesize intentNLDomain=_intentNLDomain - In the implementation block
@property (assign,nonatomic) char hasIntentNLDomain;               //@synthesize hasIntentNLDomain=_hasIntentNLDomain - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)appId;
-(char)hasAppId;
-(NSData *)jsonData;
-(NSString *)intentCategory;
-(void)setIntentCategory:(NSString *)arg1 ;
-(char)hasIntentCategory;
-(void)setHasIntentCategory:(char)arg1 ;
-(void)setIntentName:(NSString *)arg1 ;
-(void)setIntentNLDomain:(NSString *)arg1 ;
-(NSString *)intentName;
-(NSString *)intentNLDomain;
-(char)hasIntentName;
-(char)hasIntentNLDomain;
-(void)setHasAppId:(char)arg1 ;
-(void)setHasIntentName:(char)arg1 ;
-(void)setHasIntentNLDomain:(char)arg1 ;
@end
