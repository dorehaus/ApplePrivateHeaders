/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSMutableDictionary;

@interface _NSCGSTransaction : NSObject {

	NSPointerArray* _preCommitActions[3];
	NSPointerArray* _postCommitActions;
	NSMutableDictionary* _objects;
	const void* _disableUpdatesToken;

}
+(void)initialize;
+(char)isActive;
+(void)setSynchronous:(char)arg1 ;
+(id)currentTransaction;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(void)disableUpdates;
-(void)addActionWithOrder:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addPostCommitAction:(/*^block*/id)arg1 ;
@end

