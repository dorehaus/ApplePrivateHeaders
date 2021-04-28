/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying> {

	NSString* _label;
	NSString* _service;
	NSString* _urlString;
	NSString* _userIdentifier;
	NSString* _username;

}

@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) char hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) char hasUsername; 
@property (nonatomic,retain) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) char hasUserIdentifier; 
@property (nonatomic,retain) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) char hasService; 
@property (nonatomic,retain) NSString * service;                     //@synthesize service=_service - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)userIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)service;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)username;
-(void)setService:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(char)hasLabel;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(char)hasService;
-(char)hasUrlString;
-(char)hasUsername;
-(char)hasUserIdentifier;
@end

