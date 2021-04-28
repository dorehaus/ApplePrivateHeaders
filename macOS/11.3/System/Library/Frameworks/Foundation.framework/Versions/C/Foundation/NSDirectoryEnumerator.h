/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) char isEnumeratingDirectoryPostOrder; 
@property (readonly) unsigned long long level; 
-(id)nextObject;
-(unsigned long long)level;
-(NSDictionary *)fileAttributes;
-(NSDictionary *)directoryAttributes;
-(void)skipDescendents;
-(void)skipDescendants;
-(char)isEnumeratingDirectoryPostOrder;
@end

