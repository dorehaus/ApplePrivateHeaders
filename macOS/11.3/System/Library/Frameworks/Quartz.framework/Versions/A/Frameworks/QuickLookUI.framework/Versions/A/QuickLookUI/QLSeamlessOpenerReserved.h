/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLSeamlessOpenerDelegate, QLSeamlessCloserDelegate;
#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSAppleEventDescriptor, NSString, NSArray, NSImage, NSWindow;

@interface QLSeamlessOpenerReserved : NSObject {

	id<QLSeamlessOpenerDelegate> delegate;
	id<QLSeamlessCloserDelegate> closerDelegate;
	LSApplicationParameters_V1* parameters;
	NSAppleEventDescriptor* additionalEventParamDescriptor;
	NSString* searchString;
	NSArray* additionalAnimatingItems;
	NSImage* transientImage;
	NSWindow* transientWindow;
	long long transientRetainCount;
	char transientShouldAnimate;

}
-(void)finalize;
-(void)dealloc;
@end

