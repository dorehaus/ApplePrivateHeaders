/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPathWatcherClient <NSObject>
@required
-(void)pathWatcher:(id)arg1 fileAtURLWasMoved:(id)arg2;
-(void)pathWatcher:(id)arg1 fileAtURLWasModified:(id)arg2 onlyAttributes:(char)arg3;
-(void)pathWatcher:(id)arg1 fileAtURLWasDeleted:(id)arg2;

@end
