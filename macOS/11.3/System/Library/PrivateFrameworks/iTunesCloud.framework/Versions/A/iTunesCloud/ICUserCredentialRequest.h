/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, ICUserIdentityStore, ICClientInfo;

@interface ICUserCredentialRequest : NSObject <NSCopying> {

	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;
	ICClientInfo* _clientInfo;
	long long _qualityOfService;
	double _timeoutInterval;

}

@property (nonatomic,copy,readonly) ICUserIdentity * identity;                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;              //@synthesize identityStore=_identityStore - In the implementation block
@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                   //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                         //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(ICUserIdentity *)identity;
-(void)setTimeoutInterval:(double)arg1 ;
-(ICClientInfo *)clientInfo;
-(double)timeoutInterval;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
-(ICUserIdentityStore *)identityStore;
@end

