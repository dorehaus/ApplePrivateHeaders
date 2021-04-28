/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface KGElementCollection : NSObject

@property (readonly) unsigned long long count; 
@property (readonly) id firstObject; 
@property (readonly) id lastObject; 
@property (copy,readonly) NSArray * allObjects; 
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSArray *)allObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstObject;
-(id)lastObject;
@end

