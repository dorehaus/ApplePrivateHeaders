/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginServices.framework/Versions/A/FusionPluginServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FusionPluginServerInterface;
@class NSXPCListener, NSXPCConnection, NSString;

@interface FusionPluginServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	Class _principalClass;
	NSXPCConnection* _connection;
	id<FusionPluginServerInterface> _exportedObject;

}

@property (nonatomic,retain) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) Class principalClass;                                          //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<FusionPluginServerInterface> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(NSXPCConnection *)connection;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(Class)principalClass;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id<FusionPluginServerInterface>)exportedObject;
-(id)initWithClass:(Class)arg1 ;
-(void)setPrincipalClass:(Class)arg1 ;
@end

