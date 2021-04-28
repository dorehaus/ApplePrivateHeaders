/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, SISchemaSiriResponseContext, SISchemaGridCardSection, NSData;

@interface SISchemaUUFRShown : SISchemaInstrumentationMessage {

	NSString* _viewID;
	NSString* _snippetClass;
	int _siriUILocation;
	NSString* _dialogIdentifier;
	SISchemaSiriResponseContext* _siriResponseContext;
	NSString* _aceViewID;
	NSString* _aceViewClass;
	int _viewRegionDesignation;
	SISchemaGridCardSection* _gridCardSection;
	SCD_Struct_SI2 _has;
	char _hasViewID;
	char _hasSnippetClass;
	char _hasDialogIdentifier;
	char _hasSiriResponseContext;
	char _hasAceViewID;
	char _hasAceViewClass;
	char _hasGridCardSection;
	unsigned long long _whichSubsection;

}

@property (nonatomic,copy) NSString * viewID;                                                //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) char hasViewID;                                                 //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                                          //@synthesize snippetClass=_snippetClass - In the implementation block
@property (assign,nonatomic) char hasSnippetClass;                                           //@synthesize hasSnippetClass=_hasSnippetClass - In the implementation block
@property (assign,nonatomic) int siriUILocation;                                             //@synthesize siriUILocation=_siriUILocation - In the implementation block
@property (assign,nonatomic) char hasSiriUILocation; 
@property (nonatomic,copy) NSString * dialogIdentifier;                                      //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) char hasDialogIdentifier;                                       //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) char hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,copy) NSString * aceViewID;                                             //@synthesize aceViewID=_aceViewID - In the implementation block
@property (assign,nonatomic) char hasAceViewID;                                              //@synthesize hasAceViewID=_hasAceViewID - In the implementation block
@property (nonatomic,copy) NSString * aceViewClass;                                          //@synthesize aceViewClass=_aceViewClass - In the implementation block
@property (assign,nonatomic) char hasAceViewClass;                                           //@synthesize hasAceViewClass=_hasAceViewClass - In the implementation block
@property (assign,nonatomic) int viewRegionDesignation;                                      //@synthesize viewRegionDesignation=_viewRegionDesignation - In the implementation block
@property (assign,nonatomic) char hasViewRegionDesignation; 
@property (nonatomic,retain) SISchemaGridCardSection * gridCardSection;                      //@synthesize gridCardSection=_gridCardSection - In the implementation block
@property (assign,nonatomic) char hasGridCardSection;                                        //@synthesize hasGridCardSection=_hasGridCardSection - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichSubsection;                           //@synthesize whichSubsection=_whichSubsection - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSData *)jsonData;
-(SISchemaGridCardSection *)gridCardSection;
-(void)setGridCardSection:(SISchemaGridCardSection *)arg1 ;
-(void)setViewID:(NSString *)arg1 ;
-(NSString *)viewID;
-(char)hasViewID;
-(void)setHasViewID:(char)arg1 ;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(char)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(char)arg1 ;
-(void)setAceViewID:(NSString *)arg1 ;
-(void)setAceViewClass:(NSString *)arg1 ;
-(NSString *)aceViewID;
-(NSString *)aceViewClass;
-(char)hasDialogIdentifier;
-(char)hasAceViewID;
-(char)hasAceViewClass;
-(void)setHasDialogIdentifier:(char)arg1 ;
-(void)setHasAceViewID:(char)arg1 ;
-(void)setHasAceViewClass:(char)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(void)setSiriUILocation:(int)arg1 ;
-(void)setViewRegionDesignation:(int)arg1 ;
-(NSString *)snippetClass;
-(unsigned long long)whichSubsection;
-(int)siriUILocation;
-(int)viewRegionDesignation;
-(char)hasSnippetClass;
-(char)hasSiriUILocation;
-(void)setHasSiriUILocation:(char)arg1 ;
-(char)hasViewRegionDesignation;
-(void)setHasViewRegionDesignation:(char)arg1 ;
-(void)setHasSnippetClass:(char)arg1 ;
-(char)hasGridCardSection;
-(void)setHasGridCardSection:(char)arg1 ;
@end

