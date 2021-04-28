/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@class NSString;

@interface XARDirectoryEnumerator : NSDirectoryEnumerator {

	xar_tRef _xar;
	xar_iter_tRef _xar_iter;
	xar_file_tRef _current_xar_file;
	char _didPeek;
	char _isDone;
	NSString* _basePath;

}
-(char)_seekToSubpath:(id)arg1 ;
-(xar_file_tRef)_next_file;
-(id)initWithXAR:(xar_tRef)arg1 subpath:(id)arg2 ;
-(xar_file_tRef)xar_file;
-(void)dealloc;
-(id)nextObject;
-(char)isDirectory;
-(void)skipDescendents;
-(void)skipDescendants;
@end

