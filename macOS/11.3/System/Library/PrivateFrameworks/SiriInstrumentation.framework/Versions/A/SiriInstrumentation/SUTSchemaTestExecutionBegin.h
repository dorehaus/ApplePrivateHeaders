/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SUTSchemaTestContext, NSData;

@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage {

	SUTSchemaTestContext* _context;
	char _hasContext;

}

@property (nonatomic,retain) SUTSchemaTestContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char hasContext;                             //@synthesize hasContext=_hasContext - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(SUTSchemaTestContext *)context;
-(void)setContext:(SUTSchemaTestContext *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(char)hasContext;
-(NSData *)jsonData;
-(void)setHasContext:(char)arg1 ;
@end

