/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

	NSString* path;
	NSArray* contents;
	unsigned long long idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned long long depth;
	char cross;
	char _padding[3];

}
+(id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(char)arg4 depth:(unsigned long long)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(unsigned long long)level;
-(id)fileAttributes;
-(id)directoryAttributes;
-(void)skipDescendents;
-(void)skipDescendants;
-(char)isEnumeratingDirectoryPostOrder;
-(id)_under;
-(id)currentSubdirectoryAttributes;
@end
