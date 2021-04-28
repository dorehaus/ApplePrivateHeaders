/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/Versions/A/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedUtils/LABaseService.h>
#import <libobjc.A.dylib/LAServiceManager.h>

@class NSMutableDictionary, NSString;

@interface LABaseServiceManager : LABaseService <LAServiceManager> {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) unsigned long long sessionsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(char)allowsMultipleClientsForServiceType:(id)arg1 ;
-(void)_shutdownSessionsWithServiceType:(id)arg1 ;
-(unsigned long long)sessionsCount;
-(id)init;
-(void)bootstrapSessionServiceType:(id)arg1 clientID:(id)arg2 clientConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)bootstrapSessionServiceType:(id)arg1 clientID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)shutdownSessionsWithMatchingID:(id)arg1 ;
-(void)bootstrapServiceWithType:(id)arg1 clientConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
