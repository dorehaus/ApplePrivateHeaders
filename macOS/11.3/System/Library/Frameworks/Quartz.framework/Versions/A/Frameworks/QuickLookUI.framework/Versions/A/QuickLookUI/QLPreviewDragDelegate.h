/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewDragDelegate <NSObject>
@optional
-(char)setupDragPasteboard:(id)arg1;
-(id)draggingItems;
-(long long)draggingFormation;

@required
-(id)draggingSourceView;
-(char)useLegacyDragging;
-(CGRect*)sourceFrame;
-(id)beginDraggingSessionWithItems:(id)arg1 event:(id)arg2 source:(id)arg3;
-(CGRect*)borderFrame;
-(void)getImageRepresentationWithFrame:(CGRect)arg1 completion:(/*^block*/id)arg2;
-(id)draggedURL;
-(id)pasteboardWriter;

@end

