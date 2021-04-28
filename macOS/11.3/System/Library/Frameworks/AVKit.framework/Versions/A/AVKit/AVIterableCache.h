/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSCache.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMutableSet, NSArray, NSString;

@interface AVIterableCache : NSCache <NSCacheDelegate> {

	NSMutableSet* _allObjectsSet;

}

@property (readonly) NSArray * allObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(NSArray *)allObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end

