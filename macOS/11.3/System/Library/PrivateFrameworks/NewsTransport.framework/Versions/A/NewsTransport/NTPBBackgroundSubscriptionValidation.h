/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {

	NSString* _errorCode;
	NSString* _errorMessage;
	int _resultType;
	NSString* _sourceChannelId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) char hasResultType; 
@property (assign,nonatomic) int resultType;                          //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) char hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                 //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) char hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)errorCode;
-(void)setHasResultType:(char)arg1 ;
-(char)hasResultType;
-(void)setErrorCode:(NSString *)arg1 ;
-(char)hasErrorCode;
-(NSString *)errorMessage;
-(void)setErrorMessage:(NSString *)arg1 ;
-(char)hasErrorMessage;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(char)hasSourceChannelId;
-(NSString *)sourceChannelId;
@end
