/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SHLibrarySync <NSObject>
@property (__weak) id<SHLibrarySyncDelegate> delegate; 
@required
-(id<SHLibrarySyncDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)synchronizeChanges:(id)arg1;

@end

