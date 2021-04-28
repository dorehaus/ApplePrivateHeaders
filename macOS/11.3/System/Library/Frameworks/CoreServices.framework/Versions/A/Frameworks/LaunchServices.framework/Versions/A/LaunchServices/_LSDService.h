/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface _LSDService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (__weak,readonly) NSXPCListener * XPCListener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(void)beginListeningWithAllServices;
+(unsigned short)connectionType;
+(Class)clientClass;
+(char)isEnabled;
+(id)dispatchQueue;
+(id)XPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)synchronousXPCProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)allServiceClasses;
+(char)XPCConnectionIsAlwaysPrivileged;
+(id)XPCConnectionToService;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithXPCListener:(id)arg1 ;
-(NSXPCListener *)XPCListener;
@end

