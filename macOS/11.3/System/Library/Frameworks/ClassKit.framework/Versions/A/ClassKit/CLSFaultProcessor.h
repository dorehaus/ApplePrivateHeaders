/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSQuery.h>

@protocol OS_dispatch_queue, OS_dispatch_group, CLSFaultProcessorDelegate;
@class NSMutableArray, NSObject, NSMapTable, NSMutableSet, NSString;

@interface CLSFaultProcessor : NSObject <CLSQuery> {

	NSMutableArray* _results;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSMapTable* _objects;
	NSMapTable* _relations;
	NSMapTable* _objectsIdsByParentID;
	NSMutableSet* _rootObjectIDs;
	id<CLSFaultProcessorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<CLSFaultProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootClasses;
-(id<CLSFaultProcessorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(oneway void)clientRemote_invalidate;
-(oneway void)clientRemote_deliverObject:(id)arg1 ;
-(void)faultObjects:(id)arg1 ;
-(void)completionNotify:(/*^block*/id)arg1 ;
-(oneway void)clientRemote_itemChanged:(unsigned long long)arg1 ;
-(oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2 ;
-(void)faultObject:(id)arg1 ;
-(char)waitUntilDone:(double)arg1 ;
-(void)_addObject:(id)arg1 ;
-(void)_faultObject:(id)arg1 ;
-(void)_inGroup:(/*^block*/id)arg1 ;
-(void)_descendIntoObject:(id)arg1 idsToProcess:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)_faultRelation:(id)arg1 fromObject:(id)arg2 ;
-(id)_childParentRelationForObject:(id)arg1 ;
-(char)_isRootObject:(id)arg1 withRelation:(id)arg2 ;
-(char)_isRootObject:(id)arg1 ;
@end

