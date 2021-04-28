/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {

	NSMutableArray* _keys;
	NSMutableDictionary* _keyValues;

}
-(id)copy;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allValues;
-(id)dictionary;
-(id)keys;
-(id)valueForKey:(id)arg1 ;
-(void)_setupFrom:(id)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end
