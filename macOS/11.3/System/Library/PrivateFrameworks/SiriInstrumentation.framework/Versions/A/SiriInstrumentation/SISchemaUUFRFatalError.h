/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRFatalError : SISchemaInstrumentationMessage {

	NSString* _errorDomain;
	int _errorCode;
	SISchemaSiriResponseContext* _siriResponseContext;
	SCD_Struct_SI0 _has;
	char _hasErrorDomain;
	char _hasSiriResponseContext;

}

@property (nonatomic,copy) NSString * errorDomain;                                           //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasErrorDomain;                                            //@synthesize hasErrorDomain=_hasErrorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                                  //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (nonatomic,retain) SISchemaSiriResponseContext * siriResponseContext;              //@synthesize siriResponseContext=_siriResponseContext - In the implementation block
@property (assign,nonatomic) char hasSiriResponseContext;                                    //@synthesize hasSiriResponseContext=_hasSiriResponseContext - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)errorCode;
-(id)initWithJSON:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)errorDomain;
-(char)hasErrorDomain;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(NSData *)jsonData;
-(void)setHasErrorDomain:(char)arg1 ;
-(void)setSiriResponseContext:(SISchemaSiriResponseContext *)arg1 ;
-(SISchemaSiriResponseContext *)siriResponseContext;
-(char)hasSiriResponseContext;
-(void)setHasSiriResponseContext:(char)arg1 ;
@end

