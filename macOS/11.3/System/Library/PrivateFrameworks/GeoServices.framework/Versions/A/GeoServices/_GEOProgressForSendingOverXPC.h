/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEOMirroredProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _remoteConnections;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)_update;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)_connectionDidInvalidate;
-(void)_broadcastOverXPCConnections:(id)arg1 ;
-(id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2 ;
@end

