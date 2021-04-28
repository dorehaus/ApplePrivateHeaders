/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class ACAccount, NSURL, NSString;

@interface EDiCloudAliasSupport : NSObject <EFLoggable> {

	ACAccount* _appleAccount;

}

@property (nonatomic,readonly) ACAccount * appleAccount;                         //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) NSURL * aliasLookupURL; 
@property (nonatomic,readonly) NSString * aliasUserAgent; 
@property (nonatomic,readonly) NSString * aliasAuthorizationHeader; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(ACAccount *)appleAccount;
-(id)initWithAppleAccount:(id)arg1 ;
-(id)anisetteDataWithError:(id*)arg1 ;
-(NSURL *)aliasLookupURL;
-(NSString *)aliasAuthorizationHeader;
-(NSString *)aliasUserAgent;
-(id)_prepareAliasDataForEmailAddresses:(id)arg1 defaultEmailAddress:(id)arg2 ;
-(void)pushUpdateForAliasDataWithEmailAddresses:(id)arg1 defaultEmailAddress:(id)arg2 ;
@end

