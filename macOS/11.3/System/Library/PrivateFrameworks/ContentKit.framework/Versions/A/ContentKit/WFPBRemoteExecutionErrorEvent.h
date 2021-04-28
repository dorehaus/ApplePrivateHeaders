/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRemoteExecutionErrorEvent : PBCodable <NSCopying> {

	NSString* _destinationType;
	NSString* _errorCode;
	NSString* _errorDomain;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasSource; 
@property (nonatomic,retain) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) char hasDestinationType; 
@property (nonatomic,retain) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) char hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)source;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)errorCode;
-(NSString *)destinationType;
-(char)hasSource;
-(void)setDestinationType:(NSString *)arg1 ;
-(char)hasKey;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(char)hasDestinationType;
-(NSString *)errorDomain;
-(char)hasErrorDomain;
-(char)hasErrorCode;
@end

