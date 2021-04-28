/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLThumbnailGeneratorInfo.h>

@class QLExtension, NSString;

@interface QLThumbnailExtensionInfo : NSObject <QLThumbnailGeneratorInfo> {

	QLExtension* _extension;
	unsigned long long _minimumThumbnailSize;

}

@property (retain) QLExtension * extension;                                //@synthesize extension=_extension - In the implementation block
@property (readonly) char isThumbnailGeneratorDisabled; 
@property (readonly) unsigned long long minimumThumbnailSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(QLExtension *)extension;
-(void)setExtension:(QLExtension *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(char)isThumbnailGeneratorDisabled;
-(unsigned long long)minimumThumbnailSize;
-(void)score:(long long)arg1 ;
@end

