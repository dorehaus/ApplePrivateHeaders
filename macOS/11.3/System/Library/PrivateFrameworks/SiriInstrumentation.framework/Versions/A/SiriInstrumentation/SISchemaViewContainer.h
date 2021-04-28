/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaViewContainer : SISchemaInstrumentationMessage {

	NSString* _viewID;
	NSString* _snippetClass;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;
	char _hasViewID;
	char _hasSnippetClass;
	char _hasDialogIdentifier;
	char _hasDialogPhase;

}

@property (nonatomic,copy) NSString * viewID;                        //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) char hasViewID;                         //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                  //@synthesize snippetClass=_snippetClass - In the implementation block
@property (assign,nonatomic) char hasSnippetClass;                   //@synthesize hasSnippetClass=_hasSnippetClass - In the implementation block
@property (nonatomic,copy) NSString * dialogIdentifier;              //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) char hasDialogIdentifier;               //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,copy) NSString * dialogPhase;                   //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (assign,nonatomic) char hasDialogPhase;                    //@synthesize hasDialogPhase=_hasDialogPhase - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setViewID:(NSString *)arg1 ;
-(NSString *)viewID;
-(char)hasViewID;
-(void)setHasViewID:(char)arg1 ;
-(char)hasDialogPhase;
-(void)setHasDialogPhase:(char)arg1 ;
-(char)hasDialogIdentifier;
-(void)setHasDialogIdentifier:(char)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(NSString *)snippetClass;
-(char)hasSnippetClass;
-(void)setHasSnippetClass:(char)arg1 ;
@end

