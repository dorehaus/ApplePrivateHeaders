/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMCProfileConnection.h>

@protocol CNMCProfileConnection <NSObject>
@required
-(id)observableForManagedConfigChanged;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
-(char)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;

@end


@class NSString;

@interface CNMCProfileConnection : NSObject <CNMCProfileConnection>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)observableForManagedConfigChanged;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 ;
-(char)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2 ;
@end
