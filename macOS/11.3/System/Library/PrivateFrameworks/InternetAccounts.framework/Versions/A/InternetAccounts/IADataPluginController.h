/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IADataPluginDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IADataPluginController : NSObject <IADataPluginDelegate> {

	NSMutableDictionary* _plugins;
	NSMutableDictionary* _workQueues;
	NSMutableArray* _dataPluginNotificationHistory;

}

@property (retain) NSMutableArray * dataPluginNotificationHistory;              //@synthesize dataPluginNotificationHistory=_dataPluginNotificationHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)plugin:(id)arg1 performBlock:(/*^block*/id)arg2 withTimeOut:(long long)arg3 ;
+(void)plugin:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)plugin:(id)arg1 performBlock:(/*^block*/id)arg2 withTimeOut:(long long)arg3 ;
-(id)_queueForPluginID:(id)arg1 ;
-(NSMutableArray *)dataPluginNotificationHistory;
-(void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3 ;
-(void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3 ;
-(void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3 ;
-(void)plugin:(id)arg1 didCreateAccountUID:(id)arg2 ;
-(void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2 ;
-(void)plugin:(id)arg1 didChangeAccountUID:(id)arg2 ;
-(char)plugin:(id)arg1 handleCertificateError:(id)arg2 ;
-(void)plugin:(id)arg1 aosAccountMigrationFinished:(id)arg2 ;
-(void)setDataPluginNotificationHistory:(NSMutableArray *)arg1 ;
@end

