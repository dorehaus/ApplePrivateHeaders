/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaUEILaunchStarted, SISchemaUEILaunchEnded, NSData;

@interface SISchemaUEILaunchContext : SISchemaInstrumentationMessage {

	SISchemaUEILaunchStarted* _startedOrChanged;
	SISchemaUEILaunchEnded* _ended;
	char _hasStartedOrChanged;
	char _hasEnded;
	unsigned long long _whichContextevent;

}

@property (nonatomic,retain) SISchemaUEILaunchStarted * startedOrChanged;              //@synthesize startedOrChanged=_startedOrChanged - In the implementation block
@property (assign,nonatomic) char hasStartedOrChanged;                                 //@synthesize hasStartedOrChanged=_hasStartedOrChanged - In the implementation block
@property (nonatomic,retain) SISchemaUEILaunchEnded * ended;                           //@synthesize ended=_ended - In the implementation block
@property (assign,nonatomic) char hasEnded;                                            //@synthesize hasEnded=_hasEnded - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichContextevent;                   //@synthesize whichContextevent=_whichContextevent - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(SISchemaUEILaunchEnded *)ended;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasEnded;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setHasEnded:(char)arg1 ;
-(void)setStartedOrChanged:(SISchemaUEILaunchStarted *)arg1 ;
-(void)setEnded:(SISchemaUEILaunchEnded *)arg1 ;
-(SISchemaUEILaunchStarted *)startedOrChanged;
-(unsigned long long)whichContextevent;
-(char)hasStartedOrChanged;
-(void)setHasStartedOrChanged:(char)arg1 ;
@end

