/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class LTSchemaTask, NSString, LTSchemaError, NSData;

@interface LTSchemaBatchTranslationEvent : SISchemaInstrumentationMessage {

	LTSchemaTask* _task;
	NSString* _sessionID;
	NSString* _requestID;
	NSString* _systemLocale;
	unsigned _batchSeqNo;
	unsigned _numberOfParagraphs;
	unsigned _responseTimeMs;
	unsigned _numParagraphFailures;
	LTSchemaError* _error;
	SCD_Struct_LT3 _has;
	char _hasTask;
	char _hasSessionID;
	char _hasRequestID;
	char _hasSystemLocale;
	char _hasError;

}

@property (nonatomic,retain) LTSchemaTask * task;                        //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) char hasTask;                               //@synthesize hasTask=_hasTask - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasSessionID;                          //@synthesize hasSessionID=_hasSessionID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) char hasRequestID;                          //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * systemLocale;                      //@synthesize systemLocale=_systemLocale - In the implementation block
@property (assign,nonatomic) char hasSystemLocale;                       //@synthesize hasSystemLocale=_hasSystemLocale - In the implementation block
@property (assign,nonatomic) unsigned batchSeqNo;                        //@synthesize batchSeqNo=_batchSeqNo - In the implementation block
@property (assign,nonatomic) char hasBatchSeqNo; 
@property (assign,nonatomic) unsigned numberOfParagraphs;                //@synthesize numberOfParagraphs=_numberOfParagraphs - In the implementation block
@property (assign,nonatomic) char hasNumberOfParagraphs; 
@property (assign,nonatomic) unsigned responseTimeMs;                    //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) char hasResponseTimeMs; 
@property (assign,nonatomic) unsigned numParagraphFailures;              //@synthesize numParagraphFailures=_numParagraphFailures - In the implementation block
@property (assign,nonatomic) char hasNumParagraphFailures; 
@property (nonatomic,retain) LTSchemaError * error;                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char hasError;                              //@synthesize hasError=_hasError - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(LTSchemaError *)error;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)systemLocale;
-(void)setError:(LTSchemaError *)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(char)hasError;
-(LTSchemaTask *)task;
-(void)setTask:(LTSchemaTask *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(NSData *)jsonData;
-(void)setHasError:(char)arg1 ;
-(char)hasRequestID;
-(void)setHasRequestID:(char)arg1 ;
-(void)setSystemLocale:(NSString *)arg1 ;
-(void)setBatchSeqNo:(unsigned)arg1 ;
-(void)setNumberOfParagraphs:(unsigned)arg1 ;
-(void)setResponseTimeMs:(unsigned)arg1 ;
-(void)setNumParagraphFailures:(unsigned)arg1 ;
-(unsigned)batchSeqNo;
-(unsigned)numberOfParagraphs;
-(unsigned)responseTimeMs;
-(unsigned)numParagraphFailures;
-(char)hasTask;
-(char)hasSystemLocale;
-(char)hasBatchSeqNo;
-(void)setHasBatchSeqNo:(char)arg1 ;
-(char)hasNumberOfParagraphs;
-(void)setHasNumberOfParagraphs:(char)arg1 ;
-(char)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(char)arg1 ;
-(char)hasNumParagraphFailures;
-(void)setHasNumParagraphFailures:(char)arg1 ;
-(void)setHasTask:(char)arg1 ;
-(void)setHasSystemLocale:(char)arg1 ;
@end

