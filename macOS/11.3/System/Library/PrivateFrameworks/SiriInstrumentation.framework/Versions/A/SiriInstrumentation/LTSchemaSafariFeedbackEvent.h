/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class LTSchemaTask, NSString, NSData;

@interface LTSchemaSafariFeedbackEvent : SISchemaInstrumentationMessage {

	LTSchemaTask* _task;
	NSString* _sessionID;
	NSString* _userFeedbackContentSource;
	NSString* _userFeedbackContentTarget;
	char _hasTask;
	char _hasSessionID;
	char _hasUserFeedbackContentSource;
	char _hasUserFeedbackContentTarget;

}

@property (nonatomic,retain) LTSchemaTask * task;                             //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) char hasTask;                                    //@synthesize hasTask=_hasTask - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasSessionID;                               //@synthesize hasSessionID=_hasSessionID - In the implementation block
@property (nonatomic,copy) NSString * userFeedbackContentSource;              //@synthesize userFeedbackContentSource=_userFeedbackContentSource - In the implementation block
@property (assign,nonatomic) char hasUserFeedbackContentSource;               //@synthesize hasUserFeedbackContentSource=_hasUserFeedbackContentSource - In the implementation block
@property (nonatomic,copy) NSString * userFeedbackContentTarget;              //@synthesize userFeedbackContentTarget=_userFeedbackContentTarget - In the implementation block
@property (assign,nonatomic) char hasUserFeedbackContentTarget;               //@synthesize hasUserFeedbackContentTarget=_hasUserFeedbackContentTarget - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(LTSchemaTask *)task;
-(void)setTask:(LTSchemaTask *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(NSData *)jsonData;
-(char)hasTask;
-(void)setHasTask:(char)arg1 ;
-(void)setUserFeedbackContentSource:(NSString *)arg1 ;
-(void)setUserFeedbackContentTarget:(NSString *)arg1 ;
-(NSString *)userFeedbackContentSource;
-(NSString *)userFeedbackContentTarget;
-(char)hasUserFeedbackContentSource;
-(char)hasUserFeedbackContentTarget;
-(void)setHasUserFeedbackContentSource:(char)arg1 ;
-(void)setHasUserFeedbackContentTarget:(char)arg1 ;
@end
