/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSPersistence/TSPObject.h>

@protocol TSWPStyleProvider;
@class TSWPStorage;

@interface TSWPStoragePasteboardProxy : TSPObject {

	TSWPStorage* _storage;
	NSRange _range;
	id<TSWPStyleProvider> _styleProvider;

}

@property (nonatomic,readonly) NSRange storageRange;              //@synthesize range=_range - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 range:(NSRange)arg3 styleProvider:(id)arg4 ;
-(NSRange)storageRange;
@end

