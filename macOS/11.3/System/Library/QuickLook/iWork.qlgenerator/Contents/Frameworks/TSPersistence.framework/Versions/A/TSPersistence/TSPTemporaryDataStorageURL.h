/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <CoreFoundation/NSURL.h>

@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL {

	TSUTemporaryDirectory* _parentDirectory;

}

@property (nonatomic,readonly) TSUTemporaryDirectory * parentDirectory;              //@synthesize parentDirectory=_parentDirectory - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUTemporaryDirectory *)parentDirectory;
-(id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2 ;
@end

