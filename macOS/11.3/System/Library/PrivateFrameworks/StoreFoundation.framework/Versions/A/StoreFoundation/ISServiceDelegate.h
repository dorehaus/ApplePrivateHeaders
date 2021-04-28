/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSLock, NSMutableArray, NSString, NSArray;

@interface ISServiceDelegate : NSObject <NSXPCListenerDelegate> {

	NSLock* _clientsLock;
	NSMutableArray* _clients;
	NSString* _serviceName;

}

@property (readonly) NSArray * clients;                             //@synthesize clients=_clients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(Class)clientInterfaceClass;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSArray *)clients;
-(void)client:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)client:(id)arg1 didInvalidationConnection:(id)arg2 ;
@end
