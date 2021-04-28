/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext, NSData;

@interface ICAuthorizeMachineRequest : NSObject <NSCopying> {

	NSString* _keybagPath;
	long long _qualityOfService;
	NSString* _reason;
	ICStoreRequestContext* _requestContext;
	NSData* _tokenData;

}

@property (nonatomic,copy) NSString * keybagPath;                               //@synthesize keybagPath=_keybagPath - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                  //@synthesize tokenData=_tokenData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(void)setReason:(NSString *)arg1 ;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(NSString *)keybagPath;
-(void)setKeybagPath:(NSString *)arg1 ;
@end

