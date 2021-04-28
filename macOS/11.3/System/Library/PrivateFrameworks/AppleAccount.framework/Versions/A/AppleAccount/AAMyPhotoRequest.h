/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAMyPhotoRequest : AARequest {

	ACAccount* _account;
	NSString* _serverCacheTag;
	ACAccount* _iTunesAccount;

}

@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(ACAccount *)iTunesAccount;
-(void)setiTunesAccount:(id)arg1 ;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
@end

