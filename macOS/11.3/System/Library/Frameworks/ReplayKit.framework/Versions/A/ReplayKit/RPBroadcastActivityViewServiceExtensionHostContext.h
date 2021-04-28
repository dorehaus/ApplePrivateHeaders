/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/Versions/A/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPBroadcastActivityViewServiceHostProtocol.h>

@class RPBroadcastActivityHostRemoteNSViewController, NSString;

@interface RPBroadcastActivityViewServiceExtensionHostContext : NSExtensionContext <RPBroadcastActivityViewServiceHostProtocol> {

	RPBroadcastActivityHostRemoteNSViewController* _hostViewController;

}

@property (nonatomic,retain) RPBroadcastActivityHostRemoteNSViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteProxy;
-(oneway void)presentBroadcastActivitySheet;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(char)arg4 ;
-(void)setHostViewController:(RPBroadcastActivityHostRemoteNSViewController *)arg1 ;
-(RPBroadcastActivityHostRemoteNSViewController *)hostViewController;
@end
