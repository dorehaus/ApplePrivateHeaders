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

@interface SISchemaTVRemoteInvocationContext : SISchemaInstrumentationMessage {

	int _remoteType;
	SCD_Struct_SI0 _has;

}

@property (assign,nonatomic) int remoteType;                   //@synthesize remoteType=_remoteType - In the implementation block
@property (assign,nonatomic) char hasRemoteType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setRemoteType:(int)arg1 ;
-(int)remoteType;
-(char)hasRemoteType;
-(void)setHasRemoteType:(char)arg1 ;
@end

