/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSMenu.h>

@class NSMenuItem, QFilter;

@interface QFilterActionMenu : NSMenu {

	NSMenuItem* LockUnlockMenuItem;
	NSMenuItem* ColorSubmenu;
	NSMenuItem* AssignProfileMenuItem;
	NSMenuItem* DefaultProfileMenuItem;
	NSMenuItem* RenderIntentMenuItem;
	NSMenuItem* IntermediateTransformMenuItem;
	NSMenuItem* ConvertToProfileMenuItem;
	NSMenuItem* ImageSubmenu;
	NSMenuItem* ColorImageSamplingMenuItem;
	NSMenuItem* GrayImageSamplingMenuItem;
	NSMenuItem* ImageCompressionMenuItem;
	NSMenuItem* ImageConvolutionMenuItem;
	NSMenuItem* PDFSubmenu;
	NSMenuItem* PDFPoliciesMenuItem;
	NSMenuItem* PDFX3MenuItem;
	NSMenuItem* DomainItem;
	NSMenuItem* CommentItem;
	QFilter* filter;

}
-(id)filter;
-(void)setFilter:(id)arg1 ;
@end

