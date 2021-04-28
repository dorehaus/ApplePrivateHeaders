/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSURL, NSData;

@interface _WBSFaviconRecord : NSObject {

	char _isPrivate;
	NSURL* _pageURL;
	NSURL* _originalPageURL;
	NSURL* _iconURL;
	NSData* _iconData;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * pageURL;                      //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,readonly) NSURL * originalPageURL;              //@synthesize originalPageURL=_originalPageURL - In the implementation block
@property (nonatomic,readonly) NSURL * iconURL;                      //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;               //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char isPrivate;                       //@synthesize isPrivate=_isPrivate - In the implementation block
+(id)new;
-(CGSize)size;
-(id)init;
-(NSURL *)iconURL;
-(NSData *)iconData;
-(char)isPrivate;
-(NSURL *)pageURL;
-(id)initWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 iconData:(id)arg4 size:(CGSize)arg5 isPrivate:(char)arg6 ;
-(NSURL *)originalPageURL;
@end

