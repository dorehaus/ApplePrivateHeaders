/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface TSULogCatThreadSafeMutableSet : NSObject {

	NSMutableSet* _objects;
	NSObject*<OS_dispatch_queue> _logCatQueue;

}
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)allObjects;
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(id)immutableSet;
@end

