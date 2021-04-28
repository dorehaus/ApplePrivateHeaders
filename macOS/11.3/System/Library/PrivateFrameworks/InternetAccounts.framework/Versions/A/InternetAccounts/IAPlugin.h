/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, IAAccount, IAProvider, NSString;

@interface IAPlugin : NSObject {

	NSBundle* _bundle;
	IAAccount* _account;
	IAProvider* _provider;

}

@property (retain) NSBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (retain) IAAccount * account;                  //@synthesize account=_account - In the implementation block
@property (retain) IAProvider * provider;                //@synthesize provider=_provider - In the implementation block
@property (readonly) NSString * identifier; 
-(NSString *)identifier;
-(IAProvider *)provider;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(void)setProvider:(IAProvider *)arg1 ;
-(IAAccount *)account;
-(void)setAccount:(IAAccount *)arg1 ;
-(id)imageForAccount:(id)arg1 ;
-(char)isSocial;
-(void)pluginDidLoad;
-(void)willSelectAccount:(id)arg1 ;
-(id)userVisibleProviderName;
-(id)specialPluginBehaviors;
-(Class)authenticatorClass;
-(long long)authType;
@end

