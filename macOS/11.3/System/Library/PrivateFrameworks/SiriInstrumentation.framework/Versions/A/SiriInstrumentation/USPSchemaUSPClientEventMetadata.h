/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaUUID, USPSchemaUSPMeasurementContext, NSData;

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage {

	SISchemaUUID* _uspId;
	USPSchemaUSPMeasurementContext* _context;
	SISchemaUUID* _sutFingerprint;
	char _hasUspId;
	char _hasContext;
	char _hasSutFingerprint;

}

@property (nonatomic,retain) SISchemaUUID * uspId;                                  //@synthesize uspId=_uspId - In the implementation block
@property (assign,nonatomic) char hasUspId;                                         //@synthesize hasUspId=_hasUspId - In the implementation block
@property (nonatomic,retain) USPSchemaUSPMeasurementContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char hasContext;                                       //@synthesize hasContext=_hasContext - In the implementation block
@property (nonatomic,retain) SISchemaUUID * sutFingerprint;                         //@synthesize sutFingerprint=_sutFingerprint - In the implementation block
@property (assign,nonatomic) char hasSutFingerprint;                                //@synthesize hasSutFingerprint=_hasSutFingerprint - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(USPSchemaUSPMeasurementContext *)context;
-(void)setContext:(USPSchemaUSPMeasurementContext *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(char)hasContext;
-(NSData *)jsonData;
-(void)setHasContext:(char)arg1 ;
-(void)setUspId:(SISchemaUUID *)arg1 ;
-(void)setSutFingerprint:(SISchemaUUID *)arg1 ;
-(SISchemaUUID *)uspId;
-(SISchemaUUID *)sutFingerprint;
-(char)hasUspId;
-(char)hasSutFingerprint;
-(void)setHasUspId:(char)arg1 ;
-(void)setHasSutFingerprint:(char)arg1 ;
@end

