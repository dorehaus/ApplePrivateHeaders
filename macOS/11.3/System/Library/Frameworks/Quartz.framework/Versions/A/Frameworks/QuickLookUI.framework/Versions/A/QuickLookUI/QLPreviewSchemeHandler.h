/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewItem;
#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSImage, NSURL;

@interface QLPreviewSchemeHandler : NSObject {

	id<QLPreviewItem> _item;
	NSImage* icon;

}

@property (readonly) id<QLPreviewItem> previewItem; 
@property (readonly) NSURL * URL; 
@property (readonly) NSURL * launchURL; 
@property (readonly) int seamlessOpeningSupport; 
@property (readonly) NSImage * icon; 
+(void)registerHandlerClass:(Class)arg1 forScheme:(id)arg2 ;
+(id)handlerForPreviewItem:(id)arg1 ;
+(id)_handlerForScheme:(id)arg1 item:(id)arg2 ;
+(id)_handlerForURL:(id)arg1 item:(id)arg2 ;
+(id)_handlerClassForURL:(id)arg1 ;
+(char)isURLReachable:(id)arg1 ;
+(void)initialize;
-(id)filteredControlsFromControls:(id)arg1 ;
-(int)seamlessOpeningSupport;
-(CGImageRef)createImageFromIconForMaximumSize:(CGSize)arg1 ;
-(NSURL *)URL;
-(NSImage *)icon;
-(NSURL *)launchURL;
-(id<QLPreviewItem>)previewItem;
-(void)calculatePreviewURL:(id*)arg1 previewData:(id*)arg2 previewProperties:(id*)arg3 previewType:(id*)arg4 ;
-(CGImageRef)createImageForMaximumSize:(CGSize)arg1 options:(CFDictionaryRef)arg2 ;
-(id)initWithPreviewItem:(id)arg1 ;
@end

