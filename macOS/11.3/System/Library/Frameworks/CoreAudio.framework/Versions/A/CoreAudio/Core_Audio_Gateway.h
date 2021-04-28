/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSXPCListenerEndpoint, NSObject, NSString;

@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _io_queue;
	shared_ptr<HAL::Client::Object_ID_Map>* _clientObjectMap;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                       //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) shared_ptr<HAL::Client::Object_ID_Map>* clientObjectMap;              //@synthesize clientObjectMap=_clientObjectMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> io_queue;                                //@synthesize io_queue=_io_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)initWithObjectMap:(shared_ptr<HAL::Client::Object_ID_Map>*)arg1 ;
-(void)create_endpoint;
-(void)destroy_endpoint;
-(char)has_endpoint;
-(void)handle_server_disconnected;
-(void)handle_server_reconnected;
-(shared_ptr<HAL::Client::Object_ID_Map>*)clientObjectMap;
-(NSObject*<OS_dispatch_queue>)io_queue;
@end

