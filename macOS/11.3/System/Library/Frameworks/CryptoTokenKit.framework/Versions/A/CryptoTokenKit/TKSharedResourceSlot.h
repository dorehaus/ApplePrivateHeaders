/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, TKSharedResource, NSObject;

@interface TKSharedResourceSlot : NSObject {

	NSString* _name;
	TKSharedResource* _resource;
	id _object;
	NSObject*<OS_dispatch_source> _idleTimer;
	/*^block*/id _createObjectBlock;
	/*^block*/id _objectDestroyedBlock;
	double _idleTimeout;
	NSObject*<OS_dispatch_queue> _idleQueue;

}

@property (nonatomic,copy) id createObjectBlock;                                  //@synthesize createObjectBlock=_createObjectBlock - In the implementation block
@property (nonatomic,copy) id objectDestroyedBlock;                               //@synthesize objectDestroyedBlock=_objectDestroyedBlock - In the implementation block
@property (assign,nonatomic) double idleTimeout;                                  //@synthesize idleTimeout=_idleTimeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idleQueue;              //@synthesize idleQueue=_idleQueue - In the implementation block
-(void)setObjectDestroyedBlock:(id)arg1 ;
-(void)setIdleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)destroyObject;
-(NSObject*<OS_dispatch_queue>)idleQueue;
-(id)createObjectBlock;
-(id)objectDestroyedBlock;
-(void)dealloc;
-(id)description;
-(id)object;
-(id)initWithName:(id)arg1 ;
-(double)idleTimeout;
-(void)releaseResource;
-(void)setIdleTimeout:(double)arg1 ;
-(void)setCreateObjectBlock:(id)arg1 ;
-(id)resourceWithError:(id*)arg1 ;
@end

