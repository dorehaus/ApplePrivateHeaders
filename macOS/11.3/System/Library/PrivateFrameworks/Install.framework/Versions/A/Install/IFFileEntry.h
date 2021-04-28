/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class NSMutableArray;

@interface IFFileEntry : NSObject {

	NSMutableArray* _children;
	IFFileEntry* _parent;
	int _hash;

}
-(unsigned long long)size;
-(void)dealloc;
-(unsigned long long)hash;
-(id)path;
-(char)isDirectory;
-(id)fileType;
-(stat*)statInfo;
-(int)compressionType;
-(void)setParentEntry:(id)arg1 ;
-(id)parentEntry;
-(unsigned long long)rawSize;
-(long long)rawOffset;
-(id)childEntries;
-(void)addChildEntry:(id)arg1 ;
-(id)rawHashTypes;
-(id)rawHashForType:(id)arg1 ;
@end

